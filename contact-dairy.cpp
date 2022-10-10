/* Contact dairy 
Search, add, delete */
#include <iostream>
#include <vector>
#include <string.h>

class DairyTemplate {
    std::string f_name, l_name, email;
    long long phno;

    public:
    DairyTemplate(std::string fname, std::string lname, std::string mail, long long phnum) {
        f_name = fname;
        l_name = lname;
        email = mail;
        phno = phnum;
    }

    std::string getFirstname(){
        return f_name;
    }
    std::string getLastName(){
        return l_name;
    }
    std::string getFullName(){
        return f_name + ' ' + l_name;
    }

    long long getPhoneNumber() {
        return phno;
    }

};

// class ContactDairy {
//     DairyTemplate d1 {"Rahul", " Chaudhary", "rahulchy.rc64@gmail.com", 9135811774};
//     std::vector<DairyTemplate> contactDairy{d1};
// };

int main() {

    std::cout<< "Select an option: \n";
    std::cout<< "1. Add a contact: \n";
    std::cout<< "2. search a contact: \n";
    std::cout<< "3. Modify a contact: \n";
    std::cout<< "4. Remove a contact: \n";

    int inp;
    std::cin>>inp;
    std::cout<<'\n';
    
    DairyTemplate dt;
    if(inp == 1) {
        dt.addContact();
    }
    else if(inp == 2) {
        dt.SearchContact();
    }
    else if(inp == 3) {
        dt.ModifyContact();
    }
    else if(inp == 4) {
        dt.RemoveContact();
    }
    else {
        std::cout<<"*Error*\nEnter a valid option.\n";
    }
    std::vector<DairyTemplate> d{
        {"Rahul", "Chaudhary", "rahulchy.rc64@gmail.com", 9135811774},
        {"Sahil", "Chaudhary", "sahilchaudhary@gmail.com", 7004013713},
    };



    return 0;
}