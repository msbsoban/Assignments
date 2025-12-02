#include <iostream>
using namespace std;
void swaping(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
void reverseArray(int arry [], int arrysize){
    int left = 0, right = arrysize - 1;
    while(left < right){
        swaping(arry[left], arry[right]);
        left++;
        right--;
    }
}
int main(){
    int arrysize;
    cout << "Enter the size of the array " << endl;
    cin >> arrysize;
    int arry [arrysize];
    cout << "Enter " << arrysize << " number of elements: " << endl;
    for (int i = 0; i < arrysize; i++){
        cin >> arry [i];
    }
    cout << endl;

    for (int j = 0; j < arrysize; j++){
        cout << arry [j] << " ";
    }
    cout << endl;
    reverseArray(arry, arrysize);
    for (int k = 0; k < arrysize; k++){
        cout << arry [k] << " ";
    }

    return 0;
}