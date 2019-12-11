#pragma once
#include <map>
#include <iostream>
#include <list>

#include "Book.h"
#include "Author.h"

class Library
{
public:

   Library() = default;
   void AddBook(Author* author, Book* book);
   void DeleteBook(Author* author);
   void FindBooks(Author* author);
   void PrintAllBooks();
   void SwapBook(Author& author_1, Author& author_2);

protected:
   std::map<Author*, std::list<Book*>> m_books;
};