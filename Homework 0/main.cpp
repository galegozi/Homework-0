//
//  main.cpp
//  Homework 0
//
//  Created by Gal Egozi 1 on 8/23/16.
//  Copyright © 2016 Gal Egozi. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int run = 0;
    cout << "How many for loop run do you want?\n";
    cout << "Enter a number: ";
    cin >> run;
    for(int x = 1; x <= run; x++)
        cout << "For loop number: " << x << endl;
    cout << "How many while loop run do you want?\n";
    cout << "Enter a number: ";
    cin >> run;
    int x = 1;
    while (x <= run)
    {
        cout << "While loop number: " << x << endl;
        x++;
    }
    return 0;
}
