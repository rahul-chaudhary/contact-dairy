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

    std::string getFirstname() { return f_name;  }
    
    std::string getLastName() {  return l_name; }
    
    std::string getFullName() {  return f_name + ' ' + l_name; }

    long long getPhoneNumber() {    return phno;   }

};

class ContactDairy {
    public:
    std::vector<DairyTemplate> dairy{
            {"Rahul", "Chaudhary", "rahulchy.rc64@gmail.com", 9135811774},
            {"Sahil", "Chaudhary", "sahilchaudhary@gmail.com", 7004013713},
        };
    
    void addContact() {
        std::cout<<"Adding contact... \n";
    }
    void searchContact() {
        std::cout<<"Searching contact... \n";
    }
    void modifyContact() {
        std::cout<<"Modifying contact... \n";
    }
    void removeContact() {
        std::cout<<"Removing contact... \n";
    } 
};

int main() {

   
    ContactDairy contdry;
    std::cout<< "Select an option: \n";
    std::cout<< "1. Add a contact: \n";
    std::cout<< "2. search a contact: \n";
    std::cout<< "3. Modify a contact: \n";
    std::cout<< "4. Remove a contact: \n";

    int inp;
    std::cin>>inp;
    std::cout<<'\n';
    
    if(inp == 1)      contdry.addContact();
    else if(inp == 2) contdry.searchContact();
    else if(inp == 3) contdry.modifyContact();
    else if(inp == 4) contdry.removeContact();

    else std::cout<<"*Error*\nEnter a valid option.\n";
    
    std::cout<< contdry.dairy[0].getFirstname();

    return 0;
}