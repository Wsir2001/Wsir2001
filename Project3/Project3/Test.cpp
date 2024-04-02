#define _CRT_SECURE_NO_WARNINGS

//#include <iostream>
//
//
//
//int main()
//{
//	std::cout << "hello,world!" << std::endl;
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//void func(int a = 10)
//{
//	cout << "a = " << a << endl;
//}
//
//int main()
//{
//	//缺省参数
//	func();
//	func(20);
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
////全缺省
//void func(int a = 10,int b=20,int c=30)
//{
//	cout << "a = " << a;
//	cout << "b = " << b;
//	cout << "c = " << c << endl;
//}
//
//int main()
//{
//	//缺省参数
//	func();
//	func(20,23);
//	return 0;
//}


//#include <iostream>
//using namespace std;
////半缺省
//void func1(int a , int b , int c=90 )
//{
//	cout << "a = " << a;
//	cout << "b = " << b;
//	cout << "c = " << c << endl;
//}
//
//void func2(int a, int b=20, int c = 90)
//{
//	cout << "a = " << a;
//	cout << "b = " << b;
//	cout << "c = " << c << endl;
//}
////半缺省参数必须从右往左依次来给出，不能间隔着给
//int main()
//{
//	//缺省参数
//	func2(0);
//	func1(20, 23);
//	return 0;
//}

//函数重载


//参数类型不同or 参数个数不同 or 参数类型顺序不同
//#include <iostream>
//
//using namespace std;
//
//int add(int a, int b)
//{
//	return a + b;
//}
//int add(int a, int b,int c)
//{
//	return a + b+c;
//}
//
//double add(double a, double b)
//{
//	return a + b;
//}
//
//double add(long a, double b)
//{
//	return a + b;
//}
//
//double add(long a)
//{
//	return a ;
//}
//
//
//int main()
//{
//	cout << add(1, 2) << endl;
//	cout << add(1.1, 2.3) << endl;
//	cout << add(100L, 2.9) << endl;
//	cout << add(1, 2,3) << endl;
//	return 0;
//}


//引用
//引用不是新定义一个变量，而是给已存在变量取了一个别名，
//编译器不会为引用变量开辟内存空间，它和它引用的变量共用同一块内存空间

/*
1. 引用在定义时必须初始化
2. 一个变量可以有多个引用
3. 引用一旦引用一个实体，再不能引用其他实体

*/

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int a = 10;
//	int& b = a;//必须赋值
//	const int& rc = b;
//
//	int a = 20;
//	double da = a;
//	 const double& rda = a;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//void swap_cpp(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10, b = 20;
//
//	swap_cpp(a, b);
//	cout << "a= " << a << "  b= " << b;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//
//int& fun1(int b,int c)
//{
//	static int a = b+c;
//	return a;
//}
//int main()
//{
//	int ret = fun1(1, 2);
//
//	cout << ret << endl;
//	fun1(3, 2);
//	cout << ret << endl;
//	return 0;
//}
//
//#include <time.h>
//#include <iostream>
//using namespace std;
//
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//
//inline int add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//
//	cout << add(2, 3);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	void Init(string name, int age, int score)
//	{
//		_name = name;
//		_age = age;
//		_score = score;
//
//	}
//	void print()
//	{
//		cout << "姓名： " << _name << " 年龄： " << _age << " 成绩： " << _score;
//	}
//
//private :
//	string _name;
//	int _age;
//	int _score;
//};
//
//int main()
//{
//	Person p1;
//	p1.Init("赵志文", 20, 90);
//	p1.print();
//	cout<<sizeof(Person)<<endl;
//	return 0;
//}

//
//#include <iostream>
//using namespace std;
//
//class Date 
//{
//
//public:
//	void Init(int year, int month, int day);
//
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Date::Init(int year, int month, int day)
//{
//	_year = year;
//	_month = month;
//	_day = day;
//}
//int main()
//{
//	cout << sizeof(Date) << endl;
//
//	Date d1;
//	d1.Init(2024, 3, 26);
//	d1.print();
//	return 0;
//}

// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行

//#include <iostream>
//using namespace std;

//class A
//{
//public:
//	void Print()
//	{
//		cout << "Print()" << endl;
//	}
//private:
//	int _a;
//};
//
//
//int main()
//{
//	A* p = nullptr;
//	p->Print();
//	return 0;
//}

