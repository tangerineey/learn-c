#include <stdio.h>
#include <math.h>

#define RECTANGLE 0
#define CIRCLE 1

struct point {
    int x, y;
};

struct rectangle {
    struct point upper_left, lower_right;
};

struct shape {
    int shape_kind; // Rectangle or Circle
    struct point center;
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
};

int compute_shape_area(struct shape s)
{
    int area;

    if (s.shape_kind == RECTANGLE) {
        area = s.u.rectangle.height * s.u.rectangle.width;
    } else if (s.shape_kind == CIRCLE) {
        area = 4 * M_PI * s.u.circle.radius * s.u.circle.radius;
    }

    return area;
}

struct shape move_shape(struct shape s, int x, int y)
{
    s.center.x += x;
    s.center.y += y;
    return s;
    /* struct shape moved_shape = s; */
    /* moved_shape.center.x += x; */
    /* moved_shape.center.y += y; */
    /* return moved_shape; */
}

struct shape scale_shape(struct shape s, double scale_factor)
{
    if (s.shape_kind == RECTANGLE) {
        s.u.rectangle.width *= scale_factor;
        s.u.rectangle.height *= scale_factor;
    } else if (s.shape_kind == CIRCLE) {
        s.u.circle.radius *= scale_factor;
    }

    return s;
}

int main(void)
{
    struct shape s;

    return 0;
}
