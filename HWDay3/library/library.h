#ifndef LIBRARY_H_
#define LIBRARY_H_
#include <vector>
#include <string>

class Library {
 public:
  class Date {
   public:
    int day_;
    int month_;
    int year_;
  };

  class Book {
   public:
    std::string title_;
    Date date_checked_out_;
    Date due_date_;
    bool checked_out_;

   private:
    int checked_out_for_;  // how long it's been checked out for
  };

  class Patron {
   public:
    std::vector<Book> checked_out_books_;
    std::string name_;
  };

  std::vector<Patron> patrons_;
  std::vector<Book> all_books_;

  Date inputDate(); //
  void addPatron(std::string);  //
  void checkOutBook(
      Patron, std::string);  // if the book doesn't exist it makes a book lol
  bool isBookOverdue(Book); //
  bool doesBookExist(std::string);  //
  void turnInBook(Patron, Book);
  Book getBook(std::string);
  Patron getPatron(std::string);
};
#endif  // LIBRARY_H_
