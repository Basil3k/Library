#pragma once
#include <iostream>
#include <list>

#include "Author.h"

class Book
{
public:
   Book(Author& author, std::string book_title, std::string released_year);

   Author GetAuthor();
   friend std::ostream& operator<<(std::ostream& out, const Book* book);
   friend std::istream& operator>>(std::istream& in, Book& book);
   Book& operator=(const Book& book);

protected:
   std::string m_book_title;
   std::string m_released_year;
   Author& m_author;
};

