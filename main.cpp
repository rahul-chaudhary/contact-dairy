/* Contact dairy
Search, add, delete */
#include <iostream>
#include <vector>
#include <string.h>
#include "ContactDairy.cpp"
// #include "DiaryTemplate.cpp"

int main() {
   ContactDairy contdry;
   for(int i = 0; i < 10; i++){

    std::cout<< "Select an option: \n";
    std::cout<< "1. Add a contact: \n";
    std::cout<< "2. search a contact: \n";
    std::cout<< "3. Modify a contact: \n";
    std::cout<< "4. Remove a contact: \n";
    std::cout<< "5. Exit. \n";

    int inp;
    std::cin>>inp;
    std::cout<<'\n';

    if(inp == 1)      contdry.addContact();
    else if(inp == 2) contdry.searchContact();
    else if(inp == 3) contdry.modifyContact();
    else if(inp == 4) contdry.removeContact();
    else if(inp == 5) break;

    else std::cout<<"*Error*\nEnter a valid option.\n";

    // if(contdry.dairy.size() >=2)
    // std::cout<<'\n'<<contdry.dairy[2].getFirstname();
   }
    //std::cout<< contdry.dairy[0].getFirstname();

    return 0;
}
