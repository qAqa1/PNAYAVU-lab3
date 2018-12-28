template <class Collection_Data> struct Stack : public Basis<Collection_Data>
{
public:
	Stack()
	{
	}

	Stack(Collection_Data* arr, int array_len)
	{
		for (int i = 0; i < array_len; i++)
		{
			this->Push(arr[i]);
		}
	}

	void Push(Collection_Data data)
	{
		if (this->FIRST == NULL)
		{
			this->FIRST = new Element<Collection_Data>(data);
			this->FIRST->next = NULL;
		}
		else
		{
			Element<Collection_Data>* NEW = new Element<Collection_Data>(data);
			NEW->next = this->FIRST;
			this->FIRST = NEW;
		}
	}

	Collection_Data Pop()
	{
		if (this->FIRST == NULL)
		{
			return(NULL);
		}
		else
		{
			Element<Collection_Data>* DELETED = this->FIRST;
			this->FIRST = this->FIRST->next;
			Collection_Data data = DELETED->data;
			delete(DELETED);
			return(data);
		}
	}

	void Clean()
	{
		Element<Collection_Data>* link = this->FIRST;
		while (link != NULL)//пока список не закончится
		{
			Element<Collection_Data>* DELETED = link;
			link = link->next;//переход к следующему элементу списка
			delete(DELETED);
		}
		this->FIRST = NULL;
	}

	~Stack()
	{
		Clean();
	}
};