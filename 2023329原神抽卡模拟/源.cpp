#include <iostream>

void Draw_once(int* drawn_big,int* drawn_smaLL)
{
	using std::cout;
	int Minimum_guarantee_big = 0;
	int Minimum_guarantee_smaLL = 0;
	if (*drawn_big > 70)
	{
		Minimum_guarantee_big = *drawn_big;
	}
	else if (*drawn_smaLL > 9)
	{
		Minimum_guarantee_smaLL = *drawn_smaLL;
	}
	else
	{
		Minimum_guarantee_big = 0;
	}
	if (rand() % 80 + 5 + Minimum_guarantee_big > 80)
	{
		cout << "��ϲ���鵽���ǽ�ɫ!!!!!\n";
		*drawn_big = 0;
	}
	else if(rand() % 10 + 2 + Minimum_guarantee_smaLL > 10)
	{
		cout << "��ϲ���鵽���ǽ�ɫ!\n";
		*drawn_smaLL = 0;
	}
	else
	{
		cout << "��ϲ���鵽��������\n";
	}
}

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	int drawn_big = 1,drawn_smaLL=1, operate = 1;
	while(operate)
	{
		cout << "���������Ĳ�����\n1.����\n2.ʮ����\n3.����\n";
		cin >> operate;
		switch (operate)
		{
		case 1:Draw_once(&drawn_big, &drawn_smaLL); drawn_big++, drawn_smaLL++; break;
		case 2:
		{
			for (int i = 0; i < 10; i++)
			{
				Draw_once(&drawn_big,&drawn_smaLL);
				drawn_big++, drawn_smaLL++;
			}
			break;
		}
		case 3: operate = 0; break;
		default:
			break;
		}
	}

}