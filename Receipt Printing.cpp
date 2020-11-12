/*
1.	Add Items Details
2.	Edit Item details;
3.	Return Items
4.	Print Receipt
5.	Exit out of the code with a break statement
The resulting receipt should be printed to the screen and to a (*.receipt) file.
Item details should be stored in an array before being printed to a file.
Item details include Item Number, Name, Price, Quantity, Tax %, Net Amount.
Your program should also calculate and include Grand total.
If items are printed, a return items function should read items into an array before performing transactions.
A function should correspond to each the menu option and the program should have checks in place to ensure that user input does not crash the program.
*/
#include <iostream>
#include <fstream>
using namespace std;

//add function to initialize array or put with switch
void addItemDetails(){
    int numOfItems;

    cout << "Enter the numer of different items you have." << endl;
    cin >> numOfItems;

    int itemsNumbers [numOfItems];
    string Names [numOfItems];
    float prices [numOfItems];
    int quantities [numOfItems];
    float tax [numOfItems];
    float netAmounts [numOfItems];
}

void editItemDetails()
{
    
}

string returnItems()
{
    
}

void printReceipt()
{
    
    
}

int main()
{
    ofstream outFile;
    outFile.open("reciept.txt");

    int action;

    cout << "Chose an option:\n\t1) Add item details\n\t2) Edit iem details \n\t3) Return items\n\t4) Print receipt\n\t5) Exit";
    cin >> action;

    switch(action){
        case 1: addItemDetails(); break;
        case 2: editItemDetails(); break;
        case 3: returnItems(); break;
        case 4: printReceipt(); break;
        case 5: break;
        default: "ERROR. Enter options 1, 2, 3, 4, or 5.";
    }
}