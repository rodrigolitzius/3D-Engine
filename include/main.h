#ifndef TDE_MAIN
#define TDE_MAIN

#include <glad.h>
#include <stdbool.h>

#define WINDOW_WIDTH 700
#define WINDOW_HEIGHT 700

#define OPGL_MAJOR_VER 3
#define OPGL_MINOR_VER 3

struct VaoData {
    GLuint vao; unsigned int vertex_count; char name[128]; bool has_texture;
};

#endif