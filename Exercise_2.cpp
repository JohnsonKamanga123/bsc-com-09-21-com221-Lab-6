#include <iostream>

using namespace std;

void modifyRow(double ** hold, int row, int col){

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
        hold[i][j] = (float)i/(j+1);
        }
    }
}

void addRows(double ** hold, int row, int col){
    for(int i = 0 ; i < row ; i++){
        hold[i] = new double[col]  ; 
         }
}

int main(){
    int row = 0;
    int col = 0;
    cout << "Enter the first dimension(no greater than 3): ";
    cin >> row;
    cin.ignore();
    cout << "Enter the second dimension(no greater than 3): ";
    cin >> col;
    cin.ignore();

    //allocate memory for a 2D array 
    double ** pArray = new double *[row];

    //allocate coloums to 2D array
    addRows(pArray,row,col);

    for(int i = 0 ; i < row ; i++){
        modifyRow(pArray, row, col);
    }
    cout << "Here is the output : " << endl;
    
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
        cout << pArray[i][j] << " " ;
        }
        cout << endl;
    }
}