//--------------------------main program
#include<iostream>
#include"student.h"
#include<string>
using namespace std;
int main()
{
	int choice, max_num;
	//inputting the total number of students
	cout << "ENTER THE TOTAL NUMBER OF STUDENTS: ";
	cin >> max_num;
	
	int numstudents = 0;
	student *students = new student[max_num];
	
	do{	//main menu 
		cout << "\n           STUDENT MANAGEMENT SYSTEM" <<endl;
		cout << "\n                  MAIN MENU " <<endl;
		cout << "              -----------------" <<endl;
        cout << "        1: ADD A STUDENT" <<endl;
        cout << "        2: SEARCH STUDENT" <<endl;
        cout << "        3: DISPLAY ALL STUDENTS" <<endl;
        cout << "        4: DISPLAY ALL PASSING STUDENTS" <<endl;
        cout << "        5: DISPLAY ALL FAILING STUDENTS" <<endl;
        cout << "        6: EXIT" <<endl;
        
        cout << "ENTER YOUR CHOICE (1-6): ";
		cin >> choice;
		cout << endl;
		
		switch(choice){
			//for adding the details of students
			case 1:
				if(numstudents < max_num){
					string name, surname;
                    int roll_no, quiz1_marks, assignment1_marks, exam_marks;
                    
					cout << "ENTER FIRST NAME: ";
                    cin >> name;
                    students[numstudents].setname(name);
                    
                    cout << "ENTER SURNAME: ";
                    cin >> surname;
                    students[numstudents].setsurname(surname);
                    
                    cout << "ENTER ROLL NUMBER: ";
                    cin >> roll_no;
                    students[numstudents].setroll_no(roll_no);
                    
                    cout << "ENTER QUIZ MARKS (out of 100): ";
                    cin >> quiz1_marks;
                    students[numstudents].setquiz1_marks(quiz1_marks);
                    
                    cout << "ENTER ASSIGNMENT MARKS (out of 100): ";
                    cin >> assignment1_marks;
                    students[numstudents].setassignment1_marks(assignment1_marks);
                    
                    cout << "ENTER EXAM MARKS (out of 100): ";
                    cin >> exam_marks;
                    students[numstudents].setexam_marks(exam_marks);

                    numstudents++;

                    cout << "~~~~~~~~~~~~~~~~~STUDENT ADDED SUCCESSFULLY~~~~~~~~~~~~~~~~~~" << endl;
                }
                else{
                	cout << "-----------MAXIMUM NUMBER REACHED----------" << endl;
				}
                break;
        	//searching the student for the data        
            case 2:
            	if (numstudents == 0){
                    cout << "NO STUDENT TO SEARCH" <<endl;
                } 
				else{
                    int roll_no;
                    cout << "ENTER ROLL NUMBER: ";
                    cin >> roll_no;

                    for (int i=0; i<numstudents; i++){
                        if (students[i].getroll_no() == roll_no){
                        	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
                            cout << "           STUDENT FOUND" <<endl;
                            cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" <<endl;
                            cout << "\n------------Details-----------" <<endl;
                            cout << "STUDENT NAME: " << students[i].getname() + " " + students[i].getsurname() <<endl;
                            cout << "ROLL NO: " << students[i].getroll_no() <<endl;
                            cout << "QUIZ 1 MARKS: " << students[i].getquiz1_marks() <<endl;
                            cout << "ASSIGNMENT 1 MARKS: " <<students[i].getassignment1_marks() <<endl;
                            cout << "EXAM MARKS: " << students[i].getexam_marks() <<endl;
                            cout << "GRADE: " << students[i].getgrade() <<endl;
                            cout <<endl;
							
                            break;
                        }
                    }
               }
				break;
			//displaying the details of all students	
			case 3:	
				if(numstudents == 0){
                    cout << "        NO STUDENT ADDED." <<endl;
                    cout << "--------------------------------" <<endl;
                } 
				else{
                    for(int i = 0; i < numstudents; i++){
                        cout << "--------Student " << i+1 << "--------" << endl;
                        cout << "STUDENT NAME: " << students[i].getname() + " " + students[i].getsurname() <<endl;
                        cout << "ROLL NO: " << students[i].getroll_no() <<endl;
                        cout << "QUIZ 1 MARKS: " << students[i].getquiz1_marks() <<endl;
                        cout << "ASSIGNMENT 1 MARKS: " <<students[i].getassignment1_marks() <<endl;
                        cout << "EXAM MARKS: " << students[i].getexam_marks() <<endl;
                        cout << "GRADE: " << students[i].getgrade() <<endl;
                		cout <<endl;                
                    }
                }
				break;
			//displaying the details of passed students	
			case 4:		
				if(numstudents == 0){
                    cout << "        NO STUDENT ADDED." <<endl;
                    cout << "--------------------------------" <<endl;
                } 
				else{
					int count=0;
                    for(int i=0; i<numstudents; i++){
                        if(students[i].pass()){
                        	count++;
                        }
                    }
                    cout << "         STUDENTS PASSED: " << count <<endl;	//displaying the total number of failed students
                    cout << "-------------------------------------------" <<endl;
                    cout << "PASSED STUDENTS DETAILS" << endl;
                    for(int i=0; i<numstudents; i++){
                        if(students[i].pass()){
                            cout << "STUDENT NAME: " << students[i].getname() + " " + students[i].getsurname() <<endl;
                            cout << "ROLL NO: " << students[i].getroll_no() <<endl;
                            cout << "QUIZ 1 MARKS: " << students[i].getquiz1_marks() <<endl;
                            cout << "ASSIGNMENT 1 MARKS: " <<students[i].getassignment1_marks() <<endl;
                            cout << "EXAM MARKS: " << students[i].getexam_marks() <<endl;
                            cout << "GRADE: " << students[i].getgrade() <<endl;
                            cout <<endl;
                        }
                    }
                }
				break;
			//displaying the details of failed students	
			case 5:
				if(numstudents == 0){
                    cout << "        NO STUDENT ADDED." <<endl;
                    cout << "--------------------------------" <<endl;
                } 
				else{
					int count=0;
                    for(int i=0; i<numstudents; i++){
                        if(!students[i].pass()){
                        	count++;
                        }
                    }
                    cout << "         STUDENTS FAILED: " << count <<endl;	//displaying the total number of failed students
                    cout << "-------------------------------------------" <<endl;
                    cout << "FAILED STUDENTS DETAILS" << endl;
                    for(int i=0; i<numstudents; i++){
                        if(!students[i].pass()){
                            cout << "STUDENT NAME: " << students[i].getname() + " " + students[i].getsurname() <<endl;
                            cout << "ROLL NO: " << students[i].getroll_no() <<endl;
                            cout << "QUIZ 1 MARKS: " << students[i].getquiz1_marks() <<endl;
                            cout << "ASSIGNMENT 1 MARKS: " <<students[i].getassignment1_marks() <<endl;
                            cout << "EXAM MARKS: " << students[i].getexam_marks() <<endl;
                            cout << "GRADE: " << students[i].getgrade() <<endl;
                            cout <<endl;
                        }
                    }
                }
				break;
			//exiting the programs
			case 6:
				cout << "------------------------------------" <<endl;
				cout << "Exiting Program" <<endl;
				cout << "         Bye SEE YOU SOON" <<endl;
				cout << "------------------------------------" <<endl;
				break;
					
			default: 
                cout << "   Invalid choice. Please try again." <<endl;
                cout << "---------------------------------------" <<endl;
                break;				    
				
		}	
	}while(choice!=6);
	
	return 0;
}
