#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int sum(int a, int b){
    return a + b;
}

int subtract(int a, int b){
    if(a < 0){
        return 0;
    }

    return a - b;
}

#endif