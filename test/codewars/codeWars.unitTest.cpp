#include <gtest/gtest.h>
#include "my_code_exercises.h"

// Take a Ten Minutes Walk
//https://www.codewars.com/kata/54da539698b8a2ad76000228/train/cpp
  
TEST(CodeWars, TestWalk) {
  MyCodeWars myCodeWars;
  EXPECT_FALSE(myCodeWars.isValidWalk({'n'})) << "My condition is true";
  EXPECT_TRUE(myCodeWars.isValidWalk({'n','s','n','s','n','s','n','s','n','s'})) << "My condition is false";
  EXPECT_FALSE(myCodeWars.isValidWalk({'n','s'})) << "My condition is true";
  EXPECT_FALSE(myCodeWars.isValidWalk({'n','s','n','s','n','s','n','s','n','s','n','s'})) << "My condition is true";
  EXPECT_TRUE(myCodeWars.isValidWalk({'e','w','e','w','n','s','n','s','e','w'})) << "My condition is false";
  EXPECT_FALSE(myCodeWars.isValidWalk({'n','s','e','w','n','s','e','w','n','s','e','w','n','s','e','w'})) << "My condition is true";
  EXPECT_TRUE(myCodeWars.isValidWalk({'n','s','e','w','n','s','e','w','n','s'})) << "My condition is false";
  EXPECT_TRUE(myCodeWars.isValidWalk({'s','e','w','n','n','s','e','w','n','s'})) << "My condition is false";
  EXPECT_FALSE(myCodeWars.isValidWalk({'n','s','n','s','n','s','n','s','n','n'})) << "My condition is true";
  EXPECT_FALSE(myCodeWars.isValidWalk({'e','e','e','w','n','s','n','s','e','w'})) << "My condition is true";

}

TEST(CodeWars, StringEndsWith) {
  MyCodeWars myCodeWars;
  EXPECT_TRUE(myCodeWars.solution("abcde", "cde")) << "My condition is false";
  EXPECT_FALSE(myCodeWars.solution("abcde", "abc")) << "My condition is true";
  EXPECT_TRUE(myCodeWars.solution("abc", "")) << "My condition is false";

}
