#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main() {
    // Using a wide character and wprintf
    wchar_t omega = L'\u0905';
    for (int i = 0; i < 1; i++)
    {
        wprintf(L"The Hindi letter : %lc\n", omega);
        omega++;   
    }
    
    
    
    return 0;
}
