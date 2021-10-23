#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Vector
{
private:
    vector<int> v;

public:
    void AddElement(int a)
    {
        v.push_back(a);
    }
    
    int GetFront()
    {
        return v.front();
    }
    
    void PrintVector()
    {
        int sz = v.size();
        for (int i = 0; i < sz; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }

    void PrintVector(vector<int> &u)
    {
        int sz = u.size();
        for (int i = 0; i < sz; i++)
        {
            cout << u[i] << " ";
        }
        cout << endl;
    }

    vector<int> GetVector(){
        return v;
    }
};

int main()
{
    Vector *v = new Vector();
    for (int i = 0; i < 10; i++)
    {
        v->AddElement(i + 1);
    }
    vector<int> u = v->GetVector();
    v->GetFront();
    v->PrintVector();
    v->PrintVector(u);
    return 0;
}