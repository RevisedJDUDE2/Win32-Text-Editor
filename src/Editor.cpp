#include <Editor.hpp>
#include <iostream>
#include <string>

Editor::Input_Mode uInpMode;

void Editor::Gui::Init() {
  MessageBoxA(nullptr, "Function Loaaded Successfuly!", "", MB_OK);
    while(true) {

    }
    if(GetAsyncKeyState(VkKeyScanA('i'))) {
      uInpMode.insert = true;
      uInpMode.visual = false;
      uInpMode.command = false;
      std::cout << "Insert Mode\n";
    }
};
