#include "library.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void Library::AddPatron(std::string input_name) {
  Patron patron;
  patron.name_ = input_name;
  patrons_.push_back(patron); // patrons is that vector of you-know-whats
}
void Library::CheckOutBook(Patron patron, std::string book) {
  bool checkedOut = false;
  Date book_date = CreateDate(InputDate());
  Library::Date book_due_date;
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
  Date current_date = CreateDate(InputDate());
  if (current_date.year_ > book.due_date_.year_ ||
      current_date.month_ > book.due_date_.month_) {
    return true;
  }
  return false;
}

Library::DateInputs Library::InputDate() {  
  std::string day;
  std::string month;
  std::string year; 
  
  std::cout << "hey. day. in a number like 2" << std::endl;
  std::cin >> day;
    
  std::cout << "moth, as a number. like 5 for may" << std::endl;
  std::cin >> month;
    
  std::cout << "year??" << std::endl;
  std::cin >> year;

  DateInputs outputs;
  outputs.day_ = day;
  outputs.month_ = month;
  outputs.year_ = year;
  return outputs;
}

Library::Date Library::CreateDate(Library::DateInputs input){
    Library::Date output;
  try {
    output.day_ = std::stoi(input.day_);
    output.month_ = std::stoi(input.month_);
    output.year_ = std::stoi(input.year_);
  } catch (std::invalid_argument e) {
    // Oh fuck
    std::cout << "DUMBASS YOU DUMB!!!!!!" << std::endl;
    output.day_ = 1;
    output.month_ = 1;
    output.year_ = 69;
  }
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
