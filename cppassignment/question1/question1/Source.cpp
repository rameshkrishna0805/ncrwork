#include<iostream>
using namespace std;
class time
{
	int hour;
	int min;
	int sec;
public:
    time(int h,int m,int s)
	{
		hour = h;
		min = m;
		sec = s;
	}
	time()
	{
		hour = 0;
		min = 0;
		sec = 0;
	}
	void add_Time(time t1, time t2)
	{
		hour = (t1.hour + t2.hour);
		min = t1.min + t2.min;
		sec = t1.sec + t2.sec;
		if (sec > 60)
		{
			sec = sec - 60;
			min++;
		}
		if (min > 60)
		{
			min = min - 60;
			hour++;
		}
	}
	void printtime()
	{
		cout << hour << ":" << min << ":" << sec << endl;
	}
};
int main()
{
	time t1(10, 30, 45);// , t2;
	t1.printtime();
	time t2(5, 45, 45);
	t2.printtime();
	time t3;
	t3.add_Time(t1, t2);
	t3.printtime();
	getchar();
	return 0;
}