#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int num1, num2, num3, num4;
    cout << "Enter the year you were born: ";
    cin >> num1;
  
    cout << "Enter the month you were born: ";
    cin >> num2;
    if (num2 >= 1 && num2 <= 12) {
        
        
    } else {
       cout  <<"this number " << char(40);
       cout << num2;
       cout << char(41) << " is not in the range 1 to 12.";
        
       return 0; 
    }
    
    cout << "Enter the current month: ";
    cin >> num3;

    cout << "Enter the current year: ";
    cin >> num4;

    

    int newValue = num4 - num1;
    if (num3 < num2) {
        newValue--;
    }
    int newValue1 = newValue * 365;
    int newValue2 = newValue * 365 * 60;                    


    cout << "Your age is: " <<  newValue << " year(s)\n";
    cout << "Your age in days: " << newValue1 << " day(s)\n";
    cout << "Your age in hours: " <<  newValue2 << " hour(s)\n";
  
    char enterKey = '\n';
    cout << "Press any key to exit..." << endl;
    _getch();
   
   
    return 0;
} 