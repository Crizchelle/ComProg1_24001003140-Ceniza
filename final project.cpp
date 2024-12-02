#include <iostream>
#include <string>

using namespace std;


 // im declaring first



 // getting zodiac sign based on month, day and year
  string ZodiacSign(int day, int month, int year) {
    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        return "Aquarius";
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        return "Pisces";
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        return "Aries";
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        return "Taurus";
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        return "Gemini";
    } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        return "Cancer";
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        return "Leo";
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        return "Virgo";
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        return "Libra";
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        return "Scorpio";
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        return "Sagittarius";
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        return "Capricorn";
    } else {
        return "Invalid date entered";
    }
}

  // Knowing if your birthday is leapyear
  int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) { // year % 4 to calculate if your birthday is leapyear 
        return 1;  // Leap year
    } else {
        return 0;  // Not a leap year
    }
}
 // getting your chinese zodiac based on year 
string ChineseZodiac(int year, int month, int day) {
    string chineseZodiacSigns[] = {
        "Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"
    };
    return chineseZodiacSigns[year % 12]; // year % 12 to calculate if what your chinese zodiac 
}


int main() {
    string name;
    string response;
    int month, day, year, choice;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Hi! " << name << ", I want to know you more. Do you allow me to get your birthday? [yes/no]: ";
    cin >> response;

    if (response == "yes") {
        cout << "Enter your birth month (1-12): ";
        cin >> month; //enter month
        cout << "Enter your birth day (1-31): ";
        cin >> day; //enter day
        cout << "Enter your birth year: ";
        cin >> year; // enter year
        
        

        do {
            
            
            // Menu options
            cout << "\nWhat do you want to do? Select an option below:\n";
            cout << "[0] End the program\n";
            cout << "[1] Know your zodiac sign\n";
            cout << "[2] Check if your birthday is a leap year\n";
            cout << "[3] Update your birthday\n";
            cout << "[4] Chinese zodiac sign\n";
            cout << "Your choice is: ";
            cin >> choice; // enter your choice

            // using switch and break statement
            
            switch (choice) {
                case 0:
                    cout << "Ending the program. Goodbye and thankyou, " << name << "!\n";
                    cout << "\n**********************************************************\n";
                    break;
                case 1:
                    cout << "Your zodiac sign is: " << ZodiacSign(day, month,year);
                    cout << "\n**********************************************************\n";
                    break;
                case 2:
                    if (isLeapYear(year) == 1) {
                        cout << "Your birthday is in a leap year!";
                        cout << "\n**********************************************************\n";
                    } else {
                        cout << "Your birthday is not in a leap year.";
                        cout << "\n**********************************************************\n";
                    }
                    break;
                case 3:
                    cout << "Enter your new birth month (1-12): ";
                    cin >> month;
                    cout << "Enter your new birth day (1-31): ";
                    cin >> day;
                    cout << "Enter your new birth year: ";
                    cin >> year;
                    cout << "\n**********************************************************\n";
                    break;
                case 4:
                    cout << "Your Chinese zodiac sign is: " << ChineseZodiac(year,month,day);
                    cout << "\n**********************************************************\n";
                    break;
                default:
                    cout << "Invalid choice. Please select a valid option.\n";
            }
        } while (choice != 0); // Loop until user chooses to exit
    } else {
        cout << "I understand that you don't want to share your birthday information.\n";
    }

    return 0;
}
