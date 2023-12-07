#include "../src/median.h"

bool test1() {
    Median m;
    m.InsertNumber(5);
    m.InsertNumber(46);
    m.InsertNumber(2); 
    m.InsertNumber(357);
    m.InsertNumber(45);
    m.InsertNumber(97);
    m.InsertNumber(56);
    m.InsertNumber(12);
    m.InsertNumber(123);
    m.InsertNumber(256);
    m.InsertNumber(77);
    return m.getMedian() == 56;
}

bool test2() {
    Median m;
    m.InsertNumber(-45);
    m.InsertNumber(6);
    m.InsertNumber(2); 
    m.InsertNumber(434);
    m.InsertNumber(26);
    m.InsertNumber(13);
    m.InsertNumber(77);
    return m.getMedian() == 13;
}

bool test3() {
    Median m;
    m.InsertNumber(2);
    m.InsertNumber(9);
    m.InsertNumber(3); 
    m.InsertNumber(99999);
    m.InsertNumber(4);
    m.InsertNumber(13);
    return m.getMedian() == 6;
}

bool test4() {
    Median m;
    return m.getMedian() == 0;
}

bool test5() {
    Median m;
    m.InsertNumber(5);
    return m.getMedian() == 5;
}

bool test6() {
    Median m;
    m.InsertNumber(23);
    m.InsertNumber(63);
    return m.getMedian() == 43;
}

bool test() {
    return test1() && test2() && test3() && test4() && test5() && test6();
}

int main() {
    return !test();
}
