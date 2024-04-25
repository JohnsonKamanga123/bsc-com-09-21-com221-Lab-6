#include <iostream>

using namespace std;

int main(){
    //allocate memory for a pointer in free store
    int * pInt = new int;

    //allocate memory for a string in free store
    string * pString = new string;
    //indirection
    *pString = "";

    cout << "Enter an integer value: " ;
    cin >> *pInt ;//store user inputted int in memory at free store
    cin.ignore();
    char hold[10];
    cout << "Enter a string value: " ;
    cin.getline( hold, 10);
    *pString += hold;//store user inpuuted string in memory at free store

    cout << "pInt : " << *pInt << endl;
    cout << "pString : " << *pString << endl;
    delete pInt;
    pInt = nullptr;
    delete pString;
    pString = nullptr;
    return 0;
}