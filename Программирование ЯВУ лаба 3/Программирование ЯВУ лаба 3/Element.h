template <class Element_Data> struct Element//��������� �������� ������(������ ����������)
{
public:
	Element* next;//��������� �� ��������� �������
	Element* previous;//��������� �� ���������� �������
	Element_Data data;

	Element()
	{
	}

	Element(Element_Data data)
	{
		this->data = data;
	}
};