////�������� BFS �������/�������
///*
//    ����һ���� '1'��½�أ��� '0'��ˮ����ɵĵĶ�ά���񣬼��㵺���������
//    һ������ˮ��Χ����������ͨ��ˮƽ�����ֱ���������ڵ�½�����Ӷ��ɵġ�
//    ����Լ���������ĸ��߾���ˮ��Χ��
//*/
//
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int numIslands(vector<vector<char> >& grid) {
//    if (grid.empty()) return 0;
//    int m = grid.size(), n = grid[0].size();
//    if (m == 0 || n == 0) return 0;
//    //�����������·���
//    int dx[] = { -1,0,1,0 };
//    int dy[] = { 0,-1,0,1 };
//    int x = 0, y = 0, xx = 0, yy = 0;
//    queue<int> q;
//    int count = 0;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (grid[i][j] == '1')
//            {
//                grid[i][j] = '0';
//                q.push(i);
//                q.push(j);
//                while (!q.empty())
//                {
//                    x = q.front();
//                    q.pop();
//                    y = q.front();
//                    q.pop();
//                    for (int k = 0; k < 4; k++)
//                    {
//                        xx = x + dx[k];
//                        yy = y + dy[k];
//                        if (xx < 0 || xx >= m || yy < 0 || yy >= n)
//                            continue;
//                        if (grid[xx][yy] == '1')
//                        {
//                            grid[xx][yy] = '0';
//                            q.push(xx);
//                            q.push(yy);
//                        }
//                    }
//                }
//                count++;
//            }
//        }
//    }
//    return count;
//}
//
//int main()
//{
//    vector<vector<char> > data;
//    int cur;
//    char a;
//    // ���ö�ά���е�����
//    for (int i = 0; i < 4; i++)
//    {
//        data.push_back(vector<char>());
//    }
//    // ��ά��������
//    for (int i = 0; i < data.size(); i++)
//    {
//        for (int j = 0; j < 5; j++) {
//            cin >> a;
//            data[i].push_back(a);
//        }
//    }
//    /* �������
//    for(int i=0;i<data.size();i++)
//    {
//        for(int j=0;j<5;j++)
//        {
//            cout<<data[i][j]<<" ";
//        }
//        cout<<endl;
//    }*/
//    cur = numIslands(data);
//    cout << cur << endl;
//    return 0;
//}