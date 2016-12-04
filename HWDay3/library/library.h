#ifndef LIBRARY_H_
#define LIBRARY_H_
#include <vector>
#include <string>

class Library {
public:
 class Book {
  public:
   std::string title_;
   Date date_checked_out_;

  private:
   bool checked_out_;
   int checked_out_for_; // how long it's been checked out for
 };

 class Patron {
  public:
   std::vector<Book> checked_out_books_;
   std::string name_;
 };
 
 class Date {
  public:
   int date_;
   int month_;
   int year_;
 };

 std::vector<Patron> patrons_;
 std::vector<Book> all_books_;
 
 void addPatron(std::string); //
 void checkOutBook(Patron, std::string); // if the book doesn't exist it makes a book lol
 bool isBookOverdue(Book);
 bool doesBookExist(std::string); //
 
private:
 int commands_executed_ = 0;
};
#endif // LIBRARY_H_
