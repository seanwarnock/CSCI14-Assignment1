/*
Sean Warnock
CSCI 14 Summer 2018
Assignment 1 due 6/21/2018
https://github.com/seanwarnock/CSCI14-Assignment1
*/

#include <iostream>
//#include <ctype.h>
#include <winsock2.h>


using namespace std;

int main()
{

  /*
  whizbags    5.00
  gismos      10.15
  widgets     5.99
  wabbits     7.75
  elmers      9.50
  */

//Local variables
  string RunAgain;
  string  CompanyName = "Shodd Dee Manufacturing Inc.";
  char  CustomerID[10];
  float ShippingRate = .1;
  float SalesTaxRate = .095;


//*********************************************************************************************
  do
  {
using namespace std;
    //Local Variables



    system("cls"); //really odd, I don't know what header this is coming from.  winsock2.h is giving me access.

    cout << CompanyName << "\n";
    cout << "Account Number:\n";
    cin >> CustomerID;

    cout << "whizbags    5.00\n";
    cout << "gismos      10.15\n";
    cout << "widgets     5.99\n";
    cout << "wabbits     7.75\n";
    cout << "elmers      9.50\n";

    cout << "Process another order [Y] or N: ";
    cin >> RunAgain;
  } while ((RunAgain != "n") && (RunAgain != "N"));


  return 0; //Yes this is here so it does not show as an error condition on program termination.
}
