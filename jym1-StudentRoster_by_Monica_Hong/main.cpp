/* ****** Performance Assessment Details ******
You are hired as a contractor to help a university migrate an existing student system to a new platform using C++ language. Since the application already exists, its requirements exist as well, and they are outlined in the next section. You are responsible for implementing the part of the system based on these requirements. A list of data is provided as part of these requirements. This part of the system is responsible for reading and manipulating the provided data.

You must write a program containing two classes (i.e., Student and Roster). The program will maintain a current roster of students within a given course. Student data for the program include student ID, first name, last name, email address, age, an array of the number of days to complete each course, and degree program. This information can be found in the “studentData Table” below. The program will read a list of five students and use function calls to manipulate data (see part F4 in the requirements below). While parsing the list of data, the program should create student objects. The entire student list will be stored in one array of students called classRosterArray. Specific data-related output will be directed to the console.

You may not include third-party libraries. Your submission should include one zip file with all the necessary code files to compile, support, and run your application. You must also provide evidence of the program’s required functionality by taking a screen capture of the console run, saved as an image file.
***********************************************/

#include <iostream>
using namespace std;

#include "student.h";
#include "degree.h";
#include "roster.h";

int main()
{
//    [] 1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
    cout << "Course Title  : C867 Scripting & Programming - Applications" << endl;
    cout << "Language Used : C++" << endl;
    cout << "WGU Student ID: blah blah" << endl;
    cout << "Student Name  : Monica Hong" << endl;
//[x] A.  Modify the “studentData Table” to include your personal information as the last item.
    const string studentData[] =
    {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Monica,Hong,mhong21@wgu.edu,38,5,18,14,SOFTWARE"
    };

//[] F.  Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:

//    [x] 2.  Create an instance of the Roster class called classRoster.
    Roster classRoster(studentData);
//    [x] 3.  Add each student to classRoster.
//    [] 4.  Convert the following pseudo code to complete the rest of the  main() function:
//        classRoster.printAll();
    classRoster.PrintAll();
//        classRoster.printInvalidEmails();
//        
//        //loop through classRosterArray and for each element:
//        classRoster.printAverageDaysInCourse(/*current_object's student id*/);
//        
//        Note: For the current_object's student id, use an accessor (i.e., getter) for the classRosterArray to access the student id.
//        
//        classRoster.printByDegreeProgram(SOFTWARE);
//        
//        classRoster.remove("A3");
    classRoster.Remove("A3");
//        classRoster.printAll();
    classRoster.PrintAll();
//        classRoster.remove("A3");
    classRoster.Remove("A3");
//        //expected: the above line should print a message saying such a student with this ID was not found.
//        
//    [x] 5.  Implement the destructor to release the memory that was allocated dynamically in Roster.

    return 0;
}