/* Assignment: 1
Campus : Ashdod
Author : eden dadon, ID : 207279183
*/
#include "Queue.h"
#include <string>

void printOnScreen();
bool isbalanced(const char* str);

#define stop "9999"
#define max   50
#define min   1


int main()
{
	printOnScreen();
	
	if (isbalanced("{()}[]")==true)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "folse" << endl;
	}
	
	return 0;
}


void printOnScreen()
{
	LinkedList List;
	char* input,buffer[max];
	int i=0;
	cout << "enter input:" << endl;
	do
	{
		cin >> buffer;
		input=new char[strlen(buffer) + 1];
		
		for (int j = 0; j < strlen(buffer) + 1; ++j)
		{
			input[j] = buffer[j];
		}

		if (!(strcmp(input, stop) == 0))
		{
			List.insert(input, i);
			++i;
		}
		else
		{
			break;
		}
		
		
	} while (1);
	
	List.print();
	
}

bool isbalanced(const char* str)
{



