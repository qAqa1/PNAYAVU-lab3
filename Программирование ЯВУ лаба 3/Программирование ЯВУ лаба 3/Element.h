template <class Element_Data> struct Element//структура элемента списка(список двусвязный)
{
public:
	Element* next;//указатель на следующий элемент
	Element* previous;//указатель на предыдущий элемент
	Element_Data data;

	Element()
	{
	}

	Element(Element_Data data)
	{
		this->data = data;
	}
};