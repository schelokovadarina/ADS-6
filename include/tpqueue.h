// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
private:
T arr[size] = { 0 };
int  first=0, last=0;

public: TPQueue() :first{ 0 }, last{ 0 }  {};
void push(T temp) {
int i = last;
while ((--i >= first) && (value.prior > a[i % size].prior)) {
a[(i + 1) % size] = a[i % size];
}
a[(i + 1) % size] = value;
last++;
}
};
T pop() {
return arr[(first++) % size];
}
};

struct SYM {
char ch;
int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
