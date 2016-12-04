#include "library.h"
#include <iostream>
#include <vector>

//DATE TIME CHECKED OUT TIME TIME DATE TIME CHECKED OUT FOR DATE CHECKED OUT!!!!!! !!!!
void Library::addPatron(std::string inputName){
    Patron patron;
    patron.name = inputName;
    patrons.push_back(patron); //patrons is that vector of you-know-whats
}
void Library::checkOutBook(Patron patron, std::string book){
    bool checkedOut = false;
    for (Book i : allBooks) {
        if (book == i.title){
            patron.checkedOutBooks.push_back(i);
            checkedOut = true;
        }
    }
    if (!checkedOut){
        Book newBook;
        newBook.title = book;
        patron.checkedOutBooks.push_back(newBook);
    }
}
bool doesBookExist(std::string search){
    for (Book i : allBooks) {
        if (i.title == search) {
            return true;
        }
    }
    return false;
}
