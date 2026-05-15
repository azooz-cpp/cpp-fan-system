#include <iostream>
#include <limits>
#include <string>
using namespace std;




int Normal_fan_speed();
int Medium_fan_speed();
int Fast_fan_speed();
int Very_Fast_fan_speed();
int Turn_off_the_fan();

int main() {

   
    int Fan_speed = 0, Result = 0;
    

    
    cout << "Enter Fan speed:1-[Normal], 2-[Medium], 3-[Fast], 4-[Very Fast], 0-[Fan Off]" << endl;
    cin >> Fan_speed;

    while (cin.fail()) {

        cout << "Error, Enter Number: Fan speed:1-[Normal], 2-[Medium], 3-[Fast], 4-[Very Fast], 0-[Fan Off]" << endl;

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cin >> Fan_speed;


    }

    while(Fan_speed < 0) {

        cout << "Error, Choose a number from the list." << endl;
        cin >> Fan_speed;

        while (cin.fail()) {

            cout << "Erroreeeeeeeee, Enter Number: Fan speed:1-[Normal], 2-[Medium], 3-[Fast], 4-[Very Fast], 5_[Fan Off]" << endl;

           cin.clear();
           cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cin >> Fan_speed;


        }
    }

    
        
    switch (Fan_speed) {
    case 1:

        Result = Normal_fan_speed();
        cout << "You chose a number: [" << Result << "] ," << "The fan was turned on in normal mode." << endl;
        break;

    case 2:
        Result = Medium_fan_speed();
        cout << "You chose a number: [" << Result << "] ," << "The fan was turned on in Medium mode." << endl;
        break;

    case 3:
        Result = Fast_fan_speed();
        cout << "You chose a number: [" << Result << "] ," << "The fan was turned on in Fast mode." << endl;
        break;

    case 4:
        Result = Very_Fast_fan_speed();
        cout << "You chose a number: [" << Result << "] ," << "The fan was turned on in Very Fast mode." << endl;
        break;
    case 0:
        Result = Turn_off_the_fan();
        cout << "You chose a number: [" << Result << "] ," << "The fan was successfully switched off." << endl;
        break;

    default:
        cout << "Invalid number." << endl;
        break;
    }

  
   

    return 0;


   
}

int Normal_fan_speed() {

    int Fan_speed = 1;
    return Fan_speed;
    
}

int Medium_fan_speed() {

    int Fan_speed = 2;
    return Fan_speed;
  
}

int Fast_fan_speed() {
    int Fan_speed = 3;
    return Fan_speed;
    
}

int Very_Fast_fan_speed() {

    int Fan_speed = 4;
    return Fan_speed;
    
}
int Turn_off_the_fan() {
    
    int Fan_speed = 0;
    return Fan_speed;
    
}