#pragma once
#include <string>
#include <map>
#include <Windows.h>

// Wrapper class to handle keyboard layout
class LayoutMap
{
private:
    // Stores mappings for all the virtual key codes to the name of the key
    std::map<DWORD, std::wstring> keyboardLayoutMap;
    HKL previousLayout = 0;

public:
    // Update Keyboard layout according to input locale identifier
    void UpdateLayout();

    LayoutMap()
    {
        UpdateLayout();
    }

    // Function to return the unicode string name of the key
    std::wstring GetKeyName(DWORD key);
};
