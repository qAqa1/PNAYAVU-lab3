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
		Stack<int> стэк;
		стэк.Push(3);
		cout << endl << стэк.Pop();

		Queue<float> очередь;
		очередь.Push(3);
		очередь.Push(23.5);
		cout << endl << очередь.Length();
		cout << endl << очередь.Back();
		cout << endl << очередь.Length();
		Array<string> массив("str", 5);

		cout << endl << массив.Length();
		cout << endl << массив[4];

		cout << endl << массив.Empty();	

		Array<string> массив2("str", 5);


	} while (_getch() != 27);
}