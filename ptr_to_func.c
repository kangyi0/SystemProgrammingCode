#include <stdio.h>

int main() {
    int (*func)();
    func = printf;
    (*func)("�Լ� �����͸� �����մϴ�.\n");
    return 0;
}
