/** 
 *  @file    main.cpp
 *  @author  Arjun Srinivasan Ambalam
 *  @copyright GNU Public License
 *  @brief Valgrind Exerciise ENPM808X
 *  @section DESCRIPTION
 *  Test case main file.
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
