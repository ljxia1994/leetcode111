////�������е��ƶ�ƽ��ֵ
////����һ��������������һ�����ڴ�С�����ݸû������ڵĴ�С�������������������ƶ�ƽ��ֵ
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//class  MovingAverage 
//{
//private:
//	queue<int> q;
//	int size;
//	double sum;
//
//public:
//	//��ʼ��
//	MovingAverage(int size)
//	{
//		this->size = size;
//		sum = 0;
//	}
//	//���㾭�����������ֵ
//	double next(int val)
//	{
//		if (q.size() >= size)
//		{
//			sum -= q.front();
//			q.pop();
//		}
//		q.push(val);
//		sum += val;
//		return sum / q.size();
//	}
//
//};
//
//int main()
//{
//	MovingAverage m = MovingAverage(3);
//	cout << m.next(1) << endl;
//	cout << m.next(10) << endl;
//	cout << m.next(3) << endl;
//	cout << m.next(5) << endl;
//	return 0;
//}