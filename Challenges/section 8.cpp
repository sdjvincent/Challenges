//
//  section 8.cpp
//  Challenges
//
//  Created by Simon Vincent on 05/10/2023.
//

/*
    
    Write a program that asks the user to enter the following:
    An integer representing the number of cents
        
    You may assume that the number of cents entered is greater than or equal to zero
    
    The program should then display how to provide that change to the user.
    
    In the US:
        1 dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents, and
        1 penny is 1 cent.
        
    Here is a sample run:
    
    Enter an amount in cents :  92
    
    You can provide this change as follows:
    dollars    : 0
    quarters : 3
    dimes     : 1
    nickels   : 1
    pennies  : 2
    
    Also, think of how you might solve the problem using the modulo operator.

*/

#include <iostream>

using namespace std;

int main() {
    
    // define conversion values in cents
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
        
    cout << "Enter an amount in cents : ";
    cin >> change_amount;
    
    int balance{}, dollars{}, quarters {}, dimes{}, nickels{}, pennies{};
      
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    
    quarters =  balance / quarter_value;
    balance -= quarters * quarter_value;

    dimes = balance / dime_value;
    balance -= dimes * dime_value;

    nickels = balance / nickel_value;
    balance -= nickels * nickel_value;

    pennies = balance;
    
    cout << "\nYou can provide this change as follows : " << endl;
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;


// Using the modulo operator

    cout << "----------------------------" << endl;
    cout << "Using the modulo operator" << endl;
    cout << "----------------------------" << endl;

    balance = dollars = quarters = dimes = nickels = pennies = 0;  // reset everthing to zero

    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;
    
    quarters = balance / quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    balance %= dime_value;
    
    nickels = balance / nickel_value;
    balance %= nickel_value;
    
    pennies = balance;

    cout << "\nYou can provide this change as follows : " << endl;
    cout << "dollars  : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes    : " << dimes << endl;
    cout << "nickels  : " << nickels << endl;
    cout << "pennies  : " << pennies << endl;

    cout << endl;
    return 0;
}

