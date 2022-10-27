#include <string>

class DiaryTemplate {
    std::string f_name, l_name, email;
    long long phno;

    public:
    DiaryTemplate(){  }

    DiaryTemplate(std::string fname, std::string lname, std::string mail, long long phnum) {
        f_name = fname;
        l_name = lname;
        email = mail;
        phno = phnum;
    }

    std::string getFirstname() { return f_name;  }

    std::string getLastName() {  return l_name; }

    std::string getFullName() {  return f_name + ' ' + l_name; }

    long long getPhoneNumber() { return phno;   }

};
