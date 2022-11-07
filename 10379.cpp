#include <iostream>
#include <vector>
#include <string>
#include <queue>

struct node {
    char serial;
    int left;
    int right;
};

class binaryTree {
public:
    void addNode(node node) {
        nodes.push_back(node);
    }

    std::string preOrder(int n = 1) {
        if (n == 0) {
            return "";
        }
        return nodes.at(n - 1).serial + preOrder(nodes.at(n - 1).left) + preOrder(nodes.at(n - 1).right);
    }

    std::string inOrder(int n = 1) {
        if (n == 0) {
            return "";
        }
        return inOrder(nodes.at(n - 1).left) + nodes.at(n - 1).serial + inOrder(nodes.at(n - 1).right);
    }

    std::string postOrder(int n = 1) {
        if (n == 0) {
            return "";
        }
        return postOrder(nodes.at(n - 1).left) + postOrder(nodes.at(n - 1).right) + nodes.at(n - 1).serial;
    }

    std::string bfs(int n = 1) {
        std::string output;
        std::queue<node> queue;
        queue.push(nodes.at(n - 1));
        while (!queue.empty()) {
            node current = queue.front();
            queue.pop();
            output += current.serial;
            if (current.left != 0) { queue.push(nodes.at(current.left - 1)); }
            if (current.right != 0) { queue.push(nodes.at(current.right - 1)); }
        }
        return output;
    }

private:
    std::vector<node> nodes;
};

int main() {
    int n;
    std::cin >> n;
    binaryTree binaryTree;
    for (int i = 0; i < n; ++i) {
        node node{};
        std::cin >> node.serial >> node.left >> node.right;
        binaryTree.addNode(node);
    }
    std::cout << binaryTree.preOrder() << "\n" << binaryTree.inOrder() << "\n" << binaryTree.postOrder() << "\n"
              << binaryTree.bfs();
    return 0;
}
