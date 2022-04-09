//
// Created by heyih on 12/19/2021.
//


//已知自然数1，2，...，N（1<=N<=100）依次入栈，请问序列C1，C2，...，CN是否为合法的出栈序列。
//
//Input
//
//        输入包含多组测试数据。
//
//每组测试数据的第一行为整数N（1<=N<=100），当N=0时，输入结束。
//
//第二行为N个正整数，以空格隔开，为出栈序列。
//
//Output
//
//        对于每组输入，输出结果为一行字符串。
//
//如给出的序列是合法的出栈序列，则输出Yes，否则输出No。

#include <iostream>

int main() {
    const int n_stack=100;
    int N=1;
    bool inorder= true;
    int stack[n_stack],array_in[n_stack],index[n_stack];
    for(int i=0; i<n_stack; i++){
        stack[i]=n_stack-i;
    }
    std::cin >> N;
    while(N>0){
        for (int i = 0; i < N; ++i) {
            std::cin >> array_in[i];
        }
        for (int i=0; i<N; i++){
            for (int j = 0; j < n_stack; j++) {
                if (array_in[i] == stack[j]) {
                    index[i] = j;
                }
            }
            if (i > 0) {
                if (index[i-1] > index[i]) {
                    inorder = false;
                    break;
                }
            }
        }
        if (inorder) {
            std::cout << "Y" << std::endl;
        } else {
            std::cout << "N" << std::endl;
        }
        std::cin >> N;
    }

    return 0;
}
