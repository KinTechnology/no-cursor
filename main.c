/* https://unix.stackexchange.com/a/726059/119298 */
/* compile with -lX11 -lXfixes */
/* https://www.x.org/releases/current/doc/fixesproto/fixesproto.txt */
#include <X11/Xlib.h>
#include <X11/extensions/Xfixes.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    Display *display = XOpenDisplay(NULL);
    if(display==0)exit(1);
    int screen = DefaultScreen(display);
    Window root = RootWindow(display, screen);
    XFixesHideCursor(display, root);
    XSync(display, True);
    pause(); /* need to hold connection */
    return 0;
}
