////��¡ͼ dfs
////�������� ��ͨ ͼ��һ���ڵ�����ã����㷵�ظ�ͼ�� �������¡����
////ͼ�е�ÿ���ڵ㶼��������ֵ val��int�� �����ھӵ��б�list[Node]����
//#include<iostream>
//#include<vector>
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
//        if (node == nullptr)
//        {
//            return node;
//        }
//        if (visited.find(node) != visited.end())
//        {
//            return visited[node];
//        }
//        Node* cloneNode = new Node(node->val);
//        visited[node] = cloneNode;
//
//        for (Node* neighbor : node->neighbors)
//        {
//            cloneNode->neighbors.push_back(cloneGraph(neighbor));
//        }
//        return cloneNode;
//    }
//
//    Node* visited2[110];
//    Node* cloneGraph2(Node* node) {
//        if (node == nullptr)
//        {
//            return node;
//        }
//        if (visited2[node->val])
//        {
//            return visited2[node->val];
//        }
//        Node* cloneNode = new Node(node->val);
//        visited2[node->val] = cloneNode;
//
//        for (Node* neighbor : node->neighbors)
//        {
//            cloneNode->neighbors.push_back(cloneGraph2(neighbor));
//        }
//        return cloneNode;
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