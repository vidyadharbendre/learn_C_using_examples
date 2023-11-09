#include <stdio.h>
#include <locale.h>
#include <wchar.h>

int main() {
    setlocale(LC_CTYPE, "en_US.UTF-8"); // Set the locale to UTF-8

    // Unicode representation of "नमस्कार" (Namaskara in Hindi)
    wchar_t hindiText[] = L"नमस्कार";
    wprintf(L"Multilingual Text: %ls\n", hindiText);
    // Unicode representation of "ನಮಸ್ಕಾರ" (Namaskara in Kannada)
    wchar_t kannadaText[] = L"ನಮಸ್ಕಾರ";
    wprintf(L"Multilingual Text: %ls\n", kannadaText);

    return 0;
}