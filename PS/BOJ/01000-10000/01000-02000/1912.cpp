#include <iostream>
#include <vector>


using namespace std;

int crossing_sum(const vector<int>& v, int low, int mid, int high){
    int lsum = v[mid];
    int sum = v[mid];
    for(int i=mid-1; i>=low; i--){
        sum += v[i];
        if(sum > lsum){
            lsum = sum;
        }
    }

    int rsum = v[mid+1];
    sum = v[mid+1];
    for(int i=mid+2; i<=high; i++){
        sum += v[i];
        if(sum > rsum){
            rsum = sum;
        }
    }

    return lsum + rsum;
}

int mcss3(const vector<int>& v, int low, int high){
    if(low >= high){
        return v[low];
    }
    int mid = (low + high) / 2;
    int left_sum = mcss3(v, low, mid);
    int right_sum = mcss3(v, mid+1, high);
    int two_sided_sum = crossing_sum(v, low, mid, high);
    return max(max(left_sum, right_sum), two_sided_sum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;
    vector<int> v(N);

    for(int i=0; i<N; i++){
        cin >> v[i];
    }

    cout << mcss3(v, 0, N-1);
    return 0;
}