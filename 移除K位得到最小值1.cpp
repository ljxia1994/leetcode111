////�Ƴ�Kλ�õ���Сֵ
//#include<iostream> 
//#include<cstring>
//#include<algorithm>
//
//using namespace std;
//int main()
//{
//	int k, num, flag = 0, red = 0;
//	int i = 0;
//	string str, tmp, str2;
//	string::iterator p;
//	cin >> str >> tmp;
//	k = tmp[0] - '0';
//	num = str.size();
//	str2 = str;
//	sort(str2.begin(), str2.end());//��str2������str1�Ƚϣ���һ���Ͱѱ�־λ��1��
//	if (str.compare(str2) == 0)
//	{
//		red = 1;
//	}
//	if (red == 1) //˵��strΪ�������У���ֱ��ɾ�����һλ��
//	{
//		while (k--)
//		{
//			str.pop_back();
//
//		}
//	}
//	else
//	{
//		while (k--)//�ҵ�����ɾ����һ�� num[i] > num[i + 1] �ĵ�iλ���֡��ظ�k��
//		{
//			i = 0;
//			while (i < num - 1 - flag)
//			{
//				if (str[i] > str[i + 1])
//				{
//					p = str.begin() + i;
//					str.erase(p);
//					flag++;
//					break;
//
//				}
//				i++;
//			}
//
//		}
//
//	}
//
//	i = str.size();
//	while (i--) //ע���ȥ�ַ���ͷ��0
//	{
//		if (str[0] != '0') break;
//		if (str[0] == '0')
//		{
//			str.erase(str.begin());
//		}
//	}
//	if (str.size() == 0)
//	{
//		cout << 0;
//		return 0;
//	}
//	cout << str;
//}
