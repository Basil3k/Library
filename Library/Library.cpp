
#include "Library.h"
#include <list>

void Library::AddBook(Author* author, Book* book)
{
  if (m_books.find(&book->GetAuthor()) == m_books.end())//if entered author dont have in library create new author
  {
     m_books[author];
     m_books.find(author)->second.push_back(book);
  }
  else 
  {
     auto finded_author = m_books.find(author);
     finded_author->second.push_back(book);
  }
}

void Library::DeleteBook(Author* author)
{
   if (m_books.find(author) != m_books.end())
   {
      m_books.erase(m_books.find(author));
      std::cout << "Entered book and author has beed deleted" << std::endl;
   }
   else 
   {
      std::cout << "Entered book and author is not in the library, " <<
         "they may has been deleted earlier" << std::endl;
   }
}

void Library::FindBooks(Author* author)
{
   auto finded_book = m_books.find(author);
   if (finded_book == m_books.end())
   {
      std::cout << "Book not found" << std::endl;
   }
   else
   {
      std::cout << "We found the book of the author which you looking for." << std::endl;
      std::cout << "And the books is: " << std::endl;
      for (auto it : m_books)
      {
        std::cout << it.second.front()<< std::endl;
      }
   }
}

void Library::PrintAllBooks()
{
   for (auto it : m_books)
   {
      std::cout << "The author is : " << *it.first << std::endl;
      for (auto it_2 : it.second)
      {
         std::cout << it_2 << std::endl;
      }
   }
}

void Library::SwapBook(Author& author_1, Author& author_2)
{
   auto it_1 = m_books.find(&author_1);
   auto it_2 = m_books.find(&author_2);
   auto end = m_books.end();
   if ((it_1 != end) and (it_2 != end))
   {
      std::swap(it_1->second, it_2->second);
   }
}
