////�Ƴ�Kλ�õ���Сֵ
//#include<vector>
//#include<string>
//#include <iostream>
//using namespace std;
//class Solution
//{
//public:
//    Solution() {}
//    ~Solution() {}
//    std::string removeKdigits(std::string num, int k)
//    {
//        std::vector<int> S;      //ʹ��vector����ջ(��Ϊvector���Ա���)
//        std::string result = "";    //�洢���ս�����ַ���
//        for (unsigned int i = 0; i < num.length(); i++)   //�����Ϊѭ��ɨ������num
//        {
//            int number = num[i] - '0';   //���ַ��͵�numת��Ϊ����ʹ��
//            while (S.size() != 0 && S[S.size() - 1] > number && k > 0)
//            {
//                S.pop_back();  //��ջ��Ϊ�գ�ջ��Ԫ�ش�����number����Ȼ����ɾ
//                k--;
//            }
//            if (number != 0 || S.size() != 0)    //ջ��Ϊ�ջ������ֲ�Ϊ0
//            //��ջΪ����numberΪ0ʱ�����ܽ���number����ջ�С�
//            {
//                S.push_back(number);
//            }
//        }
//        while (S.size() != 0 && k > 0)
//        {
//            S.pop_back();
//            k--;
//        }
//        for (unsigned i = 0; i < S.size(); i++)
//        {
//            result.append(1, '0' + S[i]);        //����ת�ַ�
//        }
//        if (result == "")
//        {
//            result = "0";
//        }
//        return result;
//    }
//};
//int main()
//{
//    Solution solve;
//    string s;
//        int k;
//    cin >> s >> k;
//    std::string result1 = solve.removeKdigits(s,k);
//    printf("%s\n", result1.c_str());
//    return 0;
//}
//
