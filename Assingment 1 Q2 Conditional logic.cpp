#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    float eng, urdu, math, comp, phy, gain, percent;
    cout << "Enter Marks For All Five Subjects " << endl;
    cout << "English : ";
    cin >> eng; 
    cout << "Urdu: ";
    cin >> urdu;
    cout << "Mathematics: ";
    cin >> math;
    cout << "Computer Science: ";
    cin >> comp;
    cout << "Physics: ";
    cin >> phy;
    int total;
    int submax = 100;
    total = 500;
    gain = eng + urdu + math + comp + phy;
    percent = (gain/total)*100;
    string grade;
    if (percent >= 90){
        grade = "A*";
    } else if (percent >= 80){
        grade = "A";
    } else if (percent >= 70){
        grade = "B";
    } else if (percent >= 60){
        grade = "C";
    } else if (percent >= 50){
        grade = "D";
    } else {
        grade = "F";
    }
    string ispasseng = (eng >=50) ? "P" : "F";
    string ispassurdu = (urdu >=50) ? "P" : "F";
    string ispassmath = (math >=50) ? "P" : "F";
    string ispasscomp = (comp >=50) ? "P" : "F";
    string ispassphy = (phy >=50) ? "P" : "F";
    string PassFail = (percent >= 50) ? "Pass" : "Fail";
    
    cout << endl;

    cout << "Report Card " << endl;
    cout << "-----------------------------------------------" << endl;
    cout << left << setw(20) << "English" << right << setw(10) << eng << "/" << submax << setw(7) << ispasseng << endl;
    cout << left << setw(20) << "Urdu" << right << setw(10) << urdu << "/" << submax << setw(7) << ispassurdu << endl;
    cout << left << setw(20) << "Mathematics" << right << setw(10) << math << "/" << submax << setw(7) << ispassmath << endl;
    cout << left << setw(20) << "Computer Science" << right << setw(10) << comp << "/" << submax << setw(7) << ispasscomp << endl;
    cout << left << setw(20) << "Physics" << right << setw(10) << phy << "/" << submax << setw(7) << ispassphy << endl;
    cout << "------------------------------------------------" << endl;
    cout << left << setw(20) << "Obtained Marks" << right << setw(10) << gain << "/" << total << setw(10) << PassFail << endl; 
    return 0;
}