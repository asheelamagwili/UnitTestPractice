/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/* PALINDROME TESTING */
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_simple_palindrome1)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_a_simple_palindrome2)
{
    Practice obj;
    bool actual = obj.isPalindrome("ab");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_odd_pal1)
{
    Practice obj;
    bool actual = obj.isPalindrome("aaa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_odd_pal2)
{
    Practice obj;
    bool actual = obj.isPalindrome("aba");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_odd_pal1)
{
    Practice obj;
    bool actual = obj.isPalindrome("baa");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_not_odd_pal2)
{
    Practice obj;
    bool actual = obj.isPalindrome("aab");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_single_pal)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_empty)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, single_space)
{
    Practice obj;
    bool actual = obj.isPalindrome(" ");
    ASSERT_TRUE(actual);
}

/* DESCENDING TESTING */

TEST(PracticeTest, simple_descending)
{
    Practice obj;
    int first = 1;
    int second = 2;
    int third = 3;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(3, first);
    EXPECT_EQ(2, second);
    EXPECT_EQ(1, third);
}

TEST(PracticeTest, all_zeros)
{
    Practice obj;
    int first = 0;
    int second = 0;
    int third = 0;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(0, first);
    EXPECT_EQ(0, second);
    EXPECT_EQ(0, third);
}

TEST(PracticeTest, middle_negative)
{
    Practice obj;
    int first = 5;
    int second = -3;
    int third = 2;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(5, first);
    EXPECT_EQ(2, second);
    EXPECT_EQ(-3, third);
}

TEST(PracticeTest, first_negative)
{
    Practice obj;
    int first = -5;
    int second = 3;
    int third = 2;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(3, first);
    EXPECT_EQ(2, second);
    EXPECT_EQ(-5, third);
}

TEST(PracticeTest, last_negative)
{
    Practice obj;
    int first = 1;
    int second = 3;
    int third = -2;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(3, first);
    EXPECT_EQ(1, second);
    EXPECT_EQ(-2, third);
}

TEST(PracticeTest, all_range)
{
    Practice obj;
    int first = 0;
    int second = -3;
    int third = 5;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(5, first);
    EXPECT_EQ(0, second);
    EXPECT_EQ(-3, third);
}

TEST(PracticeTest, all_pos_simple)
{
    Practice obj;
    int first = 0;
    int second = 2;
    int third = 5;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(5, first);
    EXPECT_EQ(2, second);
    EXPECT_EQ(0, third);
}

TEST(PracticeTest, two_similar)
{
    Practice obj;
    int first = 6;
    int second = 5;
    int third = 6;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(6, first);
    EXPECT_EQ(6, second);
    EXPECT_EQ(5, third);
}



