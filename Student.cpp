#include "Student.h"
#include <iostream>
#include <cstring>

// Assign studentId and name
void Student::assignDetails(int pStudentID, const char pName[]) {
  StudentID = pStudentID;
  strcpy(Name,pName);
}

// Display StudentId and Name
void Student::display() {
}
