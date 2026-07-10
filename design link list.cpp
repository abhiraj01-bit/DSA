/*class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int x) {
            val = x;
            next = NULL;
        }
    };

    Node* head;

public:
    MyLinkedList() {
        head = NULL;
    }

    int get(int index) {
        Node* temp = head;
        int cnt = 0;

        while (temp) {
            if (cnt == index)
                return temp->val;
            temp = temp->next;
            cnt++;
        }
        return -1;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
    }

    void addAtTail(int val) {
        Node* node = new Node(val);

        if (head == NULL) {
            head = node;
            return;
        }

        Node* temp = head;
        while (temp->next)
            temp = temp->next;

        temp->next = node;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        int cnt = 0;

        while (temp && cnt < index - 1) {
            temp = temp->next;
            cnt++;
        }

        if (!temp)
            return;

        Node* node = new Node(val);
        node->next = temp->next;
        temp->next = node;
    }

    void deleteAtIndex(int index) {
        if (!head)
            return;

        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }

        Node* temp = head;
        int cnt = 0;

        while (temp && cnt < index - 1) {
            temp = temp->next;
            cnt++;
        }

        if (!temp || !temp->next)
            return;

        Node* del = temp->next;
        temp->next = del->next;
        delete del;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */