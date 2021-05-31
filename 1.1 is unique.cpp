//Q)) Is Unique: Implement an algorithm to determine if a string has all unique characters. 
//What if you cannot use additional data structures?

//logic => 
//sort the string in O(n^2) time bcoz i have used bubble sort over here. OPTIMIZE it using merge sort later
//traverse the string once and check if there is any character repeating. It takes O(n) time
// TC after using merge sort => O(nlogn)+O(n)=O(nlogn)

#include<iostream>
#include<string.h>

using namespace std;

//function to swap
void swap(char *a,char *b)  
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

//Function to sort the string
void sort_string(char str[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{	
		for(j=0;j<n-i-1;j++)
		{
			if(str[j]>str[j+1])	
			{
				swap(&str[j],&str[j+1]);
			}
		}
	}
}

int main()
{
	char str[100];
	int i,n;
	
	cout<<"what length do you want for your string ";
	cin>>n;
	
	cout<<"Enter your string here => ";
	for(i=0;i<n;i++)
	{
	    cout<<"\ncharacter no "<<i+1<<" is: "<<" ";
	    cin>>str[i];
	}
	
	//sorting the string
	sort_string(str,n);
	
	int count=0;
	//traverse the sorted string once to get the duplicates
	for(i=0;i<n;i++)
	{
		if(str[i]==str[i+1])  //if adjacent characters are equal
		{
	        count++;
		}
	}
	if(count!=0)
	{
		cout<<"\nThe characters in the input string aren't unique";
	}
	else
	{
		cout<<"\nAll characters are unique!";	
	}
	
	return 0;
}


