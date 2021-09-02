#include "School.hh"

School::School(std::string name, std::string rector, unsigned int studentsCount)
{
  this->name = name;
  this->rector = rector;
  this->studentsCount = studentsCount;
}

School::~School()
{
}

std::string School::GetName() const
{
  return name;
}

std::string School::GetRector() const
{
  return rector;
}

unsigned int School::GetStudentsCount() const
{
  return studentsCount;
}