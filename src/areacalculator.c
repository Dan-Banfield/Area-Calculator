#include <stdio.h>
#include <Windows.h>

void setconsolecolour(int colourCode)
{
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(consoleHandle, colourCode);
}

void setupconsole()
{
    SetConsoleTitle("Area Calculator");
    setconsolecolour(15);
    printf("Hello, world!");
    getchar();
}

int main()
{
    setupconsole();
    return 0;
}