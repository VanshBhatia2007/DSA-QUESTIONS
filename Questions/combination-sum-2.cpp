#include <iostream>
#include <vector>
#include <set>
using namespace std;
//fix the errors
    

    void getcombinations(vector<int>& arr,int idx ,int tar, vector<vector<int>>& ans,vector<int>& combi,set<vector<int>>& s){
        //base case
        if(idx == arr.size() || tar < 0){
            return;
        }
        if(tar == 0){
            if(s.find(combi)==s.end()){
                ans.push_back({combi});
                s.insert(combi);
            }
            return;

        }

        combi.push_back(arr[idx]);
        //include
        getcombinations(arr,idx+1,tar-arr[idx],ans,combi,s);
        //multiple
        // getcombinations(arr,idx,tar-arr[idx],ans,combi,s);
        //backtrack
        combi.pop_back();
        //exclude
        getcombinations(arr,idx+1,tar,ans,combi,s);

}
    

int main() {
        vector<int> arr = {10,1,2,7,6,1,5};
        int tar = 8;
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> combi;
        getcombinations(arr,0,tar,ans,combi,s);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;
}