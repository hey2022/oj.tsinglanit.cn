#include <iostream>
#include <algorithm>


class linkedList {
private:
    struct node {
        int number;
        node *next;
        node *last;
    };

    node *root;

    node *createNode() {
        node *headNode = new node;
        headNode->next = nullptr;
        headNode->last = nullptr;
        return headNode;
    }

public:
    linkedList() {
        node *headNode = new node;
        headNode->last = headNode;
        headNode->next = headNode;
        root = headNode;
    }

    void insertNode(int number) {
        node *newNode = createNode();
        newNode->number = number;
        root->next->last = newNode;
        newNode->next = root->next;
        root->next = newNode;
        newNode->last = root;
    }

    void deleteNode(node *headNode) {
        headNode->next->last = headNode->last;
        headNode->last->next = headNode->next;
        delete (headNode);
    }


    node *findValue(int number) {
        node *headNode = root->next;
        while (true) {
            if (headNode == root || headNode->number == number) {
                break;
            }
            headNode = headNode->next;
        }
        return headNode;
    }

    void printLinkedList() {
        node *headNode = root->next;
        while (true) {
            if (headNode == root) {
                break;
            }
            std::cout << headNode->number << ' ';
            headNode = headNode->next;
        }
    }
};


int main() {
    int n;
    std::cin >> n;
    linkedList linkedList{};
    for (int i = 0; i < n; ++i) {
        std::string command;
        int number;
        std::cin >> command >> number;
        if (command == "insert") {
            linkedList.insertNode(number);
        } else if (command == "delete") {
            linkedList.deleteNode(linkedList.findValue(number));
        } else {}
    }
    linkedList.printLinkedList();
}
