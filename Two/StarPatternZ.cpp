#include <iostream>

using namespace std;

void alphabetPattern(int N) // parametarized function
{

	int index, side_index, size;

	
	int Top = 1, Bottom = 1, Diagonal = N - 1;

	
	for (index = 0; index < N; index++)
	
		cout << Top++ << " ";
	
	cout << endl;

	
	for (index = 1; index < N - 1; index++) //index =4
	{

	
		for (side_index = 0; side_index < 2 * (N - index - 1);
			side_index++)
			cout << " ";

		
		cout << Diagonal--;

		cout << endl;
	}


	for (index = 0; index < N; index++)
		cout << Bottom++ << " ";
}


int main()
{

	int N = 5;

	alphabetPattern(N);

	return 0;
}

