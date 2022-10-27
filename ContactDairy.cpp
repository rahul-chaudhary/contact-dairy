#include "DiaryTemplate.cpp"
#include <vector>
#include <iostream>

std::vector<DiaryTemplate> diary{
    {"John", "Doe", "johnjoe@gmail.com", +12125550123 },
    {"Jane", "Doe", "janedoe@gmail.com", +92127770321 },
};

class ContactDairy {
    DiaryTemplate dt;

    public:
    ContactDairy() {

    }
    void addContact() {
        std::string f_name, l_name, email;
        long long phno;
        std::cout<<"Adding contact... \n";

        std::cout<<"First name : ";
        std::cin>> f_name;
        std::cout<<"\nLast name : ";
        std::cin>> l_name;
        std::cout<<"\nEmail : ";
        std::cin>> email;
        std::cout<<"\nPhone no: ";
        std::cin>> phno;
        diary.push_back({f_name, l_name, email, phno});
    }
    void searchContact() {
        std::string f_name, l_name;
        std::cout<<"Searching contact... \n\n";

        std::cout << "Enter first and last name: \n";
        std::cin >> f_name >> l_name;

        for(int i = 0; i < diary.size(); i++) {
            if(diary[i].getFirstname() == f_name && diary[i].getLastName() == l_name) {
                std::cout << "\nContact found!!\n";
            }
        }

    }
    void modifyContact() {
        std::cout<<"Modifying contact... \n";
    }
    void removeContact() {
        std::cout<<"Removing contact... \n";
    }
};