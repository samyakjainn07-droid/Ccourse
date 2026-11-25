#include <stdio.h>

int globalVar = 10; // SCOPE: Global (entire file). EXTENT: Static (lasts for the entire program runtime).

void demoFunction() {
    int localVar = 5;         // SCOPE: Local (only inside demoFunction). EXTENT: Automatic (destroyed when function ends).
    static int staticVar = 1; // SCOPE: Local (only inside demoFunction). EXTENT: Static (survives between function calls).
    
    localVar++;
    staticVar++;
    
    printf("Local: %d, Static: %d\n", localVar, staticVar);
}

int main() {
    demoFunction(); // Prints: Local: 6, Static: 2
    demoFunction(); // Prints: Local: 6, Static: 3
    
    // printf("%d", localVar); // ERROR: localVar is out of scope here.
    return 0;
}