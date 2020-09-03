////ǽ���� BFS�����������
///*�㱻����һ�� m �� n �Ķ�ά�������������������ֿ��ܵĳ�ʼ��ֵ��
//- 1 ��ʾǽ�����ϰ���
//0 ��ʾһ����
//INF ���ޱ�ʾһ���յķ��䡣Ȼ�������� 231 - 1 = 2147483647 ���� INF���������Ϊͨ���ŵľ�������С�� 2147483647 �ġ�
//��Ҫ��ÿ���շ���λ�����ϸ÷��䵽 ��� �ŵľ��룬����޷������ţ����� INF ���ɡ�*/
////�����е���ͬʱ����BFS�������ǣ�ÿ��λ��������һ��
//
//#include<iostream>
//#include<vector>
//#include<queue>
//
//using namespace std;
//
//void wallsAndGates(vector<vector<int>>& rooms) 
//{
//	if (rooms.empty()) return;
//	int m = rooms.size(), n = rooms[0].size();
//	if (m < 1 || n < 1) return;
//	//������������
//	vector<vector<int>> dir{ {-1,0},{0,-1},{1,0},{0,1} };
//	vector<vector<bool>> visited(m,vector<bool>(n,false));
//	queue<vector<int>> q;
//	int size,x,y,xx,yy,INF=INT_MAX,steps=0;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (rooms[i][j] == 0)
//			{
//				q.push({i,j});
//				visited[i][j] = true;
//			}
//		}
//	}
//	while (!q.empty())
//	{
//		size = q.size();
//		while (size--)
//		{
//			x = q.front()[0];
//			y = q.front()[1];
//			q.pop();
//			if (rooms[x][y] == INF)
//				rooms[x][y] = steps;
//			for (int k = 0; k < 4; k++)
//			{
//				xx = x + dir[k][0];
//				yy = y + dir[k][1];
//				if (xx >= 0 && xx < m && yy>=0 && yy < n && !visited[xx][yy] && rooms[xx][yy]!=(-1))
//				{
//					visited[xx][yy] = true;
//					q.push({ xx,yy });
//				}
//			}
//		}
//		steps++;
//	}
//}
//
//void printvector2d(vector<vector<int>> vec)
//{
//	for (int i = 0; i < vec.size(); i++)
//	{
//		for (int j = 0; j < vec[i].size(); j++)
//		{
//			cout << vec[i][j] << "  ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int INF = INT_MAX;
//	vector<vector<int>> rooms({
//		{INF, -1 , 0 , INF},
//		{INF,INF ,INF, -1},
//		{INF, -1 ,INF ,-1},
//		{0 ,-1 ,INF ,INF} });
//	printvector2d(rooms);
//	wallsAndGates(rooms);
//	cout  << endl;
//	printvector2d(rooms);
//	return 0;
//}