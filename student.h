//----------------------------header file code--------------------
#include<string>
using namespace std;
class student
{
	private:
		
		string name, surname;
		int quiz1_marks;
		int assignment1_marks;
		int exam_marks;
		int roll_no;
		
	public:
		
		student();
		~student();
		string getname() const;	//getter for name
		string getsurname() const;	//getter for surname
		int getquiz1_marks() const;	//getter for quiz 1
		int getassignment1_marks() const;	//getter for assignment1 marks
		int getexam_marks() const;	//getter for exam marks
		int getroll_no() const;		//getter for roll number

		void setname(string);	//setter for name
		void setsurname(string);	//setter for surname
		void setquiz1_marks(int );		//setter for quiz1 marks
		void setassignment1_marks(int );	//setter for assignment1 marks
		void setexam_marks(int );	//setter for exam marks
		void setroll_no(int );

		char getgrade() const;	//returns the grade based on total marks
		bool pass() const;	//returns true if student passed, false otherwise
};
