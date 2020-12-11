#include "ui.h"

void clieui_pane(clieui_screendata* app) {
	realloc(app->panes, sizeof(clieui_screenpane) * ++app->panesc);
	app->panes[app->panesc] = (clieui_screenpane) malloc(sizeof(clieui_screenpane));
	clieui_screenpane* pane = &app->panes[app->panesc];

	if (app->panesc > 1) {
		pane.startx = app->panes[app->panesc - 1].width + 1;
	} else {
		pane.startx = 0;
		pane.starty = 0;
	}

	pane.window = newwin(pane->startx, pane->starty, pane->width, pane->height);
	wborder(pane->window, 0, 0, 0, 0, 0, 0, 0, 0);
	clieui_focus(app, pane)
}

void clieui_focus(clieui_screendata* app, clieui_screenpane* pane) {
	
}

void clieui_init() {
	initscr();
	start_color();

	clieui_screendata* app = malloc(sizeof(clieui_screendata));
	clieui_pane(&app);
}
