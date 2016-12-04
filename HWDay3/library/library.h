#ifndef LIBRARY_H_
#define LIBRARY_H_
#include <vector>
#include <string>
class Library{
    public:
        class Book{
            public:
                std::string title;
                int dateCheckedOut;
            private:
                bool checkedOut;
                int checkedOutFor; //how long it's been checked out for
        };
        class Patron{
            public:
                std::vector<Book> checkedOutBooks;
                std::string name;
        };
        std::vector<Patron> patrons;
        std::vector<Book> allBooks;
        
        void addPatron(std::string);//
        void checkOutBook(Patron, std::string);//if the book doesn't exist it makes a book lol
        void isBookOverdue(Book);
        bool doesBookExist(std::string);//
};
#endif
