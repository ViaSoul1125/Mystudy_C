
#include <stdio.h>
// 1. 定义回调函数类型（用typedef简化函数指针声明，提高代码可读性）
// 该回调函数接收一个int类型参数，返回一个int类型结果
typedef int (*CallbackFunc)(int);
// 2. 实现具体的回调函数实例1：求整数的平方
int squareCallback(int num) {
    return num * num;
}
// 3. 实现具体的回调函数实例2：求整数的立方
int cubeCallback(int num) {
    return num * num * num;
}
// 4. 定义"宿主函数"（调用回调函数的函数）
// 该函数接收待处理的数据和回调函数指针，内部调用回调函数完成具体逻辑
int processData(int data, CallbackFunc callback) {
    // 安全校验：避免传入空的回调函数指针导致程序崩溃
    if (callback == NULL) {
        printf("ERROR:callbackpoint is NULL\n");
        return -1;
    }
    // 调用回调函数（核心：通过函数指针间接调用具体函数）
    return callback(data);
}
// 主函数：演示回调函数的使用
int main() {
    int num = 5;

    // 场景1：传递平方回调函数，处理数据
    int squareResult = processData(num, squareCallback);
    printf("%d squareResult: %d\n", num, squareResult);

    // 场景2：传递立方回调函数，处理数据
    int cubeResult = processData(num, cubeCallback);
    printf("%d cubeResult: %d\n", num, cubeResult);

    // 场景3：传递空指针，测试安全校验
    processData(num, NULL);

    return 0;
}
