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
      std::cout << "What's the title of the book you're lookin for?" << std::endl;
      std::string search_title;
      std::cin >> search_title;
      if(library.doesBookExist(search_title)){
        std::cout << "Yep, that book exists!!" << std::endl;
      }else{
        std::cout << "Aw, that book doesn't exist :( but if you check out a book with that title, we'll find a way to get it to you ;)" << std::endl;
      }
    }else if (choice == "turnin"){
      std::cout << "what patron is turning this stuff in?" << std::endl;
      std::string turnin_patron;
      std::cin >> turnin_patron;
      std::cout << "what book are they turning in?" << std::endl;
      std::string book_turnin;
      std::cin >> book_turnin;
      library.turnInBook(library.getPatron(turnin_patron), library.getBook(book_turnin));
      std::cout << "Kudos!" << std::endl;
    }else if (choice == "exit"){
      std::cout << "why do you want to leave the library?? Are you implying that my booklending services are subpar?! Not all of us can afford to poodle around doing whatever we feel like! Some us have to work, you know!!" << std::endl;
      break;
    }else{
      std::cout << "What??" << std::endl;
    }
  }
  return 0; 
}
