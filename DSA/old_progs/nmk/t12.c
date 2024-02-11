#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");

    wchar_t star = 0x0900;
    for (int  i = 0; i < 97; i++)
    {
        wprintf(L"%lc ", star);    
        star++;
    }
}