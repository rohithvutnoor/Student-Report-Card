#include<iostream>
#include <string>

using namespace std;
 
int main()
{
  	int size;
  	cout << "Enter Number of Students: ";
   	cin >> size;	//To know how many students data should be stored. 
   	
 	string students[size][2];	//'students' array to store name and roll
 	/*
	 	student1	1
 		student2	2
 		student3	3
 	*/
 	int marks[size][3];		//'marks' array to store marks of 3(can be changed) subjects
 	/*
 		Math	Phy		Chem
 		95		96		96
 		91		98		94
 		97		99		98
 		...		...		...
 		...		..
 		..
 		.
 		depends on size(number of students)
 		
		first row in a mtrix -> student 1 details
 		second row in a matrix -> student 2 details
 	*/
 	
	for (int i = 0 ; i < size ; i++ ){		//run a loop for no of students to get data
		cout<<endl;
		
		cout<<"-------------Student Data-----------"<<endl;
				
		cout<<"Enter Name: ";		//Get Name, Roll and store in 'student' array
		cin>>students[i][0];	//(i,0) i starts from 0
		cout<<"Enter Roll: ";
		cin>>students[i][1];	//(i,1)
		
		cout<<endl<<"-------------Subject Marks-----------"<<endl;
		
		cout<<"Enter marks of Maths: ";		//Get marks and store in 'marks' array
		cin>>marks[i][0];					//(i,0)
		cout<<"Enter marks of Physics: ";
		cin>>marks[i][1];					//(i,1)
		cout<<"Enter marks of Chemistry: ";
		cin>>marks[i][2];					//(i,2)
		
		cout<<"\n\nStudent "<<i+1<<" Details Updated"<<endl;
	}
	
	for (int i = 0 ; i < size ; i++ ){		//Prints every student data that has been stored
		cout<<"\n\n";
		cout<<"-------------*Report Card*-------------";
		cout<<"\n\n";
		cout<<"Name: "<<students[i][0];
		cout<<" RollNo: "<<students[i][1];
		cout<<endl;
		cout<<"Maths: "<<marks[i][0];
		cout<<" Physics: "<<marks[i][1];
		cout<<" Chemistry: "<<marks[i][2];
		
		int sum = marks[i][0] + marks[i][1] + marks[i][2];
		
		cout<<"\nTotal Marks: "<<sum<<" out of 300";
		cout<<"\n\n";
		cout<<"-------------*Report Card*-------------\n\n\n\n";
	}
	
  	return 0;
}