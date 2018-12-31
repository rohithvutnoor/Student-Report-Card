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
 		
 		first row in a students matrix -> student 1 details
 		second row in a students matrix -> student 2 details
 		...
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
 		
		first row in a marks matrix -> student 1 marks
 		second row in a marks matrix -> student 2 marks
 		...
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
	
	// Below code is for your understanding on how actually data is stored in matrix
	//Remove comments and run again
	
	
	
	cout<<"students array\n"<<endl;
	for (int i = 0 ; i < size ; i++ ){
		cout<<students[i][0]<<"\t"<<students[i][1]<<endl;
	}
	cout<<"marks array\n\n";
	for (int i = 0 ; i < size ; i++ ){
		cout<<marks[i][0]<<"\t"<<marks[i][1]<<"\t"<<marks[i][2]<<endl;
	}
	
	
	
  	return 0;
}
