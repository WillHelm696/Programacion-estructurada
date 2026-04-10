#include "raylib.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Raylib - Arcos y Círculos");

    int angle = 0;
    SetTargetFPS(60);

    while (!WindowShouldClose() && angle <= 360) {
        BeginDrawing();
            ClearBackground(BLACK);

            // Dibuja los arcos y círculos
            for (int r = 50; r <= 150; r += 50) {
                float startAngle = angle;
                float endAngle = angle + 2;
                Vector2 center = {screenWidth/2.0f, screenHeight/2.0f};
                float radius = r;

                // Dibuja el arco (simulado con líneas)
                float x1 = center.x + radius * cosf(DEG2RAD * startAngle);
                float y1 = center.y + radius * sinf(DEG2RAD * startAngle);
                float x2 = center.x + radius * cosf(DEG2RAD * endAngle);
                float y2 = center.y + radius * sinf(DEG2RAD * endAngle);
                DrawLineEx(center, {x1, y1}, 2, WHITE);
                DrawLineEx(center, {x2, y2}, 2, WHITE);

                // Dibuja el círculo en el punto final del arco
                Color color;
                if (r == 50) color = YELLOW;
                else if (r == 100) color = RED;
                else color = GREEN;
                DrawCircle(x2, y2, 25, color);
            }

            angle += 5;
            EndDrawing();
        }

    CloseWindow();
    return 0;
}