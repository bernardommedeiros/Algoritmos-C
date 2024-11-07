#include <stdio.h>

int main(){
    int mod (int a, int b);{
        if (int a < int b){
            return a;
        }
        else{
            return mod (a-b, b);
        }
    }
return 0;
}