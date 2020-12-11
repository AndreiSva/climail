#ifndef __cliemail_ui
#define __cliemail_ui

#include <stdlib.h>
#include <ncurses.h>

#include "common.h"

typedef struct clieui_screendata {
    int panesc;
    clieui_screenpane* panes;
    clieui_screenpane* focused;
} clieui_screendata;

typedef struct clieui_screenpane {
    WINDOW* window;
    int startx, starty;
    int width, height;
} clieui_screenpane;

void clieui_init(); /* inits the cliemail GUI*/
void clieui_pane(clieui_screendata* app); /* creates a new pane */
void clieui_del_pane(clieui_screenpane* pane);
void clieui_focus(clieui_screendata* app, clieui_screenpane* pane);

#endif
