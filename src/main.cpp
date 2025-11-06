#include <iostream>


int main() {
    //step one find a way to read input from user
    //this should include the contents we want to search for and what type of contents it is
    //contents can consist of file name, file contents, file type.

    std::cout << "Enter the type of content (file name, file contents, file type): ";
    std::string contentType;
    std::getline(std::cin, contentType);


    return 0;
}