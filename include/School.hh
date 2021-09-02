#pragma once

#include<string>

class School
{
private:
  std::string name;
  std::string rector;
  unsigned int studentsCount;
public:
  School(std::string name, std::string rector, unsigned int pagesCount);
  ~School();
  std::string GetName() const;
  std::string GetRector() const;
  unsigned int GetStudentsCount() const;
};
