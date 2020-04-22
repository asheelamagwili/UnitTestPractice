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

TEST(PracticeTest, is_not_a_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_odd_pal)
{
    Practice obj;
    bool actual = obj.isPalindrome("aaa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_odd_pal)
{
    Practice obj;
    bool actual = obj.isPalindrome("baa");
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

/* DESCENDING TESTING */

TEST(PracticeTest, simple)
{
    Practice obj;
    int first = 1;
    int second = 2;
    int third = 3;
    obj.sortDescending(first, second, third);
    EXPECT_EQ(1, first);
    EXPECT_EQ(2, second);
    EXPECT_EQ(3, third);
}

