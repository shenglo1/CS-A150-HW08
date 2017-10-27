/**
 *  @author put your name here
 *  @version H08 - what section and day?
 *  @file main.cpp
 */

#include <iostream>
#include <string>
using namespace std;

#include "cs150check.h"

#include "h08.h"

/**
 * Let's test our program here
 */
void runTests()
{
	///////////// Begin a set of tests
	beginTests(); // test heading

    /////// Tests for toEnglishDollars() //////////////////////
	beginFunctionTest("toEnglishDollars()"); // function name
    
    assertEqualsMsg("toEnglishWords(3.5)->", "Three and 50/100", toEnglishWords(3.5));
    assertEqualsMsg("toEnglishWords(10)->", "Ten and zero/100", toEnglishWords(10));
    assertEqualsMsg("toEnglishWords(100)->", "One Hundred and zero/100", toEnglishWords(100));
    assertEqualsMsg("toEnglishWords(100.25)->", "One Hundred and 25/100", toEnglishWords(100.25));
    assertEqualsMsg("toEnglishWords(1234)->", "One Thousand Two Hundred Thirty Four and zero/100", toEnglishWords(1234));
    assertEqualsMsg("toEnglishWords(1035.25)->", "One Thousand Thirty Five and 25/100", toEnglishWords(1035.25));
    
    /////// Tests for triplet() ///////////////////////////
    beginFunctionTest("triplet() helper function.");
    double num = 765423231234567.25;
    assertEquals(765, triplet(num, TRILLIONS));
    assertEquals(231, triplet(num, MILLIONS));
    assertEquals(567, triplet(num, ONES));
    num = -25.50;
    assertEquals(0, triplet(num, THOUSANDS));
    assertEquals(25, triplet(num, ONES));
    endFunctionTest();

    ///////// End all test runs /////////////////////////
    endTests();

}


