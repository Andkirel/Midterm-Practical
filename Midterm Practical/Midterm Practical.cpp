

#include <iostream>
#include <ctime>
#include <cstdlib>

namespace std
{
	int main()
	{
	
		int Answer = 0;
		srand(static_cast<unsigned int>(time(0)));
		int CaseA = rand() % 5 + 1;

		cout << CaseA;

		switch (CaseA)
		{
		case 1:

				cout << "What is the Color of the sky?" << endl;
				cout << "1: Red" << endl;
				cout << "2: Yellow" << endl;
				cout << "3: Green" << endl;
				cout << "4: Blue" << endl;

				cout << "\nAnswer: ";
				cin >> Answer;

			if (Answer == 4)
			{
				cout << "Correct, You must have a super high IQ" << endl;
			}
			else
			{
				cout << "INCORRECT, Please read the question again!!" << endl;
			}
			break;
			
		case 2:
			
				cout << "What is the Captial of Texas?" << endl;
				cout << "1: Austin" << endl;
				cout << "2: Dallas " << endl;
				cout << "3: Houston" << endl;
				cout << "4: Nacogdoches" << endl;

				cout << "\nAnswer: ";
				cin >> Answer;

			if (Answer == 1)
			{
				cout << "Correct, You must have a super high IQ" << endl;
			}
			else
			{
				cout << "INCORRECT, Please read the question again!!" << endl;
			}
			break;
			
			
		case 3:
			
				cout << "Where is Full sail located?" << endl;
				cout << "1: Texas" << endl;
				cout << "2: Indiana " << endl;
				cout << "3: Florida" << endl;
				cout << "4: Ohio" << endl;

				cout << "\nAnswer: ";
				cin >> Answer;

			if (Answer == 3)
			{
				cout << "Correct, You must have a super high IQ" << endl;
			}
			else
			{
				cout << "INCORRECT, Please read the question again!!" << endl;
			}
			break;
			
		case 4:
			
				cout << "What is 2X2?" << endl;
				cout << "1: 6" << endl;
				cout << "2: 4 " << endl;
				cout << "3: 5" << endl;
				cout << "4: 2" << endl;

				cout << "\nAnswer: ";
				cin >> Answer;

			if (Answer == 2)
			{
				cout << "Correct, You must have a super high IQ" << endl;
			}
			else
			{
				cout << "INCORRECT, Please read the question again!!" << endl;
			}
			break;

		}
		
		return 0;
	}

}
