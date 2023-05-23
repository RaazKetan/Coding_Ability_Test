#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    
    std::unordered_map<int, int> countMap;
    for (int i = 0; i < N; ++i) {
        ++countMap[A[i] % M];
    }
    
    int Q;
    cin >> Q;
    
    while (Q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int i, V;
            cin >> i >> V;
            
            --countMap[A[i - 1] % M];
            A[i - 1] = V;
            ++countMap[A[i - 1] % M];
        } else if (type == 2) {
            int X;
            cin >> X;
            
            cout << countMap[X] << std::endl;
        }
    }
    
    return 0;
}
