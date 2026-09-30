#include <iostream>
using namespace std;

int main(){

   
    string Login;
    string Quit;
    int option;
    
    //Login Screen 
        cout << "Type Login to begin"<<endl;
        cout << "Type Quit to close program"<<endl;
        cin >> Login;
        
    // condition for login 
        if (Login == "Login") {
        cout << "Welcome! This project is in early devolopment." <<endl;
        }
        
        else if (Login == "Quit") { 
        cout << "Goodbye...." <<endl;
        return 0;
        }

        else{
            cout << "Please enter one of two options. Run again" <<endl;
        return 0;
        }
    //end of first condition
    
    //start of output for user after login  
            cout << "\nEnter a number associated with a set of colors you struggle with, \nand find out what type of color blindess you may have. \nColors are: " <<endl;
            cout << "1. Red, Green, Brown, Orange" <<endl;
            cout << "2. Blue, Green, Yellow, Red" <<endl;
            cout << "3. Purple, Red, Pink" <<endl;
            cout << "4. Almost all colors" << endl;
            cout << "5. Facts on colorblindness"<<endl;
            cin >> option;
    //start of switch statment
            switch (option) {
            case 1:
            cout << "This combination is associated with: \nDuteranomaly\nProtanomaly\nDeuteranopia\nProtanopia" <<endl;
            break;

            case 2:
            cout << "This combination is associated with: \nTritanomaly" <<endl;
            break;

            case 3:
            cout << "This combination is associated with: \nTritanopia" <<endl;
            break;

            case 4:
            cout << "This combination is associated with: Monochormacy or Achromatopsia" <<endl;  
            break;

            case 5:
            cout << "Facts are: \nRed-Green color blidness is the most common type of color blidness. \n" <<endl;

            default:
            cout << "Please enter a number listed" <<endl;
            break;

        }
        return 0;
   //end of switch
}
//end of code
