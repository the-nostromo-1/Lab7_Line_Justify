// Function definitions for lab 7
// Created by David Jacob Tinley
// 10/18/22.

#include "functions.h"

void add_space_after_punctuation(string &input, const string &punctuation) {
    int pos = input.find_first_of(punctuation);
    int npos = static_cast<int>(string::npos);
    while (pos != input.size() && pos != npos) {
        input.insert(pos + 1, 2, ' ');
        pos = input.find_first_of(punctuation, pos + 1);
    }
}

void random_line_space(string &input_2) {
    srand(time(nullptr));
    int pos = input_2.find_first_of(' ');
    while (input_2.size() != line_limit) {
        input_2.insert(pos, 1, ' ');
        pos = input_2.find(' ', rand() % input_2.size());
    }
}

void check_line_length(string &input_3) {
    while (input_3.length() > line_limit) { // checking input length against line limit
        cout << "Too many characters" << endl;
        cout << "Keep it below 80" << endl;
        getline(cin, input_3);
    }
    while (input_3.length() < end_paragraph_line_limit) { // checking input length against minimum char length
        cout << "There is no need for justification if under 40 characters" << endl;
        cout << "Add more characters" << endl;
        getline(cin, input_3);
    }
}