//
// Created by zhu on 2025/10/23.
//

#include <stdio.h>

typedef struct {
    int status;
    void (*statusChange)();
}T_Device;

T_Device g_Device;

void addCallbackFunc(void (*pstatusChange)(int status)) {
    g_Device.statusChange=pstatusChange;
}

void run() {
    g_Device.status=10;
    if (g_Device.status==10) {
        if (g_Device.statusChange!=NULL) {
            g_Device.statusChange(g_Device.status);//实际上相当于调用callBack（10）;
        }
    }
}

void callBack(int status) {
    printf("callBack\n");
    printf("status = %d\n",status);
}

int main(void) {
    addCallbackFunc(callBack);  //将callBack传入结构体的void (*statusChange)();
    run();
}