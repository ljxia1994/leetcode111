////��¡ͼ bfs
////�������� ��ͨ ͼ��һ���ڵ�����ã����㷵�ظ�ͼ�� �������¡����
////ͼ�е�ÿ���ڵ㶼��������ֵ val��int�� �����ھӵ��б�list[Node]����
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<unordered_map>
//
//using namespace std;
//
//class Node {
//public:
//    int val;
//    vector<Node*> neighbors;
//
//    Node() {
//        val = 0;
//        neighbors = vector<Node*>();
//    }
//
//    Node(int _val) {
//        val = _val;
//        neighbors = vector<Node*>();
//    }
//
//    Node(int _val, vector<Node*> _neighbors) {
//        val = _val;
//        neighbors = _neighbors;
//    }
//};
//
//class Solution {
//public:
//    unordered_map<Node*, Node*> visited;
//    Node* cloneGraph(Node* node) {
//        queue<Node*> q;
//        if (node == nullptr) return node;
//        q.push(node);
//        unordered_map<Node*, Node*> visited;
//        visited[node] = new Node(node->val);
//        while (!q.empty())
//        {
//            int sz = q.size();
//            while (sz--)
//            {
//                Node* temp = q.front();
//                q.pop();
//                for (Node* neighbor : temp->neighbors)
//                {
//                    if (visited.find(neighbor) == visited.end())
//                    {
//                        visited[neighbor] = new Node(neighbor->val);
//                        q.push(neighbor);
//                    }
//                    visited[temp]->neighbors.push_back(visited[neighbor]);
//                }
//            }
//        }
//        return visited[node];
//    }
//};
//
//int main()
//{
//    vector<vector<Node>> node{{2,4 }, { 1,3 }, { 2,4 }, { 1,3 }};
//    Solution a;
//    //Node* newNode = a.cloneGraph(node);
//    return 0;
//}