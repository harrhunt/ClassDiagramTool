//
// Authored by Patience and Hunter
//

#pragma once

#include <string>
#include <vector>
#include <regex>
#include "ClassInfo.hh"
#include "Method.hh"
#include "Field.hh"


class ClassParser {
private:
    static std::regex classRegex;
    static std::regex methodRegex;
    static std::regex fieldRegex;
    static std::regex scopeRegex;

public:
    /// Parses a the given string for classes and their methods and fields and returns a vector of all the classes found.
    /// \param classContents The string to parse for classes
    /// \return A vector of ClassInfo objects filled with the methods and fields found in the string for that class
    static std::vector<ClassInfo> parseClasses(std::string classContents) {
        std::vector<ClassInfo> classInfos;
        std::smatch classMatch;
        int startPosition = 0;
        int endPosition = 0;

        // Find all the classes in the given piece of text
        while (std::regex_search(classContents, classMatch, classRegex)) {
            // Get the contents of the class that was matched and get the strings for it
            std::tie(startPosition, endPosition) = findMatchingMarks(classContents.substr(classMatch.position()));
            std::string classSection = classContents.substr(classMatch.position() + startPosition, endPosition - startPosition + 1);

            // Create the class that was found
            ClassInfo classInfo(classMatch[1]);

            // Breaks the class sections into public, private, and protected sections and passes
            // them into the parse methods and fields methods
            std::vector<std::tuple<std::string, std::string>> scopeSections = findScopeSections(classSection);

            for (const auto& scopeSection: scopeSections) {
                // Break out the scope and the text associated
                std::string scope;
                std::string scopeContents;
                std::tie(scope, scopeContents) = scopeSection;

                // Gather the methods in the scope section of the class and add them to the class object
                parseMethods(scopeContents, classInfo, scope);
            }

            // TODO: Gather the fields in the class and add them to the class object

            // Add the class to the vector of classes
            classInfos.push_back(classInfo);

            classContents = classMatch.suffix().str();
        }
        return classInfos;
    }

private:
    /// Parses the given string for any methods and adds them to the given class object with the given scope.
    /// \param sectionContents The string to parse for methods
    /// \param classInfo The class object to put the parsed methods into
    /// \param scope The scope of the methods
    static void parseMethods(std::string sectionContents, ClassInfo &classInfo, const std::string &scope) {
        std::smatch methodMatch;
        while (std::regex_search(sectionContents, methodMatch, methodRegex)) {
            classInfo.addMethod(Method(methodMatch[2], methodMatch[1], scope, methodMatch[3]));
            sectionContents = methodMatch.suffix().str();
        }
    }

    /// Parses the given string for any fields and adds them to the given class object with the given scope.
    /// \param sectionContents The string to parse for fields
    /// \param classInfo The class object to put the parsed fields into
    /// \param scope The scope of the fields
    static void parseFields(std::string sectionContents, ClassInfo &classInfo, const std::string &scope) {
        // TODO: Actually figure out how to do this. (remove methods from string?)
//        std::smatch fieldMatch;
//        while (std::regex_search(sectionContents, fieldMatch, fieldRegex)) {
//            classInfo.addField(Field(fieldMatch[2], fieldMatch[1], scope));
//            sectionContents = fieldMatch.suffix().str();
//        }
    }

    /// Finds the indices for matching opening and closing marks in a string of text based on what marks are specified.
    /// \param text The text to search for the matching opening and closing marks
    /// \param markOffset The number of matching marks to skip
    /// \param openMark The character to use as the opening mark to find (e.g. '(', '{', '[', '<')
    /// \param closeMark The character to use as the closing mark to find (e.g. ')', '}', ']', '>')
    /// \return a tuple containing the indices for the corresponding opening and closing marks respectively
    static std::tuple<int, int> findMatchingMarks(const std::string &text, int markOffset = 0, char openMark = '{', char closeMark = '}') {
        // Start at -1 so that the first increment of openPosition starts with the 0th character
        int openPosition = -1;
        int closePosition = 0;

        // This allows us to skip a number of matching braces equal to the markOffset
        int count = -markOffset;

        // Get the textLength ahead of time to reduce length calls
        unsigned long long textLength = text.length();

        // Find the position of the desired opening mark
        while (count < 1 && openPosition < textLength) {
            openPosition++;
            if (text[openPosition] == openMark) count++;
        }

        // Now that we have the open mark position, start from there and find the closing mark position
        closePosition = openPosition;
        while (count > 0 && closePosition < textLength) {
            closePosition++;
            if (text[closePosition] == closeMark) count--;
            else if (text[closePosition] == openMark) count++;
        }

        // If either the closing mark or opening mark are not found withing the bounds of the text, set the position to
        // -1 to symbolize non-existence
        if (closePosition >= textLength) return std::make_tuple(-1, -1);
        return std::make_tuple(openPosition, closePosition);
    }

    /// Finds a breaks up scope sections for a given string
    /// \param text The string to break up into scope sections
    /// \return a vector of tuples where the first index of the tuple is the scope and the second is the code section
    static std::vector<std::tuple<std::string, std::string>> findScopeSections(const std::string &text) {
        std::vector<std::tuple<std::string, std::string>> scopeSections;
        std::smatch scopeMatch;
        std::string textCopy = text;

        // Initial variables for grabbing the first section of anything not in a specifier
        unsigned long long previousIndex = 0;
        unsigned long long indexOffset = 0;

        // No specifier defaults to private
        std::string scope = "private";

        // Regex for 'public:', 'private:', and 'protected:' and add the previous section to the scopeSections
        while (std::regex_search(textCopy, scopeMatch, scopeRegex)) {
            // Calculate the current index relative to the original text file
            unsigned long long currentIndex = scopeMatch.position() + indexOffset;

            // Add the substring that occurs from the start index of the previous match to 1 minus the index of the
            // current match
            scopeSections.emplace_back(scope, text.substr(previousIndex, currentIndex - previousIndex));

            // The scope matched in this loop iteration is the scope that will be added in the next loop iteration
            scope = scopeMatch[1];

            // Calculate the previous index relative to the original text file
            previousIndex = currentIndex;

            // Update the search string so the regex doesn't match the same thing over and over again
            textCopy = scopeMatch.suffix().str();

            // Have to calculate an indexOffset since each subsequent regex search trims the string; thus match
            // positions are no longer relative to the original string
            indexOffset = text.length() - textCopy.length() - 1;
        }
        scopeSections.emplace_back(scope, text.substr(previousIndex, text.length() - previousIndex));

        return scopeSections;
    }
};
