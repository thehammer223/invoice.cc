/**
 *   @file: invoice.cc
 * @author: Joshua Moffett
 *   @date: February 2, 2023
 *  @brief: This program is intended to ask the user for input on how many and what type of 
 *          monitor they want. The program will then calculate the cost that they will need to pay
 *          depending if they get the discount or tax applied to the total.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;

///Constants and function prototypes

const double ohio_tax = 1.07;
const double discount = 0.95;
const double samsung = 190.00;
const double view_sonic = 170.00;
string monitor_type = "";
int number;
string ohio_resident = "";
double price;
double total_price;

int main(int argc, char const *argv[]) 
{
    
    cout << "Enter a monitor type (s, v) followed by the quantity: ";
    cin >> monitor_type >> number;
    cout << "Do you live in Ohio (yes/no)?";
    cin >> ohio_resident;
    cout << "Monitors Invoice" << endl;
    cout << "------------------------------" << endl;
    if (monitor_type == "s")
    {
        cout << "  Monitor brand: Samsung" << endl;
        cout << "       Quantity: " << number << endl;
        cout << fixed << setprecision(2);
        cout << "          Price: $" << samsung << endl;
        if (ohio_resident == "no")
        {
            cout << "  Ohio Resident: No" << endl;
        }
        if (ohio_resident == "yes")
        {
            cout << "  Ohio Resident: Yes" << endl;
        }
        if (number >= 3 && ohio_resident == "no")
        {
            total_price = price * discount;
            cout << "    Total price: $" << price << endl;
        }
        if (number >= 3 && ohio_resident == "yes")
        {
            total_price = price * discount * ohio_tax;
            cout << "    Total price: $" << total_price << endl;
        }
        //if (number < 3 && ohio_resident == "yes")
        //{
        //    total_price = price * discount * ohio_tax;
        //    cout << "    Total price: $" << total_price << endl;
        //}
        //if (number < 3 && ohio_resident == "no")
        //{
        //    total_price = price * discount * ohio_tax;
        //    cout << "    Total price: $" << total_price << endl;
        //}

        cout << "------------------------------" << endl;
        cout << "       Discount: $" << endl;
        cout << "       Subtotal: $" << endl;
        cout << "          Taxes: $" << endl;
        cout << "==============================" << endl;
        cout << "          Total: $" << endl;
        cout << "==============================" << endl;

    }
    //
 //   if (monitor_type == 'v')
 //   {
 //       cout << "Monitor brand: ViewSonic" << endl;
 //       cout << "Quantity: " << number;
 //       cout << fixed << setprecision(2);
//        cout << "Price: $" << view_sonic;
 //   } 



    // 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 token
    return 0;
} /// main
