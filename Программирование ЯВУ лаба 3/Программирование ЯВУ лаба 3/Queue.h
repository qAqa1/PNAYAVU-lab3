template <class Collection_Data> struct Queue : public Basis<Collection_Data>
{
protected:
	Element<Collection_Data>* END;
public:
	Queue()
	{
		END = NULL;
	}

	Queue(Collection_Data* arr, int array_len)
	{
		END = NULL;
		for (int i = 0; i < array_len; i++)
		{
			this->Push(arr[i]);
		}
	}

	void Push(Collection_Data data)
	{
		Element<Collection_Data>* NEW = new Element<Collection_Data>(data);
		NEW->previous = NULL;
		if (this->FIRST == NULL)//если список пуст
		{
			NEW->next = NULL;
			this->FIRST = NEW;
			END = NEW;
		}
		else
		{
			this->FIRST->previous = NEW;
			NEW->next = this->FIRST;
			this->FIRST = NEW;
		}
	}

	Collection_Data Back()
	{
		if (this->FIRST == NULL)
		{
			return(NULL);
		}
		Collection_Data data = END->data;
		if (this->FIRST == END)
		{
			delete(END);
			this->FIRST = NULL;
			END = NULL;
			return(data);
		}

		Element<Collection_Data>* DELETED = END;
		END->previous->next = NULL;
		END = END->previous;
		delete(DELETED);
		return(data);
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
		END = NULL;
	}

	~Queue()
	{
		Clean();
	}
};