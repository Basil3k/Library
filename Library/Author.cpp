#include "Author.h"

Author::Author(std::string first_name, std::string last_name)
:m_first_name(first_name)
,m_last_name(last_name)
{}

std::ostream& operator<<(std::ostream& out, const Author& author)
{
   out << std::endl  << author.m_first_name + " " + author.m_last_name << std::endl;
   return out;
}

std::istream& operator>>(std::istream& in, Author& author)
{
   std::cout << "Enter author first name" <<std::endl;
   in >> author.m_first_name;
   std::cout << "Enter author last name" << std::endl;
   in >> author.m_last_name;
   return in;
}

Author& Author::operator=(const Author& author)
{
   m_first_name = author.m_first_name;
   m_last_name = author.m_last_name;
   return *this;
}