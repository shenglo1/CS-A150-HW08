#ifndef H08_H_
#define H08_H_
/**
    @file h08.h
    @author your name goes here
    @version what section are you in?
*/
#include <string>

// Put your code here
std::string toEnglishWords(double amt); // declaration
std::string tripletToWords(int triple);
std::string digitToWord(int digit);
std::string tensToWord(int tens);
std::string teensToWord(int teens);
std::string centsToWords(int cents);

int triplet(double num, double cutoff);

const double ONES = 1.0;
const double THOUSANDS = 1E3;
const double MILLIONS = 1E6;
const double BILLIONS = 1E9;
const double TRILLIONS = 1E12;


#endif
