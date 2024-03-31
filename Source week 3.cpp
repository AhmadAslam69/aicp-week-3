#include <iostream>
#include<string>
using namespace std;





int main()
{


	double weight1[29];
	double weight;
	string name[29];
	double diff_weight[29];

	for (int i = 0; i < 5; i++)
	{


		cout << i + 1 << ". Enter name : ";
		getline(cin, name[i]);




		cout << i + 1 << ". Enter weight (20-100) : ";
		cin >> weight;

		if (weight < 20 || weight > 100)
		{
			cout << "invalid input. Enter again " << endl;
			i--;
		}
		else
		{
			weight1[i] = weight;

		}

		cin.ignore();


	}




	/// task 2

	cout << endl;

	double last[29];
	double last_weight;


	cout << "Enter weight for last day of term " << endl;

	for (int i = 0; i < 5; i++)
	{



		cout << i + 1 << ". Enter weight (20-100) : ";
		cin >> last_weight;

		if (last_weight < 20 || last_weight > 100)
		{
			cout << "invalid input. Enter again " << endl;
			i--;
		}
		else
		{
			last[i] = last_weight;

		}

		cin.ignore();

		diff_weight[i] = last[i] - weight1[i];



		
	}

	cout << endl;




	//print

	for (int i = 0; i < 5; i++)
	{

		cout << "Student " << i + 1 << " name is : " << name[i] << endl;
		cout << "Student " << i + 1 << " weight on first day is : " << weight1[i] << endl;
		cout << "Student " << i + 1 << " weight on last day is : " << last[i] << endl;
		cout << "Difference is " << diff_weight[i] << endl;


		



		//task 3

		if (diff_weight[i] > 2.5)
		{

			cout << name[i] << " there is rise in weight" << endl;


		}
		else if (diff_weight[i] < -2.5) 
		{


			cout << name[i] << " lost their weight" << endl;


		}



		cout << endl;
	}

	
	

	return 0;


}
