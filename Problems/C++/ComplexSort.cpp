#include <iostream>
#include <list>
#include <sstream>
#include <algorithm>
using namespace std;

class Pair
{

    string convertToString(int number)
    {
        string returnAsNumber = "";
        stringstream ss;
        ss << number;
        ss >> returnAsNumber;
        return returnAsNumber;
    }

public:
    int a;
    int b;
    Pair(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    string GetValues()
    {
        string returnValue;
        returnValue = convertToString(a) + "\t" + convertToString(b);
        return returnValue;
    }
};

class DisplayPair
{
public:
    static void print(list<Pair> &pairs)
    {
        for (list<Pair>::iterator it = pairs.begin(); it != pairs.end(); it++)
        {
            cout << it->GetValues() << endl;
        }
    }

};

class PairCompare
{
public:
    bool operator()(const Pair &a, const Pair &b)
    {
        return a.b < b.b;
    }
};

int main()
{
    list<Pair> pairs;
    for (int i = 0; i < 10; i += 2)
    {
        int a = i + 1;
        int b = 10 - (i + 2);
        Pair *p = new Pair(a, b);
        pairs.push_back(*p);
    }
    PairCompare comp;
    DisplayPair::print(pairs);
    pairs.sort(comp);
    DisplayPair::print(pairs);
    return 0;
}