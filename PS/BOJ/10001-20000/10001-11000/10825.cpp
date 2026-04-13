#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

struct student{
    string name;
    int korean;
    int english;
    int math;
};

bool compare(const student& st1, const student& st2){
    if(st1.korean != st2.korean){
        return st1.korean > st2.korean;
    }
    else if(st1.english != st2.english){
        return st1.english < st2.english;
    }
    else if(st1.math != st2.math){
        return st1.math > st2.math;
    }
    else{
        return st1.name < st2.name;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    vector<student> v;
    cin >> N;

    for(int i=0; i<N; i++){
        student st;
        cin >> st.name >> st.korean >> st.english >> st.math;
        v.push_back(st);
    }

    sort(v.begin(), v.end(), compare);
    
    for(int i=0; i<N; i++){
        cout << v[i].name << "\n";
    }

    return 0;
}