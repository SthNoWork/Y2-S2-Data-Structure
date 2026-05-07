#include "ex3.h"

int main() {
    ListStudent* stu = createEmptyList();

    Student s1 = {"p202400", "Vanheng", 2007};
    Student s2 = {"p202400", "Caro", 2007};
    Student s3 = {"p202400", "Kimter", 2007};
    Student s4 = {"p202400", "Both", 2007};
    Student s5 = {"p202400", "Vattey", 2007};

    add(stu, s1);
    add(stu, s2);
    add(stu, s3);
    add(stu, s4);
    add(stu, s5);

    return 0;
}