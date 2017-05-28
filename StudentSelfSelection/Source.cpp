/*	
	Ky Nguyen
	nguyenky1504@gmail.com
	May 25, 2017
*/

#include <iostream>
using namespace std;

int initPassion()	// First 3 questions about passion for computing 
{
	int point = 0;
	char choice;

	while (true)
	{
		cout << "Do you like Computing?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	while (true)
	{
		cout << "Do you love Math?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}
	while (true)
	{
		cout << "Do you like technology?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 6;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 3;
			break;
		}
	}

	return point;
}

int initScore()	// First 3 questions about their scores in university 
{
	int point = 0;
	char choice;

	while (true)
	{
		cout << "Are you good at Math?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	while (true)
	{
		cout << "How about Logical Thinking?" << endl
			<< "1. Yes, it's good!" << endl
			<< "2. No, it's quite bad." << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}
	while (true)
	{
		cout << "Do you love algorithm?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}

	return point;
}

int initAtt()// First 3 questions about their attitudes in working 
{
	int point = 0;
	char choice;

	while (true)
	{
		cout << "Have you tried to solve a hard problem overnight?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	while (true)
	{
		cout << "Are you good at presentation" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 6;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 3;
			break;
		}
	}
	while (true)
	{
		cout << "Do you like to work with strange people?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}

	return point;
}

int passionQuestion(int point)
{
	char choice;
	while (true)
	{
		cout << "Do you like coding" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	while (true)
	{
		cout << "Can you work on computer all day?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 6;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 3;
			break;
		}
	}
	while (true)
	{
		cout << "Have you study a programming language by yourself before?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}

	return point;
}

int seQuestion()
{
	int point = 0;
	char choice;
	while (true)
	{
		cout << "Do you like to work as planned?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}
	while (true)
	{
		cout << "Have you ever written any software yet?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	while (true)
	{
		cout << "Do you want to build an application and sell it?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}

	return point;
}

int itQuestion()
{
	int point = 0;
	char choice;
	while (true)
	{
		cout << "Do you know how email is sent through the internet?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}
	while (true)
	{
		cout << "Do you like working with data?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	while (true)
	{
		cout << "Do you love programming?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}
	return point;
}

int ceQuestion()
{
	int point = 0;
	char choice;
	while (true)
	{
		cout << "Do you want to make a robot?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 8;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 4;
			break;
		}
	}
	while (true)
	{
		cout << "Are you good at electronics?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	while (true)
	{
		cout << "Do you love programming?" << endl
			<< "1. Yes (Y)" << endl
			<< "2. No  (N)" << endl;
		cin >> choice;
		if ((choice == '1') || (choice == 'Y') || (choice == 'y'))
		{
			point += 10;
			break;
		}
		else if ((choice == '2') || (choice == 'N') || (choice == 'n'))
		{
			point -= 5;
			break;
		}
	}
	return point;
}

int findMax(int a, int b, int c)
{
	if (b > a)
	{
		if (b > c)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	else
	{
		return 1;
	}
}

void main()
{
	int se = 0,		// Software Engineering
		it = 0,		// Information Technology
		ce = 0;		// Computer Engineering
	int score = 0,	// Store scores about studies
		att = 0,	// Attitudes
		passion = 0,// Passion
		total[3] = { 0, 0, 0 };	// Total score to determine which is the best part
	cout << "Welcome!" << endl;
	cout << "Please answer these questions below with honestly." << endl;

	passion += initPassion();		// Evaluate their passion
	system("pause");
	system("CLS");
	if (passion < 10)				// Ask more question (if needed) to make sure they are suitable for this job
	{
		passion += passionQuestion(passion);
		if (passion < 15)			// They cannot become a programmer
		{
			cout << "Honestly, you should find another job!";
			system("pause");
			return;
		}
	}
	score += initScore();			// Determine their skills
	system("pause");
	system("CLS");

	att += initAtt();				// Evaluate their attitudes
	system("pause");
	system("CLS");
	
	cout << "Now, come to the next part!" << endl;
	se += seQuestion();				// Evaluate their abilities
	system("pause");
	system("CLS");

	it += itQuestion();
	system("pause");
	system("CLS");

	ce += ceQuestion();
	system("pause");
	system("CLS");

	cout << "Here is my suggestion:" << endl;
	if (score < 12)
	{
		cout << "If you study harder, you could become a good ";
		switch (findMax(se, it, ce))
		{
		case 1:
		{
			cout << "Software Engineer!";
			break;
		}
		case 2:
		{
			cout << "Information Technology!";
			break;
		}
		case 3:
		{
			cout << "Computer Engineer!";
			break;
		}
		default:
			break;
		}
		system("pause");
		return;
	}
	else if (att < 15)
	{
		cout << "You should work with people at ";
		switch (findMax(se, it, ce))
		{
		case 1:
		{
			cout << "Software Engineer";
			break;
		}
		case 2:
		{
			cout << "Information Technology";
			break;
		}
		case 3:
		{
			cout << "Computer Engineer";
			break;
		}
		default:
			break;
		}
		cout << " field to learn more from them.";
		system("pause");
		return;
	}
	else
	{
		cout << "You will succeed in ";
		switch (findMax(se, it, ce))
		{
		case 1:
		{
			cout << "Software Engineer";
			break;
		}
		case 2:
		{
			cout << "Information Technology";
			break;
		}
		case 3:
		{
			cout << "Computer Engineer";
			break;
		}
		default:
			break;
		}
		cout << ". Keep working on!";
		system("pause");
		return;
	}
}
