//template <class Collection_Data> struct Stack : public Basis_for_Stack_and_Queue<Collection_Data>, public Basis<Collection_Data>
template <class Collection_Data> struct Basis//структура элемента списка(список двусвязный)
{
protected:
	Element<Collection_Data>* FIRST;//указатель на начало списка
public:
	Basis()
	{
		FIRST = NULL;
	}
	virtual void Clean() = 0;

	unsigned int Length()// длинна списка
	{
		unsigned int length = 0;
		Element<Collection_Data>* link = FIRST;
		while (link != NULL)//пока список не закончится
		{
			length++;
			link = link->next;//переход к следующему элементу списка
		}
		return(length);
	}

	bool Empty()//проверка на пустоту
	{
		return(FIRST == NULL);
	}

	Collection_Data Peek(unsigned int number)
	{
		unsigned int length = 0;
		Element<Collection_Data>* link = FIRST;
		while (link != NULL)//пока список не закончится
		{
			length++;
			if (length == number)
			{
				return(link->data);
			}
			link = link->next;//переход к следующему элементу списка
		}
		return(NULL);
	}

	void Set(unsigned int number, Collection_Data data)
	{
		unsigned int length = 0;
		Element<Collection_Data>* link = FIRST;
		while (link != NULL)//пока список не закончится
		{
			length++;
			if (length == number)
			{
				link->data = data;
				return;
			}
			link = link->next;//переход к следующему элементу списка
		}
		return;
	}
};