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

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aB");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_empty_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_odd_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aba");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_upper_and_lower_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aA");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_numer_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("11");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_symbols_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("!$!");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_multiple_words_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("AB BA");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_letter_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("A");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_space_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("   ");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_spaces_with_word_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("  AAA  ");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_space_break_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("  aja ");
    ASSERT_FALSE(actual);
}
