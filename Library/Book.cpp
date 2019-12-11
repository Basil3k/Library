#include "Book.h"

Book::Book(Author& author, std::string book_title, std::string released_year)
:m_author(author)
,m_book_title(book_title)
,m_released_year(released_year)
{}

Author Book::GetAuthor()
{
   return m_author;
}

std::ostream& operator<<(std::ostream& out, const Book* book)
{
   out << book->m_book_title << " " << book->m_released_year<< std::endl;
   return out;
}

Book& Book::operator=(const Book& book)
{
   m_book_title = book.m_book_title;
   m_released_year = book.m_released_year;
   return *this;
}

std::istream& operator>>(std::istream& in, Book& book)
{
   in >> book.m_book_title;
   in >> book.m_released_year;
   return in;
}