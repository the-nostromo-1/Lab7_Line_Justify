// Functions header file for lab 7
// David Jacob Tinley
// 10/18/22.

#ifndef CS1B_LABS_7A_FUNCTIONS_H
#define CS1B_LABS_7A_FUNCTIONS_H

#include <iostream>
#include <string> // for getline()
#include <ctime> // for getting srand seed

using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::endl;

const short line_limit {80};
const short end_paragraph_line_limit {40};

void add_space_after_punctuation(string &input, const string &punctuation);
void random_line_space(string &input_2);
void check_line_length(string &input_3);

#endif
