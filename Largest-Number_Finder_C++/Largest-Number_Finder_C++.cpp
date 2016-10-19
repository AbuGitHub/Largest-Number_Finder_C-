/*Author: Abuzar Noorali
Purpose/Description: This program recieves 10 numbers from the user and determines which is the largest number entered.
*/

#include <iostream>
using namespace std;

int main()
{
	int counter = 0;		//Holds loop termination limit
	int number;				//Holds numbers entered by user
	int largest = 0;		//Holds the largest number entered 


		//Get 10 numbers from the user

	cout << "Please enter 10 whole numbers: " << "\n\n";
		
		//Loop through 10 numbers entered by user

	while (counter < 10)
	{
		cout << "Number " << (counter + 1) << ":\n";		//Display to the entry number
		cin >> number;

		if (number > largest)
		{
			largest = number;						//Assign newest number as the largest if it was higher than the previous largest number entered
		}

		//Error message if user enters a negative number

		else if (number < 0)
			cout << "Error, please enter a positive whole number.";			

		counter++;									//Increment counter variable
	}


		//Display largest number entered

	cout << "\n" << "The largest number you have entered is: " << largest << "\n";

	return 0;
}		//End main