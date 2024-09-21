#include <iostream>
using namespace std; 



string checkForYear() {
    int credits;
    cout << "Enter your credits: ";
    cin >> credits;
    cout << endl;
    
    if (credits >= 91) {
        return "Senior";
    } else if (credits >= 61 && credits <= 90) {
        return "Junior";
    } else if (credits >= 31 && credits <= 60) {
        return "Sophomore";
    } else if (credits >= 0 && credits <= 30) {
        return "Freshman";
    } else {
        return "Invalid...stopping code";
    }
}

int main() {
    string fname, lname;
    char major;
    string majorForStud;

    cout << "Enter your first name of the student: ";
    cin >> fname;
    cout << "Enter your last name of the student: ";
    cin >> lname;

    cout << "Enter the major from the following list by inputting the first character: \n"
            "B: Business\nC: Computer Science\nE: Engineering\nM: Mathematics\n";
    cin >> major;
    cout << endl;

    if (major == 'E' || major == 'e')
    {
        char subMajor;
        string subMajorForStudent;
        cout << "Which major in Engineering: \nM: Mechanical\nC:Civil\nE:Electrical\n";
        cin >> subMajor;
        
        majorForStud = "Engineering";
        if (subMajor == 'C' || subMajor == 'c'){
            subMajorForStudent = "Civil";
        }else if (subMajor == 'M' || subMajor == 'm'){
            subMajorForStudent = "Mechanical";
        }else if (subMajor == 'E' || subMajor == 'e'){
            subMajorForStudent = "Electrical";
        }else{
            subMajorForStudent = "Computer Science";
        }
        string year = checkForYear();
        cout << endl;
        if (subMajorForStudent == "Computer Science"){
            cout << lname << ", " << fname << " is a " <<  year << " " << subMajorForStudent <<  " major.";
        }else{
        cout << lname << ", " << fname << " is a " <<  year << " (" << subMajorForStudent << ") " << majorForStud <<  " major.\n";
        }
        
    }
    else if (major == 'B' || major == 'b'){
        majorForStud = "Business";
        string year = checkForYear();
        cout << lname << ", " << fname << " is a " <<  year << " " << majorForStud <<  " major.";
    } 
    else if (major == 'M' || major == 'm'){
        majorForStud = "Mathematics";
        string year = checkForYear();
        cout << lname << ", " << fname << " is a " <<  year << " " << majorForStud <<  " major.";
    }
    else if (major == 'C' || major == 'c'){
        majorForStud = "Computer Science";
        string year = checkForYear();
        cout << lname << ", " << fname << " is a " <<  year << " " << majorForStud <<  " major.";
    }
    else (
        cout << "Invalid input friend.");
    
    
    

    return 0;
}
