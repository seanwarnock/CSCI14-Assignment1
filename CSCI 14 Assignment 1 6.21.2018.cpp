/*
Sean Warnock
CSCI 14 Summer 2018
Assignment 1 due 6/21/2018
https://github.com/seanwarnock/CSCI14-Assignment1
*/

#include <iostream>
#include <iomanip>
#ifdef _WIN32
  #include <windows.h>
  using namespace std;
#endif


using namespace std;

int main()
{
//Local variables
  string RunAgain;
  const string  CompanyName = "Shodd Dee Manufacturing Inc.";
  char  CustomerID[10];
  float ShippingRate = .1;
  float SalesTaxRate = .095;


//*********************************************************************************************
  do
  {
    int  WhizbangsQty = 0, GizmosQty = 0, WidgetsQty = 0, WabbitsQty = 0, ElmersQty = 0; //defining an object for this would be nice.
    float WhizbangsPrice = 5.00;
    float GizmosPrice = 10.15;
    float WidgetsPrice = 5.99;
    float WabbitsPrice = 7.75;
    float ElmersPrice = 9.50;
    float SubTotal = 0;
    float intQty = 0; //Tired of trying to fight cin to sanitize non-integer input.
    bool LoopControl = true;
    int intShit = 0;


    system("cls");

    //Setup cout output options shamefully stolen from assignment example.
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);

    cout << CompanyName << "\n";
    cout << "Account Number:\n";
    cin >> CustomerID;

    do
    {
      system("cls");
      cout << "What would you like today?\n";
      cout << "Item" << "\t\t" << "Quantity" << "\t" << "Price\n";
      cout << "[1] Whizbangs " << "\t"  << WhizbangsQty << "\t\t" << WhizbangsPrice << "\n";
      cout << "[2] Gizmos " << "\t"  << GizmosQty << "\t\t"  << GizmosPrice << "\n";
      cout << "[3] Widgets " << "\t"  << WidgetsQty << "\t\t"  << WidgetsPrice << "\n";
      cout << "[4] Wabbits " << "\t"  << WabbitsQty << "\t\t"  << WabbitsPrice << "\n";
      cout << "[5] Elmers " << "\t"  << ElmersQty << "\t\t"  << ElmersPrice << "\n";
      cout << "[9] Place Order\n";
      cin >> intShit;

      switch (intShit)
        {
          case 1 : cout << "\nWhizbang quantity to order? :";
          cin >> intQty;
          WhizbangsQty = WhizbangsQty + abs(intQty);
          break;

          case 2 : cout << "\nGizmo quantity to order? :";
          cin >> intQty;
          GizmosQty = GizmosQty + abs(intQty);
          break;

          case 3 : cout << "\nWidget quantity to order? :";
          cin >> intQty;
          WidgetsQty = WidgetsQty + abs(intQty);
          break;

          case 4 : cout << "\nWabbit quantity to order? :";
          cin >> intQty;
          WabbitsQty = WabbitsQty + abs(intQty);
          break;

          case 5 : cout << "\nElmers quantity to order? :";
          cin >> intQty;
          ElmersQty = ElmersQty + abs(intQty);
          break;

          case 9 : LoopControl = false;
          break;
        }
      } while (LoopControl != false );

      //Need to sort this out to only take integer values.

    system("cls");
    cout << CompanyName << "\n";
    cout << "Victim Number(customer number): " << CustomerID << "\n";
    cout << "Item" << "\t\t" <<  "Quantity" << "\t" <<  "Extended Price" << "\n";
    cout << "Whizbangs " << "\t" << WhizbangsQty << "\t\t"  << (WhizbangsQty * WhizbangsPrice) << "\n";
    cout << "Gizmos " << "\t\t" << GizmosQty << "\t\t"  << (GizmosQty * GizmosPrice) << "\n";
    cout << "Widgets " << "\t" << WidgetsQty << "\t\t"  << (WidgetsQty * WidgetsPrice) << "\n";
    cout << "Wabbits " << "\t" << WabbitsQty << "\t\t"  << (WabbitsQty * WabbitsPrice) << "\n";
    cout << "Elmers " << "\t\t" << ElmersQty << "\t\t"  << (ElmersQty * ElmersPrice) << "\n";

    SubTotal = (WhizbangsQty * WhizbangsPrice) + (GizmosQty * GizmosPrice) + (WidgetsQty * WidgetsPrice) + (WabbitsQty * WabbitsPrice) + (ElmersQty * ElmersPrice);
    cout << "Subtotal : " << SubTotal << "\n";
    cout << "Shipping : " << (SubTotal * ShippingRate) << "\n";
    cout << "Sales Tax : " << (SubTotal * SalesTaxRate) << "\n";
    //Yes I know but I don't want more variables, this calculation is negligible.
    cout << "Total : " << ((SubTotal * ShippingRate) + (SubTotal * SalesTaxRate) + SubTotal) << "\n";

    cout << "Process another order [Y] or N: ";
    cin >> RunAgain;
  } while ((RunAgain != "n") && (RunAgain != "N"));

  return 0; //Yes this is here so it does not show as an error condition on program termination in Windows.
}
