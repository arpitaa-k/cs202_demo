#include<stdio.h>
void copyMemory(char* dest, const char* src, int n){
    for(int i =0;i<n;i++){
        dest[i] = src[i];
    }
}
int main(){
    char buffer[256];
    const char* msg = "Hello World";

    int numBytes = sizeof(msg);
    copyMemory(buffer, msg, numBytes);
    printf("Copied message: %s\n", buffer);
    return 0;
}