// Lab 7 Line Justification
// David J Tinley
// 10/18/2022

#include <iostream>
#include "functions.h"

int main() {
    string user_input;
    string punctuation_marks {".,!?:"}; // punctuation marks to be checked for
    cout << "Please enter a string of text at least 40 characters long" << endl; // user input prompt

    getline(cin, user_input); // accepts multi-word string
    check_line_length(user_input); // check input length
    add_space_after_punctuation(user_input, punctuation_marks); // add space after punctuation marks
    random_line_space(user_input); // insert random line space until length is at 80 characters

    cout << user_input << endl;
    cout << "The text line is now " << user_input.length() << " characters long" << endl;
    return 0;
}

