#include <iostream>
#include "library.h"
int main() { 
  Library library;
  std::cout << "addpatron/checkout/isbkoverdue/searchbooks/turnin/exit" << std::endl;
  while( true ) {
    std::string choice;
    std::cout << "what do you wnat to do" << std::endl;
    std::cin >> choice;
    if (choice == "addpatron"){
      std::cout << "what is the patron's name?" << std::endl;
      std::string patron_name;
      std::cin >> patron_name;
      library.addPatron(patron_name);
      std::cout << "patron added!" << std::endl;
    
    }else if (choice == "checkout"){
      std::cout << "what patron wants to check out this book?" << std::endl;
      std::string patron_choice;
      std::cin >> patron_choice;
      std::cout << "what book do they want to check out?" << std::endl;
      std::string book_checkout;
      std::cin >> book_checkout;
      library.checkOutBook(library.getPatron(patron_choice), book_checkout);
      std::cout << "your book is due in a month :)" << std::endl;
    
    }else if (choice == "isbkoverdue"){
      std::cout << "what book?" << std::endl;
      std::string overdue_book;
      std::cin >> overdue_book;
      if (library.isBookOverdue(library.getBook(overdue_book))){
        std::cout << "oh no. your book is overdue. get in line for the guillotine!!!" << std::endl;
      }else{
        std::cout << "time's not up....yet" << std::endl;
      }
    }else if (choice == "searchbooks"){

    }else if (choice == "turnin"){
        
    }else if (choice == "exit"){

    }else{

    }
  }
  return 0; 
}