//
// 1.下面程序编译运行结果是？ A、编译报错 B、运行崩溃 C、正常运行
//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A* p = nullptr;
//	p->PrintA();
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//
//private:
//	int _year;
//	int _month;
//	int _day;
//
//};
//
//
//int main()
//{
//	 
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class zoos {
//public :
//	zoos(int n=10)
//	{
//		_a = (int*)malloc(sizeof(int) * n);
//		size = 0;
//		capacity = n;
//		cout << "zoos: " << this << endl;
//	}
//
//	~zoos()
//	{
//		cout << "~zoos: " << this << endl;
//		if(_a)
//		{
//			free(_a);
//			_a = nullptr;
//			size = capacity = 0;
//		}
//		
//	}
//	void print()
//	{
//		cout << "zoos_print " << size << "  " << capacity << endl;
//	}
//
//private :
//	int* _a;
//	int size;
//	int capacity;
//};
//int main()
//{
//	zoos z1(20);
//	zoos z2;
//	z1.print();
//	z2.print();
//	
//
//	return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//class Date {
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//
//
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day<<endl;
//	}
//private :
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2024, 3, 28);
//	d1.print();
//
//	Date d2(d1);
//	d2.print();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date {
//public:
//
//	int GetMonthDay(int year, int month)
//	{
//		static int MonthDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (year >= 0 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)&&month ==2)
//		{
//			return 29;
//		}
//		return MonthDay[month];
//	}
//
//
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		if (year > 0 && month >= 1 && month <= 12 && day >= 1 && day <= GetMonthDay(year,month))
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//
//		}
//		else
//		{
//			cout << "输入的日期错误" << endl;
//		}
//	}
//
//
//	Date(const Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	bool operator==(const Date& d)
//	{
//		return _year == d._year &&
//			_month == d._month &&
//			_day == d._day;
//	}
//
//	bool operator<(const Date& d)
//	{
//		if (_year < d._year)
//			return true;
//		else
//			if (_year == d._year && _month < d._month)
//				return true;
//			else
//				if (_year == d._year && _month == d._month && _day < d._day)
//					return true;
//
//		return false;
//	}
//	bool operator>=(Date& d)
//	{
//		return !(*this < d);
//	}
//	bool operator<=(Date& d)
//	{
//		return *this == d || *this < d;
//	}
//	bool operator> (Date& d)
//	{
//		return !(*this == d || *this < d);
//	}
//	bool operator!= (Date& d)
//	{
//		return !(*this == d);
//	}
//	Date operator+(int n)
//	{
//		Date ret = *this;
//
//		ret._day += n;
//		while (ret._day > GetMonthDay(ret._year, ret._month))
//		{
//			ret._day -= GetMonthDay(ret._year, ret._month);
//			ret._month++;
//			if (ret._month == 13)
//			{
//				ret._year++;
//				ret._month = 1;
//			}
//		}
//		return ret;
//	}
//
//	Date& operator+=(int n)
//	{
//		this->_day += n;
//		while (this->_day > GetMonthDay(this->_year, this->_month))
//		{
//			this->_day -= GetMonthDay(this->_year, this->_month);
//			this->_month++;
//			if (this->_month == 13)
//			{
//				this->_year++;
//				this->_month = 1;
//			}
//		}
//		return *this;
//	}
//	Date operator++(int n)
//	{
//		Date temp(*this);
//		 *this += 1;
//		 return temp;
//	}
//	Date operator++()
//	{
//		return *this += 1;
//	}
//	//int  operator-(Date& d)
//	//{
//	//	int count = 0;
//	//	Date ret = d;
//	//	Date self = *this;
//	//	if (self >= ret)
//	//	{
//	//		
//	//			if (self._year == d._year && self._month == d._month)
//	//			{
//	//				return self._day - d._day;
//	//			}
//	//			else
//	//			{
//	//				count = self._day;
//	//				self._month--;
//	//				while (self._month != d._month&&_year!=d._year)
//	//				{
//	//					count += GetMonthDay(self._year, self._month);
//	//					self._month--;
//	//					if (self._month == 0)
//	//					{
//	//						self._year--;
//	//						self._month = 12;
//	//					}
//	//				}
//	//				count += (GetMonthDay(d._year, d._month) - d._day);
//	//				return count;
//	//			}
//	//	}
//
//	//}
//
//	Date& operator-=(int day)
//	{
//		_day -= day;
//		while (_day <= 0)
//		{
//			_month--;
//			if (_month == 0)
//			{
//				_year--;
//				_month = 12;
//			}
//			_day -= GetMonthDay(_year, _month);
//		}
//		return *this;
//		
//	}
//
//	void print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	/*Date d1(2024, 3, 28);
//	d1.print();
//
//	Date d2(2025,1,1);
//	d2.print();
//
//	Date d3 = d1 + 1000;
//	d3.print();
//
//	d1 += 1000;
//	d1.print();
//
//	d1 -= 10;
//	d1.print();*/
//
//	Date d1(2024, 4, 1);
//
//	Date d4 = d1++;
//	d4.print();
//	d1.print();
//
//	Date d5 = ++d1;
//	d5.print();
//	d1.print();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date {
//public:
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	Date(Date& d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//		cout << "Date(Date& d)" << endl;
//	}
//
//	Date& operator= (Date& d)
//	{
//		if (this != &d)
//		{
//			_year = d._year;
//			_month = d._month;
//			_day = d._day;
//		}
//		return *this;
//	}
//private :
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 3, 29);
//	Date d2(d1);//拷贝构造
//	
//
//
//	Date d3;
//	d3 = d1;//operator= 赋值符号的重载
//
//
//	return 0;
//}

#include <iostream>
using namespace std;

class Stack {
public:
	Stack(int n = 10)
	{
		_a = (int*)malloc(sizeof(int) * n);
		_size = 0;
		_catapity = n;
	}
	Stack(Stack& s)
	{
		_a = s._a;
		_size = s._size;
		_catapity = s._catapity;
	}
	~Stack()
	{
		free(_a);
		_a = nullptr;
		_size = _catapity = 0;
	}

private :
	int* _a;
	int _size;
	int _catapity;
};
int main()
{
	Stack s1(10);


	Stack s2(s1);


	return 0;
}