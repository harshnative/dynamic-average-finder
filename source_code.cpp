#include<iostream>

using namespace std;


//func to calculate the average 
double averageFinder (double inputArray[] , int arrayCount)		//a dynamic memory allocated is passed here 
{
	double average = 0;
	for(int i=0 ; i<arrayCount ; i++)
	{
		average = average + inputArray[i];
	}
	average = average / (arrayCount);
	return average;
}

int main()
{
	int i = 1 , j = 0;
	
	//pointers for the dynamic allocation
	double *p , *n;
	
	//dynamic memorary allocation
	p = new double[1];
	
	
	while(1)			//technically infinite loop
	{
		cout<<"enter 0 for calculate the result\n\n";
		cout<<"enter the input "<<i<<" - ";
		cin>>p[j];
		if(p[j]==0)			//break statement for the loop
		{
			break;
		}
		i++;
		j++;
		
		
		//reallocation of the memorary if the user needs more space 
		n = (double*) realloc(p, (i)*sizeof(double));
		p = n;
		
		system("cls");
		
		//checking for the memorary overflow 
		if(p==NULL)
		{
			system("cls");
			cout<<"Memorary overflow............\n\n";
			system("pause");
			exit(1);
		}
		system("cls");
	}
	
	//showing the result 
	double result = 0;
	result = averageFinder(p,j);
	system("cls");
	cout<<"average of the inputs provided is - "<<result;
	cout<<"\n\n";
	system("pause");
	return 0;
}
