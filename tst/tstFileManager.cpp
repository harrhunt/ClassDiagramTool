///
/// \Authors Hunter, Davis, Patience
/// \file tst/tstFileManager.hh
/// \note A test function to determine the effectiveness of the FileManager class
///
#include "gtest/gtest.h"
#include "FileManager.hh"
#include <assert.h>

TEST(tstFileManager, readFile) {
    // NOTE: Need relative path from build/tst if in build/tst
    EXPECT_EQ(FileManager::readFile("../../tst/tstFile.txt"), "Hello World!");
}

TEST(tstFileManager, getFilePaths) {
//    EXPECT_EQ(FileManager::getFilePaths("../../").at(0), "../../.git/logs/refs/stash");
}
