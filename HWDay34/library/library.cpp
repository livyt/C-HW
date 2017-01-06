#include "library.h"
#include <iostream>
#include <vector>
#include <algorithm>

void Library::AddPatron(std::string input_name) {
  Patron patron;
  patron.name_ = input_name;
  patrons_.push_back(patron); // patrons is that vector of you-know-whats
}
void Library::CheckOutBook(Patron patron, std::string book) {
  bool checkedOut = false;
  Date book_date = InputDate();
  Date book_due_date;
  //okay. if someone checks out in december the due date has to be jan.
  if(book_date.month_ = 12){
    book_due_date.month_ = 1;
    book_due_date.year_ = book_date.year_ + 1;
  }else{
    book_due_date.month_ = book_date.month_ + 1;
  }

  for (Book i : all_books_) {
    if (DoesBookExist(i.title_)) {
      if (i.checked_out_ == false) {
        i.date_checked_out_ = book_date;
        i.due_date_ = book_due_date;
        patron.checked_out_books_.push_back(i);
        checkedOut = true;
      } else {
        std::cout << "that book's checked out already, sorry :(" << std::endl;
        checkedOut = true;
      }
    }
  }
  if (!checkedOut) {
    Book newBook;
    newBook.title_ = book;
    newBook.date_checked_out_ = book_date;
    newBook.due_date_ = book_due_date;
    newBook.checked_out_ = true;
    all_books_.push_back(newBook); // 0ops forgot
    patron.checked_out_books_.push_back(newBook);
  }
}

bool Library::DoesBookExist(std::string search) {
  for (Book i : all_books_) {
    if (i.title_ == search) {
      return true;
    }
  }
  return false;
}
bool Library::IsBookOverdue(Book book) { // every 3 commands the day is laging
  std::cout << "you gotta enter the current date now." << std::endl;
  Date current_date = InputDate();
  if (current_date.year_ > book.due_date_.year_ ||
      current_date.month_ > book.due_date_.month_) {
    return true;
  }
  return false;
}

//std::tuple<int, int, int> Library::InputDate() {
Library::Date Library::InputDate() {  
  int day;
  int month;
  int year; 
  
  while( true ){
    std::cout << "hey. day. in a number like 2" << std::endl;
    std::cin >> day;
    if (!(day > 31 || day < 1)){
      break;
    }
    std::cout << "that's not a day of the month." << std::endl;
  }
  while( true ){
    std::cout << "moth, as a number. like 5 for may" << std::endl;
    std::cin >> month;
    if(!(month > 12 || month < 1)){
      break;
    }
    std::cout << "go look at a calendar" << std::endl;
  }
  while( true ){
    std::cout << "year??" << std::endl;
    std::cin >> year;
    if(!(year < 2016)){
      break;
    }
    std::cout << "dude. it's 2016." << std::endl;
  }
  //return std::make_tuple(day, month, year);
  Date output;
  output.day_ = day;
  output.month_ = month;
  output.year_ = year;
  return output;
}
void Library::TurnInBook(Patron patron, Book turnin) {
  // making sure the book exists, heh
  bool patronHasBook = false;
  for (Book i : patron.checked_out_books_) {
    if (i.title_ == turnin.title_) {
      patronHasBook = true;
      turnin.checked_out_ = false;
    }
  }

  // now finding the book and removin it from patron's checked_out_books_
  if (patronHasBook) {
    auto to_be_deleted = std::find(patron.checked_out_books_.begin(),
                                   patron.checked_out_books_.end(), turnin);
    patron.checked_out_books_.erase(to_be_deleted);
  }
}
Library::Book Library::get_book(std::string book_to_get) {
  for (Book i : all_books_) {
    if (book_to_get == i.title_) {
      return i;
    }
  }
  Book invalidBook;
  invalidBook.title_ = "INVALID BOOK";
  std::cout << "getBook failed, try different string?" << std::endl;
  return invalidBook;
}

Library::Patron Library::get_patron(std::string patron_to_get) {
  for (Patron i : patrons_) {
    if (i.name_ == patron_to_get) {
      return i;
    }
  }
  Patron invalidPatron;
  invalidPatron.name_ = "INVALID PATRON";
  std::cout << "getPatron failed, try different string?" << std::endl;
  return invalidPatron;
}
