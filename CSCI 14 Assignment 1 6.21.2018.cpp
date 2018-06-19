/*
Sean Warnock
CSCI 14 Summer 2018
Assignment 1 due 6/21/2018
https://github.com/seanwarnock/CSCI14-Assignment1
*/

#include <iostream>
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
      cout << "[1] Whizbangs " << WhizbangsQty << WhizbangsPrice << "\n";
      cout << "[2] Gizmos " << GizmosQty << GizmosPrice << "\n";
      cout << "[3] Widgets " << WidgetsQty << WidgetsPrice << "\n";
      cout << "[4] Wabbits " << WabbitsQty << WabbitsPrice << "\n";
      cout << "[5] Elmers " << ElmersQty << ElmersPrice << "\n";
      cout << "[9] Quit\n";
      cin >> intShit;

      switch (intShit)
        {
          case 1 : cout << "\nWhizbang quantity to order? :";
          cin >> intQty;
          WhizbangsQty = WhizbangsQty + intQty;
          break;
          case 2 : cout << "\nGizmo quantity to order? :";
          cin >> intQty;
          GizmosQty = GizmosQty + intQty;
          break;
          case 3 : cout << "\nWidget quantity to order? :";
          cin >> intQty;
          WidgetsQty = WidgetsQty + intQty;
          break;
          case 4 : cout << "\nWabbit quantity to order? :";
          cin >> intQty;
          WabbitsQty = WabbitsQty + intQty;
          break;
          case 5 : cout << "\nElmers quantity to order? :";
          cin >> intQty;
          ElmersQty = ElmersQty + intQty;
          break;
          case 9 : intQty = 0;
          break;
        }
      } while (intQty !=0 );

      //Need to sort this out to only take integer values.

    system("cls");
    cout << CompanyName << "\n";
    cout << "Victim Number(customer number): " << CustomerID << "\n";
    cout << "Item - Qty - \n";
    cout << "Whizbangs " << WhizbangsQty << (WhizbangsQty * WhizbangsPrice) << "\n";
    cout << "Gizmos " << GizmosQty << (GizmosQty * GizmosPrice) << "\n";
    cout << "Widgets " << WidgetsQty << (WidgetsQty * WidgetsPrice) << "\n";
    cout << "Wabbits " << WabbitsQty << (WabbitsQty * WabbitsPrice) << "\n";
    cout << "Elmers " << ElmersQty << (ElmersQty * ElmersPrice) << "\n";

    SubTotal = (WhizbangsQty * WhizbangsPrice) + (GizmosQty * GizmosPrice) + (WidgetsQty * WidgetsPrice) + (WabbitsQty * WabbitsPrice) + (ElmersQty * ElmersPrice);

    cout << "Subtotal : " << SubTotal << "\n";
    cout << "Shipping :" << (SubTotal * ShippingRate) << "\n";
    cout << "Sales Tax :" << (SubTotal * SalesTaxRate) << "\n";
    //Yes I know but I don't want more variables, this calculation is negligible.
    cout << "Total : " << ((SubTotal * ShippingRate) + (SubTotal * ShippingRate) + SubTotal) << "\n";

    cout << "Process another order [Y] or N: ";
    cin >> RunAgain;
  } while ((RunAgain != "n") && (RunAgain != "N"));

  return 0; //Yes this is here so it does not show as an error condition on program termination in Windows.
}
