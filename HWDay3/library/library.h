#ifndef LIBRARY_H_
#define LIBRARY_H_
#include <vector>
class Library{
    public:
        class Book{
            public:
                std::string title;
                int dateCheckedOut;
            private:
                bool checkedOut;
                int checkedOutFor; //how long it's been checked out for
        }
        class Patron{
            public:
                std::vector<Book> checkedOutBooks;
        }
        void addPatron();
}
#endif
