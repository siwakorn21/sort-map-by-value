#include <iostream>
#include <map>
#include <set>

using namespace std;

class Comp {
    public:
        bool operator()(const pair<string,int>& elem1, const pair<string,int>& elem2) const
        {
            if (elem1.second != elem2.second) return elem1.second > elem2.second;

            return elem1.first > elem2.first;
        }
};

int main() {
    set<pair<string,int>, Comp> mySet = { {"one",1}, {"two",2}, {"three",3}, {"four", 4} };

    for (auto token : mySet) {
        cout << "Key: " << token.first << " Value: " << token.second << endl;
    }
}
