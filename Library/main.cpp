#include "Library.h"

int main() 
{
   Author author_1 ("Dmitrii", "Dmitrich");
   Author author_2("Alexander", "Pushkin");
    
   Book book_1 (author_1, "Piece and War", "1891");
   Book book_2(author_2, "Tixii Don", "2000");
   Book book_3(author_1, "How to Win Friends and Influence People", "1936");
   Library library;

   library.AddBook(&author_1,&book_1);
   library.AddBook(&author_2,&book_2);
   library.AddBook(&author_1, &book_3);
   
   library.PrintAllBooks();
   library.SwapBook(author_1, author_2);
   library.PrintAllBooks();
   //library.FindBook(&b);
   //library.SwapBook(&a,&e);
   //library.PrintAllBooks();
   //library.DeleteBook(&b);
   //library.PrintAllBooks();
}