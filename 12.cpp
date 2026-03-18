#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const string PHONEBOOK_FILENAME = "phonebook.txt";

// Function to create a phone book file
bool createPhoneBook() {
    ofstream file(PHONEBOOK_FILENAME);
    return file.is_open();
}

// Function to add a contact to the phone book
bool addContact(const string& name, const string& number) {
    ofstream file(PHONEBOOK_FILENAME, ios::app);
    if (file.is_open()) {
        file << name << " " << number << endl;
        return true;
    }
    return false;
}

// Function to delete the phone book file
bool deletePhoneBook() {
    if (remove(PHONEBOOK_FILENAME.c_str()) == 0) {
        return true;
    }
    return false;
}

// Function to read and display contacts from the phone book
void readPhoneBook() {
    ifstream file(PHONEBOOK_FILENAME);
    if (file.is_open()) {
        string line;
        cout << "Phone Book:" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "Unable to read phone book. Phone book not found." << endl;
    }
}

int main() {
    int choice;
    while (true) {

        cin >> choice;

        switch (choice) {
            case 1:
                if (createPhoneBook()) {
                    cout << "Phone book created successfully." << endl;
                }
                else {
                    cout << "Unable to create a phone book." << endl;
                }
                break;
            case 2: {
                string name, number;
                cin >> name >> number;
if (addContact(name, number)) {
                    cout << "Contact added successfully." << endl;
                }
                else {
                    cout << "Unable to add contact. Phone book not found." << endl;
                }
                break;
            }
            case 3:
                if (deletePhoneBook()) {
                    cout << "Phone book deleted successfully." << endl;
                }
                else {
                    cout << "Unable to delete phone book." << endl;
                }
                break;
            case 4:
                readPhoneBook();
                break;
            case 0:
                cout << "Exiting Phone Book Application." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please choose a valid option." << endl;
        }
    }

    return 0;
}
