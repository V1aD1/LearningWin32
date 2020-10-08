#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow) 
{
    MessageBox(NULL, L"Hello World!", L"bell0tutorial", MB_ICONEXCLAMATION | MB_OK);

    return 0;
}