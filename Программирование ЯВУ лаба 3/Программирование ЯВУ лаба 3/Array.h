template <class Collection_Data> struct Array : public Basis<Collection_Data>
{
protected:
	Element<Collection_Data>* END;

	void Add(Collection_Data data)
	{
		Element<Collection_Data>* NEW = new Element<Collection_Data>(data);
		NEW->previous = NULL;
		NEW->next = NULL;
		if (this->FIRST == NULL)//если список пуст
		{

			this->FIRST = NEW;
			this->END = NEW;
		}
		else
		{
			this->END->next = NEW;
			this->END = NEW;
		}
	}

	void Add_Emty()
	{
		Element<Collection_Data>* NEW = new Element<Collection_Data>();
		NEW->previous = NULL;
		NEW->next = NULL;
		if (this->FIRST == NULL)//если список пуст
		{

			this->FIRST = NEW;
			this->END = NEW;
		}
		else
		{
			this->END->next = NEW;
			this->END = NEW;
		}
	}
public:
	Array(int array_len)
	{
		END = NULL;
		for (int i = 0; i < array_len; i++)
		{
			this->Add_Emty();
		}
	}

	Array(Collection_Data* arr, int array_len)
	{
		END = NULL;
		for (int i = 0; i < array_len; i++)
		{
			this->Add(arr[i]);
		}
	}

	Array(Collection_Data data, int array_len)
	{
		END = NULL;
		for (int i = 0; i < array_len; i++)
		{
			this->Add(data);
		}
	}


	Collection_Data &operator[](int iterator) //перегрузка []     
	{
		iterator++;
		unsigned int length = 0;
		Element<Collection_Data>* link = this->FIRST;
		while (link != NULL)//пока список не закончится
		{
			length++;
			if (length == iterator)
			{
				return(link->data);
			}
			link = link->next;//переход к следующему элементу списка
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
		END = NULL;
	}

	~Array()
	{
		Clean();
	}
};