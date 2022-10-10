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

    
    int n[10];
    std::vector<DairyTemplate> d{
        {"Rahul", "Chaudhary", "rahulchy.rc64@gmail.com", 9135811774},
        {"Sahil", "Chaudhary", "sahilchaudhary@gmail.com", 7004013713},
    };



    return 0;
}