#include <raylib-cpp.hpp>
#include <cstring>
#include <complex>



int main() {
    int screenWidth = 1000;
    int screenHeight = 1000;
    int i;
    int n = 256;




    char fpsTxt[3] = "";

    int screenMiddle[2];

    double MouseX;
    double MouseY;

    double modifier[2] = {0, 0};

    std::complex<double> C(0, 0);
    std::complex<double> iter[n];
    std::complex<double> tempComplex(0, 0);




    raylib::Window w(screenWidth, screenHeight, "Deine Mom lol");
    Camera2D camera = { 0 };
    camera.target = (Vector2){ 0, 0};
    camera.offset = (Vector2){ static_cast<float>(GetScreenWidth() / 2), static_cast<float>(GetScreenHeight() / 2)};
    camera.rotation = 0;
    camera.zoom = 1;


    SetTargetFPS(60);

    while (!w.ShouldClose())
    {
        screenMiddle[0] = GetScreenWidth() / 2;
        screenMiddle[1] = GetScreenHeight() / 2;
        if(IsKeyDown(KEY_SPACE))
        {
            i = i;
        }

        BeginDrawing();

        BeginMode2D(camera);

        ClearBackground(RAYWHITE);
        // Mouse Circle
        DrawCircle(GetMouseX() - GetScreenWidth() / 2, GetMouseY() - GetScreenHeight() / 2, 5, BLACK);

        // Pow Circle
        MouseX = (GetMouseX() - (GetScreenWidth() / 2.0)) / 500.0;
        MouseY = (GetMouseY() - (GetScreenHeight() / 2.0)) / 500.0;


        C = {MouseX, MouseY};

        // Change Iter1 Points with Buttons
        if (IsKeyDown(KEY_LEFT))
        {
            modifier[0] -= 0.005;
        } else if (IsKeyDown(KEY_RIGHT)) {
            modifier[0] += 0.005;
        } else if (IsKeyDown(KEY_UP)) {
            modifier[1] -= 0.005;
        } else if (IsKeyDown(KEY_DOWN)) {
            modifier[1] += 0.005;
        }

        // Get the Complex points

        iter[0] = {modifier[0], modifier[1]};
        iter[0] = std::pow(iter[0], 2) + C;
        for(int j = 0; j < n; j++)
        {
            iter[j+1] = iter[j];
            iter[j+1] = std::pow(iter[j+1], 2) + C;
        }



        //Draw lines between all complex points
        for(int j = 0; j < n - 1; j++)
        {
            DrawLine(std::real(iter[j]) * 500.0, std::imag(iter[j]) * 500.0, std::real(iter[j+1]) * 500.0, std::imag(iter[j+1]) * 500.0, BLACK);
        }


        // Conversions from string to char bc DrawText() uses char :P
        strcpy(fpsTxt, std::to_string(GetFPS()).c_str());

        // Draw Modifier
        DrawCircle(modifier[0] * 500.0, modifier[1] * 500.0, 8, RED);

        // Draw the points
        for(int j = 0; j < n; j++)
        {
            DrawCircle(std::real(iter[j]) * 500.0, std::imag(iter[j]) * 500.0, 5, BLUE);
        }


        // Coordinate System
        DrawLine(0, 0 - GetScreenHeight() / 2, 0, GetScreenHeight() / 2, BLACK);
        DrawLine(0 - GetScreenWidth() / 2, 0, GetScreenWidth() / 2, 0, BLACK);
        DrawCircle(0, 0, 3, BLACK);
        // End Coordinate System

        // Outer Circle
        DrawCircleLines(0, 0, 500, BLACK);


        // Display 2nd Ball Coords
        DrawText(fpsTxt, 20 - GetScreenWidth() / 2, 20 - GetScreenHeight() / 2, 20, BLACK);

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}