////��ȫƽ����
////���������� n���ҵ����ɸ���ȫƽ���������� 1, 4, 9, 16, ...��ʹ�����ǵĺ͵��� n������Ҫ����ɺ͵���ȫƽ�����ĸ������١�
//#include<iostream>
//#include<queue>
//
//using namespace std;
//
//int numSquares(int n) {
//    if (n <= 0) {   	// �������ֵ С�� 0 ���ء�
//        return 0;
//    }
//    int ans = 0;  	// ��¼����
//    queue<int> Q;   // �������
//    Q.push(n);    	// ��Ŀ����������н���������
//    while (!Q.empty()) {  		// ֻҪ���в�Ϊ�գ���һֱ����
//        int Qsize = Q.size();   	// �鿴���д�С
//        for (int i = 0; i < Qsize; i++) {   // ���б���
//            float temp = Q.front();     	// temp�Ƕ��еĵ�һ��Ԫ��
//            Q.pop();            			// �Ƴ���һ��Ԫ��
//            for (int i = sqrt(temp); i > 0; i--) {  // ѭ�������һ��Ԫ�أ��жϴӴ�С�ĸ�������ƽ��
//                if (temp == i * i) {          	// �����ȣ������
//                    ans++;
//                    return ans;           		// ������һ������
//                }
//                else {                		// ��������
//                    Q.push(temp - i * i);         	// ȥ��һ����ȫƽ�������ֵ������л��ܡ�
//                }
//            }
//        }
//        ans++;
//    }
//    return 0;
//};
//
//int main()
//{
//    int ans = numSquares(13);
//    printf("%d\n",ans);
//	return 0;
//}