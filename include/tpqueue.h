// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_


template<typename T, int size>
class TPQueue {
 private:
  T arr[size] = { 0 };
  int first, last;

 public:
TPQueue() : first(0), last(0) {}
void push(T temp) {
int i = last++;
while ((--i >= first) && (arr[i % size].prior < temp.prior)) {
  arr[(i + 1) % size] = arr[i % size];
}
  arr[(i + 1) % size] = temp;
}
T pop() {
  return arr[(first++) % size];
}
};
struct SYM {
  char ch;
  int prior;
};
#endif  // INCLUDE_TPQUEUE_H_
