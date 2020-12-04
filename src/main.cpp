#include <raylib-cpp.hpp>
#include <cstring>

int main() {
    int screenWidth = 800;
    int screenHeight = 800;
    int i;


    short vorzeichenX;
    short vorzeichenY;


    std::string bpTxtX;
    std::string bpTxtY;
    char bpTxtXch[100] = "";
    char bpTxtYch[100] = "";

    int screenMiddle[2];

    double MouseX;
    double MouseY;

    double MouseXREAL;
    double MouseYREAL;


    double ballPos1[2] = {0, 0};
    double ballPos2[2] = {0, 0};
    double ballPos3[2] = {0, 0};
    double ballPos4[2] = {0, 0};
    double ballPos5[2] = {0, 0};
    double ballPos6[2] = {0, 0};
    double ballPos7[2] = {0, 0};
    double ballPos8[2] = {0, 0};

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
        //MouseX = (GetMouseX() - (GetScreenWidth() / 2.0)) / 100.0;
        //MouseY = (GetMouseY() - (GetScreenHeight() / 2.0)) / 100.0;

        MouseX = (GetMouseX() - (GetScreenWidth() / 2.0)) / 100.0;
        MouseY = ((GetMouseY() - (GetScreenHeight() / 2.0)) / 100.0);


        //ballPos1[0] = (std::pow(MouseX, 2));
        //ballPos1[1] = (std::pow(MouseY, 2));

        if (MouseX < 0) {vorzeichenX = -1;} else {vorzeichenX = 1;}
        if (MouseY < 0) {vorzeichenY = -1;} else {vorzeichenY = 1;}


        ballPos1[0] = MouseX * MouseX;
        ballPos1[1] = (ballPos1[0] + MouseY);


        ballPos2[0] = (std::pow(ballPos1[0], 2));
        ballPos2[1] = (std::pow(ballPos1[1], 2));
        DrawLine(ballPos1[0] * 100.0, ballPos1[1] * 100.0, ballPos2[0] * 100.0, ballPos2[1] * 100.0, BLACK);

        ballPos3[0] = std::pow(ballPos2[0], 2);
        ballPos3[1] = std::pow(ballPos2[1], 2);
        DrawLine(ballPos2[0] * 100.0, ballPos2[1] * 100.0, ballPos3[0] * 100.0, ballPos3[1] * 100.0, BLACK);

        ballPos4[0] = std::pow(ballPos3[0], 2);
        ballPos4[1] = std::pow(ballPos3[1], 2);
        DrawLine(ballPos3[0] * 100.0, ballPos3[1] * 100.0, ballPos4[0] * 100.0, ballPos4[1] * 100.0, BLACK);

        ballPos5[0] = std::pow(ballPos4[0], 2);
        ballPos5[1] = std::pow(ballPos4[1], 2);
        DrawLine(ballPos4[0] * 100.0, ballPos4[1] * 100.0, ballPos5[0] * 100.0, ballPos5[1] * 100.0, BLACK);

        ballPos6[0] = std::pow(ballPos5[0], 2);
        ballPos6[1] = std::pow(ballPos5[1], 2);
        DrawLine(ballPos5[0] * 100.0, ballPos5[1] * 100.0, ballPos6[0] * 100.0, ballPos6[1] * 100.0, BLACK);

        ballPos7[0] = std::pow(ballPos6[0], 2);
        ballPos7[1] = std::pow(ballPos6[1], 2);
        DrawLine(ballPos6[0] * 100.0, ballPos6[1] * 100.0, ballPos7[0] * 100.0, ballPos7[1] * 100.0, BLACK);

        ballPos8[0] = std::pow(ballPos7[0], 2);
        ballPos8[1] = std::pow(ballPos7[1], 2);
        DrawLine(ballPos7[0] * 100.0, ballPos7[1] * 100.0, ballPos8[0] * 100.0, ballPos8[1] * 100.0, BLACK);


        bpTxtX = "MouseX: ";
        bpTxtX.append(std::to_string(MouseX));
        bpTxtX.append("; ballPos0[X]: ");
        bpTxtX.append(std::to_string(ballPos1[0]));

        bpTxtY = "MouseY: ";
        bpTxtY.append(std::to_string(MouseY));
        bpTxtY.append("; ballPos1[Y]: ");
        bpTxtY.append(std::to_string(ballPos1[1]));

        strcpy(bpTxtXch, bpTxtX.c_str());
        strcpy(bpTxtYch, bpTxtY.c_str());




        DrawCircle(ballPos1[0] * 100.0, ballPos1[1] * 100.0, 5, BLUE);
        DrawCircle(ballPos2[0] * 100.0, ballPos2[1] * 100.0, 3, GREEN);
        DrawCircle(ballPos3[0] * 100.0, ballPos3[1] * 100.0, 3, RED);
        DrawCircle(ballPos4[0] * 100.0, ballPos4[1] * 100.0, 3, RED);
        DrawCircle(ballPos5[0] * 100.0, ballPos5[1] * 100.0, 3, RED);
        DrawCircle(ballPos6[0] * 100.0, ballPos6[1] * 100.0, 3, RED);
        DrawCircle(ballPos7[0] * 100.0, ballPos7[1] * 100.0, 3, RED);
        DrawCircle(ballPos8[0] * 100.0, ballPos8[1] * 100.0, 3, RED);

        // Coordinate System
        DrawLine(0, 0 - GetScreenHeight() / 2, 0, GetScreenHeight() / 2, BLACK);
        DrawLine(0 - GetScreenWidth() / 2, 0, GetScreenWidth() / 2, 0, BLACK);
        DrawCircle(0, 0, 3, BLACK);
        // End Coordinate System

        // Outer Circle
        DrawCircleLines(0, 0, 100, BLACK);


        // Display 2nd Ball Coords
        DrawText(bpTxtXch, 20 - GetScreenWidth() / 2, 20 - GetScreenHeight() / 2, 20, BLACK);
        DrawText(bpTxtYch, 20 - GetScreenWidth() / 2, 50 - GetScreenHeight() / 2, 20, BLACK);



        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}