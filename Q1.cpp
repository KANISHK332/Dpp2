void rotate(vector<vector<int> >&v)
{
    // Your code goes here
    int n= v.size();
    int m= v[0].size();
    
    for(int i=0;i<n;i++){
        reverse(v[i].begin(),v[i].end());
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(v[i][j],v[j][i]);
        }
    }
}
