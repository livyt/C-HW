#include <iostream>
#include "library.h"
int main() {
  Library library;
  std::cout << "addpatron/checkout/isbkoverdue/searchbooks/turnin/exit"
            << std::endl;
  /*while (true) {
    std::string choice;
    std::cout << "What do you want to do?" << std::endl;
    std::cin >> choice;
    if (choice == "addpatron") {
      std::cout << "What is the patron's name?" << std::endl;
      std::string patron_name;
      std::cin >> patron_name;
      library.AddPatron(patron_name);
      std::cout << "Patron added! Welcome to the library!" << std::endl;

    } else if (choice == "checkout") {
      std::cout << "Which patron wants to check out this book?" << std::endl;
      std::string patron_choice;
      std::cin >> patron_choice;
      std::cout << "What book do they want to check out?" << std::endl;
      std::string book_checkout;
      std::cin >> book_checkout;
      library.CheckOutBook(library.get_patron(patron_choice), book_checkout);
      std::cout << "Your book is due in a month :)" << std::endl;

    } else if (choice == "isbkoverdue") {
      std::cout << "Which book?" << std::endl;
      std::string overdue_book;
      std::cin >> overdue_book;
      if (library.IsBookOverdue(library.get_book(overdue_book))) {
        std::cout
            << "Oh no. Your book is overdue. Get in line for the guillotine!!!"
            << std::endl;
      } else {
        std::cout << "Time's not up...yet..." << std::endl;
      }
    } else if (choice == "searchbooks") {
      std::cout << "What's the title of the book you're lookin for?"
                << std::endl;
      std::string search_title;
      std::cin >> search_title;
      if (library.DoesBookExist(search_title)) {
        std::cout << "Yep, that book exists!!" << std::endl;
      } else {
        std::cout << "Aw, that book doesn't exist :( but if you check out a "
                     "book with that title, we'll find a way to get it to you "
                     ";)"
                  << std::endl;
      }
    } else if (choice == "turnin") {
      std::cout << "Which patron is turning a book in?" << std::endl;
      std::string turnin_patron;
      std::cin >> turnin_patron;
      std::cout << "What book are they turning in?" << std::endl;
      std::string book_turnin;
      std::cin >> book_turnin;
      library.TurnInBook(library.get_patron(turnin_patron),
                         library.get_book(book_turnin));
      std::cout << "Kudos!" << std::endl;
    } else if (choice == "exit") {
      std::cout << "Why do you want to leave the library?? Are you implying "
                   "that my booklending services are subpar?! Not all of us "
                   "can afford to poodle around doing whatever we feel like! "
                   "Some us have to work, you know!!"
                << std::endl;
      break;
    } else {
      std::cout << "Invalid command!!!" << std::endl;
    }
  }*/
  auto input = library.InputDate();
  return 0;
}
