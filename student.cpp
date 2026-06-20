//-------------------------------definition code
#include"student.h"

student::student()
{
	name = "NULL";
	surname = "NULL";
	roll_no = 0;
	quiz1_marks = 0;
	assignment1_marks = 0;
	exam_marks = 0;
}

student::~student(){
	
}

void student::setname(string name){
	this->name = name;
}

void student::setsurname(string sur){
	surname = sur;
}

void student::setroll_no(int roll){
	roll_no = roll;
}

void student::setquiz1_marks(int qm){
	quiz1_marks = qm;
}

void student::setexam_marks(int m){
	exam_marks = m;
}

void student::setassignment1_marks(int am){
	assignment1_marks = am;
}

string student::getsurname()const{ 
	return surname; 
}

string student::getname()const{ 
	return name; 
}

int student::getassignment1_marks()const{
	return assignment1_marks; 
}

int student::getexam_marks()const{ 
	return exam_marks; 
}

int student::getroll_no()const{ 
	return roll_no; 
}

int student::getquiz1_marks()const{ 
	return quiz1_marks; 
}

char student::getgrade() const {
    float total_marks = (quiz1_marks * 0.25 + assignment1_marks * 0.25 + exam_marks * 0.5);		//formula to calculate the total marks
    char grade;
    //conditions to calculate the grade
    if(total_marks >= 70 && total_marks <= 100){
        grade = 'A';
    } 
	else if(total_marks >= 55 && total_marks <= 69){
        grade = 'B';
    } 
	else if(total_marks >= 45 && total_marks <= 54){
        grade = 'C';
    } 
	else if(total_marks >= 40 && total_marks <= 44){
        grade = 'D';
    } 
	else{
        grade = 'F';
    }
    return grade;
}

bool student::pass() const{
	float total_marks = (quiz1_marks * 0.25 + assignment1_marks * 0.25 + exam_marks * 0.5);
	if(total_marks >= 40){
        return true;	//if condition is statisfied true value is returned
    } 
	else{
        return false;
    }
}

