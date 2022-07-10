#ifndef SCRIPTING_HPP
#define SCRIPTING_HPP
#include <vector>
struct Script {};
class ScripsManager {
public:
  std::vector<Script> scripts;
  static ScripsManager &GetInstance() {
    static ScripsManager instance;
    return instance;
  }
  void Load();
  void Reload();
  void Destroy();

private:
  ScripsManager(ScripsManager const &);
  ScripsManager() {}
  void operator=(ScripsManager const &);
};

#endif