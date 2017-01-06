#ifndef LIBRARY_H_
#define LIBRARY_H_
#include <vector>
#include <string>

class Library {
public:
  struct Date {
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
    int number_;
    bool operator==(const Book &what) const { return what.number_ == number_; }

  private:
    int checked_out_for_; // how long it's been checked out for
  };

  class Patron {
  public:
    std::vector<Book> checked_out_books_;
    std::string name_;
  };

  struct DateInputs {
    std::string day_;
    std::string month_;
    std::string year_;
  };

  std::vector<Patron> patrons_;
  std::vector<Book> all_books_;

  DateInputs InputDate();            //
  //Date InputDate();
  Date CreateDate(DateInputs);
  void AddPatron(std::string); //
  void CheckOutBook(
      Patron, std::string); // if the book doesn't exist it makes a book lol
  bool IsBookOverdue(Book); //
  bool DoesBookExist(std::string); //
  void TurnInBook(Patron, Book);
  Book get_book(std::string);
  Patron get_patron(std::string);
};
#endif // LIBRARY_H_
