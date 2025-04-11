#ifndef GUI_H
#define GUI_H

void create_gui();

typedef struct {
    float x, y, width, height;
    const char *label;
} Button;

char *file_list[MAX_FILES];
int file_count = 0;

void draw_button(Button *button);
int is_button_clicked(Button *button, double mouse_x, double mouse_y);

#endif // GUI_H
