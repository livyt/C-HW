#include "library.h"
#include <iostream>
#include <vector>

// DATE TIME CHECKED OUT TIME TIME DATE TIME CHECKED OUT FOR DATE CHECKED
// OUT!!!!!! !!!!
void Library::addPatron(std::string input_name) {
  Patron patron;
  patron.name_ = input_name;
  patrons_.push_back(patron);  // patrons is that vector of you-know-whats
}
void Library::checkOutBook(Patron patron, std::string book) {
  bool checkedOut = false;
  Date bookDate = inputDate();
  Date bookDueDate;
  bookDueDate.month_ = bookDate.month_ + 1;

  for (Book i : all_books_) {
    if (doesBookExist(i.title_)) {
      if (i.checked_out_ == false){
        i.date_checked_out_ = bookDate;
        i.due_date_ = bookDueDate;
        patron.checked_out_books_.push_back(i);
        checkedOut = true;
      }else{
        std::cout << "that book's checked out already, sorry :(" << std::endl;
        checkedOut = true;
      }
    }
  }
  if (!checkedOut) {
    Book newBook;
    newBook.title_ = book;
    newBook.date_checked_out_ = bookDate;
    newBook.due_date_ = bookDueDate;
    patron.checked_out_books_.push_back(newBook);
  }
}

bool Library::doesBookExist(std::string search) {
  for (Book i : all_books_) {
    if (i.title_ == search) {
      return true;
    }
  }
  return false;
}
bool Library::isBookOverdue(Book book) {  // every 3 commands the day is laging
  std::cout << "you gotta enter the current date now." << std::endl;
  Date current_date = inputDate();
  if (current_date == book.due_date_ || current_date.year_ > book.due_date_.year_ || current_date.month_ > book.due_date_.month_){
    return true;
  }
  return false;
}

Library::Date Library::inputDate() {
  int day;
  int month;
  int year;
  Date new_date;

  std::cout << "hey. day. in a number like 2" << std::endl;
  std::cin >> day;
  new_date.day_ = day;

  std::cout << "moth, as a number. like 5 for may" << std::endl;
  std::cin >> month;
  new_date.month_ = month;

  std::cout << "year??" << std::endl;
  std::cin >> year;
  new_date.year_ = year;

  return new_date;
}
void Library::turnInBook(Patron patron, Book turnin){
  //////////// 
}
Library::Book Library::getBook(std::string book_to_get){
  for (Book i : all_books_){
    if(book_to_get == i.title_){
      return i;
    }
  }
  Book invalidBook;
  invalidBook.title_ = "INVALID BOOK";
  std::cout << "getBook failed, try different string?" << std::endl;
  return invalidBook;
}

Library::Patron Library::getPatron(std::string patron_to_get){
  for (Patron i : patrons_){
    if (i.name_ == patron_to_get){
      return i;
    }
  }
  Patron invalidPatron;
  invalidPatron.name_ = "INVALID PATRON";
  std::cout << "getPatron failed, try different string?" << std::endl;
  return invalidPatron;
}
