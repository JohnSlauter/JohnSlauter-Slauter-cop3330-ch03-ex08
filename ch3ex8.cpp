/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 John Slauter
 */

#include "std_lib_facilities.h"
#include "ch3ex8.h"

using namespace ns;

int main(){

    int input;

    cout << "Enter a number: ";

    cin >> input;

    if(is_even(input)){

        cout << "The value \"" << input << "\" is an even number.";

    }

    else{

        cout << "The value \"" << input << "\" is an odd number.";

    }

    return 0;

}

bool ns::is_even(int number){

    return number % 2 == 0 ? true : false;

}