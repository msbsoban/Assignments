#include <iostream>
using namespace std;
int main() {
    cout << "Enter rows and columns"<< endl;
    int rows, col;
    cin >> rows;
    cin >> col;
    char cinema[rows] [col];
    for (int i = 0; i < col; i++){
        for (int j = 0; j < rows; j++){
            cinema [i][j] = 'F';
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << "(" << (i + 1) << "-" << (j + 1) << " " << cinema[i][j] << ") ";
        }
        cout << endl;
    }

    while(true){
        cout << "To reserve a seat, please enter the Row (1-" << rows << ") and Column (1-" <<  col << ") OR press 0 0 to Exit: ";
        int r, c;
        cin >> r >> c;
        if (r == 0 || c == 0) {
            break;
        }
        if (r >= 1 && r <= rows && c >= 1 && c <= col){
            if (cinema[r - 1][c - 1] == 'F'){
                cinema[r - 1][c - 1] = 'R';
                cout << "You have successfully reserved " << r << "-" << c << endl; 
            }else{
                cout << "Seat Not Available For " << r << "-" << c << endl; 
            }
        } else{
            cout << "Wrong Input " << endl;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << "(" << (i + 1) << "-" << (j + 1) << " " << cinema[i][j] << ") ";
        }
        cout << endl;
    }
    return 0;
}

