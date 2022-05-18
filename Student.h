class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
  private:
     int StudentID;
     char Name[20];
  // public section
  public:
  //    assignDetails() method declaration
      void assignDetails(int pStudentID, const char pName[]);
  //    display() method declaration
      void display();
};
