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
  int  WhizbangsQty = 0, GizmosQty = 0, WidgetsQty = 0, WabbitsQty = 0, ElmersQty = 0; //defining an object for this would be nice.


//*********************************************************************************************
  do
  {
//using namespace std;
    //Local Variables
    int intQty = 0;
    int intShit = 0;


    system("cls"); //really odd, I don't know what header this is coming from.  winsock2.h is giving me access but that is total overkill right now.

    cout << CompanyName << "\n";
    cout << "Account Number:\n";
    cin >> CustomerID;



    do
    {
      system("cls");
      cout << "What would you like today?\n";
      cout << "[1] Whizbangs " << WhizbangsQty << 5.00 << "\n";
      cout << "[2] Gizmos " << GizmosQty << 10.15 << "\n";
      cout << "[3] Widgets " << WidgetsQty << 5.99 << "\n";
      cout << "[4] Wabbits " << WabbitsQty << 7.75 << "\n";
      cout << "[5] Elmers " << ElmersQty << 9.50 << "\n";
      cout << "[9] Quit\n";
      cin >> intShit;

      switch (intShit)
        {
          case 1 : cout << "\nWhizbang quantity to order?";
          cin >> intQty;
          WhizbangsQty = WhizbangsQty + intQty;
          break;
          case 2 : cout << "\nGizmo quantity to order?";
          cin >> intQty;
          GizmosQty = GizmosQty + intQty;
          break;
          case 3 : cout << "\nWidget quantity to order?";
          cin >> intQty;
          WidgetsQty = WidgetsQty + intQty;
          break;
          case 4 : cout << "\nWabbit quantity to order?";
          cin >> intQty;
          WabbitsQty = WabbitsQty + intQty;
          break;
          case 5 : cout << "\nElmers quantity to order?";
          cin >> intQty;
          ElmersQty = ElmersQty + intQty;
          break;
          case 9 : intQty = 0;
          break;
        }
      } while (intQty !=0 );

    system("cls");
    cout << "Item - Qty\n";
    cout << "Whizbangs " << WhizbangsQty << "\n";
    cout << "Gizmos " << GizmosQty << "\n";
    cout << "Widgets " << WidgetsQty << "\n";
    cout << "Wabbits " << WabbitsQty << "\n";
    cout << "Elmers " << ElmersQty << "\n";

    cout << "Process another order [Y] or N: ";
    cin >> RunAgain;
  } while ((RunAgain != "n") && (RunAgain != "N"));

  return 0; //Yes this is here so it does not show as an error condition on program termination in Windows.
}
