#include<iostream>
#include<vector>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;

#include "Element.h"
#include "Basis.h"
#include "Stack.h"
#include "Queue.h"
#include "Array.h"

void main()
{
	setlocale(LC_ALL, "russian");
	do 
	{
		Stack<int> *b = new Stack<int>;
		b->Push(2);
		Stack<int> ����;
		����.Push(3);
		cout << endl << ����.Pop();

		Queue<float> �������;
		�������.Push(3);
		�������.Push(23.5);
		cout << endl << �������.Length();
		cout << endl << �������.Back();
		cout << endl << �������.Length();
		Array<string> ������("str", 5);

		cout << endl << ������.Length();
		cout << endl << ������[4];

		cout << endl << ������.Empty();	

		Array<string> ������2("str", 5);


	} while (_getch() != 27);
}