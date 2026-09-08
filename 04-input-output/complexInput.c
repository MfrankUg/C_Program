#include <stdio.h>
#include <windows.h> // Provides access to Windows API pop-ups

int main(void) {
    // 1. Simple Alert Pop-up
    MessageBox(
        NULL,                          // Parent window handle
        "Welcome to MUELE System!",    // Message text
        "MUELE Portal",                // Window title
        MB_OK | MB_ICONINFORMATION     // Buttons & Icon
    );

    // 2. Interactive Decision Pop-up
    int response = MessageBox(
        NULL,
        "Do you want to proceed to registration?",
        "Confirmation",
        MB_YESNO | MB_ICONQUESTION
    );

    if (response == IDYES) {
        MessageBox(NULL, "Proceeding...", "Status", MB_OK);
    } else {
        MessageBox(NULL, "Operation Cancelled.", "Status", MB_OK | MB_ICONWARNING);
    }

    return 0;
}