#pragma once
#include <iostream>
#include <string>

class Author
{
public:
   Author(std::string first_name, std::string last_name);

   friend std::ostream& operator<<(std::ostream& out, const Author& author);
   friend std::istream& operator>>(std::istream& in, Author& author);
   Author& operator=(const Author& author);

protected:
std::string m_first_name;
std::string m_last_name;
};