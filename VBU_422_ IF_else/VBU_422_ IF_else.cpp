#include <iostream>
using namespace std;

enum Day
{
	Monday=1 , Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main()
{
	setlocale(LC_ALL, "ru");
	//int a = 12.3;
	//int b = 0.23;
	//double c = 2345450000000000046;
	//float n = 148566;
	//int g = true;
	//int t = false;
	//
	//cout << "a = " << a << endl	
	//	<< "b = " << b << endl	
	//	<< "c = " << c << endl		
	//	<< "n = " << n << endl		
	//	<< "g = " << g << endl
	//	<< "t = " << t << endl;
	//
	//unsigned int age{ 26 };
	//cout << "age : " << age << endl;*/
	//
	//bool s = 1; // true
	//bool l = 0; // false
	//bool m = 'd'; // true
	//bool p = 3.2; // true
//
	//double sum = { 100.2 };
	//unsigned int hours{ 8 };
	//unsigned int rez{/* static_cast<unsigned int>*/(unsigned int)(sum / hours) };
	//cout << " Результат выражения и явного преобразования типов  REZ : " << rez << endl;

	/*int a{7};

	if (a>8)
	{
		cout << " Переменная {а} > 8!!!\n";
	}
	else if (a<8)
	{
		cout << " Переменная {а} < 8!!!\n";
	}
	else
	{
		cout << " Переменная {а} == 8!!!\n";
	}
	cout << " продолжение программы " << endl;


	if (a)
	{
		cout << "a = true" << endl;
	}
	else
	{
		cout << "a = false" << endl;
	}*/


	//int a{ 10 };
	//int b{ 4 };
	//int c{};
	//if (a>b)
	//{
	//	cout << " A > B";
	//}
	//else if (a<b)
	//{
	//	cout << "A < B ";
	//}
	//else if(a==b)
	//{
	//	cout << "A == B ";
	//}
	//
	////cout<<"\n" << (c = a > b ? a - b : a + b);
	//cout<<"\n" << (a > b ? " A > B" : (a < b ? "A < B " : "A == B "));

	/*int a{ 15 };
	int b{ 0 };
	if ((a>10)&&(a<100))
	{
		cout << " Условие верное\n";
		if (b>1&&b<10)
		{
			cout << "переменная B = true\n";
		}
		else if (b)
		{
			cout << "false\n";
		}
	}*/

	/* int key;

	do {
		cout << "Введите ключ  : \n";
		cin >> key;
		switch (key)
		{
		case Monday:
		{
			cout << " Monday\n";
			break;
		}
		case Day::Tuesday:
		{
			cout << " Tuesday\n";
			break;
		}
		case Wednesday:
		{
			cout << "Wednesday\n";
			break;
		}
		case Day::Thursday:
		{
			cout << " Thursday\n";
			break;
		}
		case Friday:
		{
			cout << " Friday\n";
			break;
		}
		case Day::Saturday:
		{
			cout << " Saturday\n";
			break;
		}
		case Sunday:
		{
			cout << " Sunday\n";
			break;
		}
		default: ;
			cout << " Error Case !!!\n";
			break;
		}
	} while (key != 0 );*/

	//============================================================================
			//while (true) // предусловный
			// do->while() // постусловный
			// for()		// c параметрами
			//for each ()	// цыкл перебора или прохода
	//============================================================================

		//int i = 1;
		//while (++i<10)
		//	cout << i << " * " << i << " = " << i * i << endl;
		//cout << "=================================================\n";
		//int m = -1;
		//*do
		//{
		//	cout << m << endl;
		//	m--;
		//} while (m>0);*/

		//do
		//{
		//	cout << m << endl;
		//	m--;
		//} while (m > -10);
	//============================================================================

	//char reply{};
	//int count{};
	//double num{};
	//double totalnum{};
	//do
	//{
	//	cout << "Введите число : " << endl;
	//	cin >> num;
	//	totalnum += num;
	//	//totalnum = totalnum + num;
	//	++count;
	//	cout << "Завершить работу? (да-> Y/ нет -> N)" << endl;
	//	cin >> reply;
	//
	//} while (reply!='y'&&reply!='Y');
	//cout << " Среднее значение введенных чисел : " << (totalnum / count) << endl;


	//for (инициализатор; условие; итерация)
	//{
	//	тело цыкла;
	//}

	/*for (int i = 1; i < 10;i++)
	{
		cout << i << " * " << i << " = " << i * i << endl;
	}
	int sum{};
	for (int i = 1; i < 9; sum += i++);
	cout << "Sum = " << sum << endl;


	for (int  i = 1,j =5; i<6 && j<10; i++, j++)
	{
		cout << i << " * "<<j <<  " = " << i * j << endl;
	}*/

//for (int i = 1; i < 10; i++)
//{
//	cout << i << "\t|";
//	for (int j = 1; j <10; j++)
//	{
//		
//		cout << i * j << "\t";
//	}
//	cout << "\n\n";
//}

int result{};
for (int i = 1; i <10; i++)
{
	result += i;
	cout << result << endl;
	if (result > 20) break;
}
cout << "==================================" << endl;
int result1{};
for (int i = 1; i < 10; i++)
{
	cout << "[ " << i << " ]  \t";
	if (i % 2 != 0)continue;
	//result1 += i;
	cout << i <<endl;
}



	
}


