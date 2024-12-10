#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> nums) {
    if (nums.size() < 2) return true;
    bool isDec = false, isInc = false;
    int removeCout = 0;

    vector<int> differences;

    for (int i = 1; i < nums.size(); i++) {
        int diff = nums[i] - nums[i - 1];
        differences.push_back(diff);
        if (abs(diff) < 1 || abs(diff) > 3) return false;

        if (diff > 0) isInc = true;
        else if (diff < 0) isDec = true;

        if (isInc && isDec) return false;
    }

    return true;
}

bool f1(vector<int> nums){
    if(f(nums)) return true;

    for(int i=0; i<nums.size(); i++){
        vector<int> temp = nums;
        temp.erase(temp.begin()+i);

        if(f(temp)) return true;

        temp.emplace(temp.begin()+i, nums[i]);
    }
    return false;
}

int main() {
    int ans = 0;
    for (int i = 0; i < 1000; i++) {
        vector<int> nums;
        string line;
        getline(cin, line); // Read the entire line of input

        stringstream ss(line); // Create a stringstream to process the line
        int x;
        while (ss >> x) { // Extract integers from the line
            nums.push_back(x);
        }

        if (f1(nums)) ans++;
    }

    cout << ans;
    return 0;
}
