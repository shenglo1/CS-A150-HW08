/**
    @file h08.cpp
    @author your name here
    @version what day and meeting time
*/
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "ilo";     // Add your name Blackboard/occ-email ID

#include "h08.h"

// Place your function definitions in this file.
// stub definition
string toEnglishWords(double amt)
{
    int triple;
    string result = "";
    if (amt >= 1.0E12)
    {
        int triple = static_cast<int>(amt / 1.0E12);
    }
    
    if (triple > 0)
        result = result + tripletToWords(triple) + " Trillion ";
    
    if (amt >= 1.0E3)
    {
        int triple = static_cast<int>(amt / 1.0E3) % 1000;
        if (triple > 0)
            result = result + tripletToWords(triple) + " Thousand "; 
    }
    
    int cents = static_cast<int>(round((amt - trunc(amt)) * 100));
    
    string temp = " and " + centsToWords(cents);
    if (result.empty())
        result = "Zero";
    result += temp;
    
    return result;
}

string tripletToWords(int triple)
{
    // 1.Break into hundreds, tens, teens, and ones
    int hundreds = triple / 100;
    int teens = triple % 10;
    int tens = triple % 100 / 10;
    int ones = triple % 100;
    
    // 2. Convert hundreds digit to English word
    //  3. add word " Hundred " afterwards
    string result;
    if (hundreds > 0)
    {
        result += digitToWord(hundreds) + " Hundred ";
    }
    
    // 4. If tens is greater than 1
    //  5. convert tens to tens word (2 -> twenty)
    //  6. convert ones to ones word (3 -> three)
    
    if (tens > 1)
    {
        result += tensToWord(tens) + " " + digitToWord(ones);
    }
    
    // 7. If tens is 1 then convert teens word
    else if (tens == 1)
    {
        result += teensToWord(teens);
    }
    
    // 8. Else convert ones word
    else
    {
        result += digitToWord(ones);
    }
    
    return result;
}

string digitToWord(int digit)
{
    switch (digit)
    {
        case 1: return "One";
        case 2: return "Two";
        case 3: return "Three";
        case 4: return "Four";
        case 5: return "Five";
        case 6: return "Six";
        case 7: return "Seven";
        case 8: return "Eight";
        case 9: return "Nine";
    }
    return ""; // nothing
}

string tensToWord(int tens)
{
    switch (tens)
    {
        case 2: return "Twenty";
        case 3: return "Thirty";
        case 4: return "Fourty";
        case 5: return "Fifty";
        case 6: return "Sixty";
        case 7: return "Seventy";
        case 8: return "Eighty";
        case 9: return "Ninety";
    }
    return "";
}

string teensToWord(int teens)
{
    switch (teens)
    {
        case 10: return "Ten";
        case 11: return "Eleven";
        case 12: return "Twelve";
        case 13: return "Thirteen";
        case 14: return "Fourteen";
        case 15: return "Fifteen";
        case 16: return "Sixteen";
        case 17: return "Seventeen";
        case 18: return "Eighteen";
        case 19: return "Nineteen";
    }
    return "";
}

string centsToWords(int cents)
{
    if (cents > 0)
        return to_string(cents) + "/100";
    else 
        return "zero/100";
}

int triplet(double num, double cutoff)
{
    long long numerator = static_cast<long long>(abs(num));
    long long divisor = static_cast<long long>(cutoff);
    long long quotient = numerator / divisor;
    return static_cast<int>(quotient % 1000);
}
