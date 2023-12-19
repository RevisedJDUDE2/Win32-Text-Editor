#include <windows.h>

namespace Editor {
  typedef struct {
    bool insert;
    bool visual;
    bool command;
  } Input_Mode;
  class Gui {
    public:
      void Init();
  };
};
