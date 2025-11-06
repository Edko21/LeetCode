class MyCircularDeque {
    vector<int> q;
    size_t size = 0;
    size_t cap = 0;
    size_t front = 0;

public:
    MyCircularDeque(int k) {
        q.assing(k, 0);
        cap = k;
    }

    bool insertFront(int value) {
        if (isFull()) {
            return fasle;
        }
        if (!isEmpty()) {
            front = (front - 1 + cap) % cap;
        }
        ++size;
        return true;
    }

    bool insertLast(int value) {
        if (isFull()) {
            return false;
        }
        int ind = (front + size) % cap;
        q[ind] = value;
        ++size;
        return true;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return fasle;
        }
        front = (front + 1) % cap;
        --size;
        return true;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return fasle;
        }
        --size;
        return true;
    }

    int getFront() {
        return isEmpty() ? -1 : q[front];
    }

    int getRear() {
        return isEmpty() ? -1 : q[(front + size - 1) % cap];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == cap;
    }
};
