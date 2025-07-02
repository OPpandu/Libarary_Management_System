#include<iostream>
#include<string>
#include<set>
#include<map>
#include "book.h"
#include "account.h"
#include "transaction.h"
#include "student.h"
#include "faculty.h"
#include "librarian.h"
#include "utils.h"
#include "logger.h"
#include<library.h>
using namespace std;
int main(){
    lib ml("PK kelkar");
    ml.addaccount("sahil","haha","student");
    book b1("Fiction", "The Alchemist", "Paulo Coelho", "HarperOne", 1988, "ISBN001");
    book b2("Sci-Fi", "Dune", "Frank Herbert", "Chilton Books", 1965, "ISBN002");
    book b3("Mystery", "Gone Girl", "Gillian Flynn", "Crown Publishing", 2012, "ISBN003");
    book b4("Fantasy", "Harry Potter", "J.K. Rowling", "Bloomsbury", 1997, "ISBN004");
    book b5("Non-Fiction", "Sapiens", "Yuval Harari", "Harvill Secker", 2011, "ISBN005");
    book b6("Horror", "The Shining", "Stephen King", "Doubleday", 1977, "ISBN006");
    book b7("Romance", "Pride and Prejudice", "Jane Austen", "T. Egerton", 1813, "ISBN007");
    book b8("Biography", "Long Walk to Freedom", "Nelson Mandela", "Little, Brown", 1994, "ISBN008");
    book b9("Philosophy", "The Republic", "Plato", "Penguin Classics", -380, "ISBN009");
    book b10("Tech", "Clean Code", "Robert C. Martin", "Prentice Hall", 2008, "ISBN010");
    ml.addbook(b1);
    ml.addbook(b2);
    ml.addbook(b3);
    ml.addbook(b4);
    ml.addbook(b5);
    ml.addbook(b6);
    ml.addbook(b7);
    ml.addbook(b8);
    ml.addbook(b9);
    ml.addbook(b10);
    ml.list_all_books();
    ml.mainpage();

}
