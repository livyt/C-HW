#include "library.h"
#include <iostream>
#include <vector>

// DATE TIME CHECKED OUT TIME TIME DATE TIME CHECKED OUT FOR DATE CHECKED
// OUT!!!!!! !!!!
void Library::addPatron(std::string inputName) {
  Patron patron;
  patron.name_ = inputName;
  patrons_.push_back(patron); // patrons is that vector of you-know-whats
  commands_executed_ += 1;
}
void Library::checkOutBook(Patron patron, std::string book) {
  bool checkedOut = false;
  
  //asking for date
  int day;
  int month;
  int year;
  Date bookDate;
  std::cout << "hey. what day. numher" << std::endl;
  std::cin >> day;
  bookDate.day_ = day;
  std::cout << "month. number" << std::endl;
  std::cin >> month;
  bookDate.month_ = month;
  std::cout << "yyear." << std::endl;
  std::cin >>  year;
  bookDate.year_ = year;
  
  for (Book i : all_books_){
    if (doesBookExist(book)){
      i.date_checked_out_ = bookDate;
      patron.checked_out_books_.push_back(i);
      checkedOut = true;
    }
  }
  if (!checkedOut) {
    Book newBook;
    newBook.title_ = book;
    newBook.date_checked_out_ = bookDate;
    patron.checked_out_books_.push_back(newBook);
  }
  commands_executed_ += 1;

}
bool Library::doesBookExist(std::string search) {
  commands_executed_ += 1;
  for (Book i : all_books_) {
    if (i.title_ == search) {
      return true;
    }
  }
  return false;
}
bool Library::isBookOverdue(Book book){ //every 3 commands the day is laging
  
  return true;
}
