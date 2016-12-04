#include "library.h"
#include <iostream>
#include <vector>

// DATE TIME CHECKED OUT TIME TIME DATE TIME CHECKED OUT FOR DATE CHECKED
// OUT!!!!!! !!!!
void Library::addPatron(std::string inputName) {
  Patron patron;
  patron.name_ = inputName;
  patrons_.push_back(patron);  // patrons is that vector of you-know-whats
  commands_executed_ += 1;
}
void Library::checkOutBook(Patron patron, std::string book) {
  bool checkedOut = false;

  Date bookDate = inputDate();
  Date bookDueDate;
  bookDueDate.month_ = bookDate.month_ + 1;

  for (Book i : all_books_) {
    if (doesBookExist(book)) {
      i.date_checked_out_ = bookDate;
      i.due_date_ = bookDueDate;
      patron.checked_out_books_.push_back(i);
      checkedOut = true;
    }
  }
  if (!checkedOut) {
    Book newBook;
    newBook.title_ = book;
    newBook.date_checked_out_ = bookDate;
    newBook.due_date_ = bookDueDate;
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
bool Library::isBookOverdue(Book book) {  // every 3 commands the day is laging
  std::cout << "you gotta enter the current date now." << std::endl;
  Date current_date = inputDate();
  if (current_date == book.due_date_ || current_date.year_ > book.due_date_.year_ || current_date.month_ > book.due_date_.year_){
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
