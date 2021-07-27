#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;

  	public:
  	int maximumDifference;
    Difference(vector<int> a){
        this->elements = a;
    }
    void computeDifference(){
        for(int i = 0; i < elements.size(); i++){
            for(int j = i + 1; j < elements.size(); j++){
                if(i == 0 && j == 1){
                    this->maximumDifference = abs(elements[i] - elements[j]);
                }
                if(this->maximumDifference < abs(elements[i] - elements[j])){
                    this->maximumDifference = abs(elements[i] - elements[j]);
                }
            }
        }
    }

};

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}
