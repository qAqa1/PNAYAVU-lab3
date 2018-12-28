//template <class Collection_Data> struct Stack : public Basis_for_Stack_and_Queue<Collection_Data>, public Basis<Collection_Data>
template <class Collection_Data> struct Basis//��������� �������� ������(������ ����������)
{
protected:
	Element<Collection_Data>* FIRST;//��������� �� ������ ������
public:
	Basis()
	{
		FIRST = NULL;
	}
	virtual void Clean() = 0;

	unsigned int Length()// ������ ������
	{
		unsigned int length = 0;
		Element<Collection_Data>* link = FIRST;
		while (link != NULL)//���� ������ �� ����������
		{
			length++;
			link = link->next;//������� � ���������� �������� ������
		}
		return(length);
	}

	bool Empty()//�������� �� �������
	{
		return(FIRST == NULL);
	}

	Collection_Data Peek(unsigned int number)
	{
		unsigned int length = 0;
		Element<Collection_Data>* link = FIRST;
		while (link != NULL)//���� ������ �� ����������
		{
			length++;
			if (length == number)
			{
				return(link->data);
			}
			link = link->next;//������� � ���������� �������� ������
		}
		return(NULL);
	}

	void Set(unsigned int number, Collection_Data data)
	{
		unsigned int length = 0;
		Element<Collection_Data>* link = FIRST;
		while (link != NULL)//���� ������ �� ����������
		{
			length++;
			if (length == number)
			{
				link->data = data;
				return;
			}
			link = link->next;//������� � ���������� �������� ������
		}
		return;
	}
};