vector<int> findUnion(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    vector<int> uni;

    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            if(uni.empty() || uni.back() != a[i])
                uni.push_back(a[i]);
            i++;
        } else {
            if(uni.empty() || uni.back() != b[j])
                uni.push_back(b[j]);
            j++;
        }
    }

    while(i < n) {
        if(uni.back() != a[i])
            uni.push_back(a[i]);
        i++;
    }

    while(j < m) {
        if(uni.back() != b[j])
            uni.push_back(b[j]);
        j++;
    }

    return uni;
}



//revise later times