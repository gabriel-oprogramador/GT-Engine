#include "CoreMinimal.h"

int GTmain(int argc, char** argv){
    printf("Project Name:%s\n", STR(GAME_NAME));
    return 0;
}

#if defined(PLATFORM_WINDOWS) && defined(RELEASE_MODE)
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
  return GTmain(0, (char **)lpCmdLine);
}
#elif defined(PLATFORM_LINUX) || defined(DEBUG_MODE)
int main(int argc, char **argv) {
  return GTmain(argc, argv);
}
#endif // PLATFORM