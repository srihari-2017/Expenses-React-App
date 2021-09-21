#include <bits/stdc++.h>
using namespace std;

class List
{

private:
    list<int> l;

public:
    void AddElement(int a)
    {
        l.push_back(a);
    }


    void PrintList()
    {
        
        for (auto v : l)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    void PrintList(list<int> &u)
    {
        for (auto v : u)
        {
            cout << v << " ";
        }
        cout << endl;
    }

    list<int> GetList()
    {
        return l;
    }

    void Reverse(){
        sort(l.rbegin(),l.rend());
    }
};

int main()
{
    List *v = new List();
    for (int i = 0; i < 10; i++)
    {
        v->AddElement(i + 1);
    }
    list<int> u = v->GetList();
    v->PrintList();
    v->Reverse();
    v->PrintList();
    v->PrintList(u);
    return 0;
}