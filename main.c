#include "parser/parser.h"
#include <stdio.h>

int main() {
    const char *test_str = "12345";
    int result = parse_to_int(test_str);
    printf("解析结果：%s -> %d\n", test_str, result);

    // （后续GDB测试用）故意写段错误代码：空指针访问
    char *null_ptr = NULL;
    *null_ptr = 'a';

    return 0;
}
