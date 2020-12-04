#include <raylib-cpp.hpp>
#include <cstring>
#include <complex>

int main() {
    int screenWidth = 800;
    int screenHeight = 800;
    int i;




    char fpsTxt[3] = "";

    int screenMiddle[2];

    double MouseX;
    double MouseY;


    std::complex<double> testComplex (0, 0);

    std::complex<double> iter1(0, 0);
    std::complex<double> iter2(0, 0);
    std::complex<double> iter3(0, 0);
    std::complex<double> iter4(0, 0);
    std::complex<double> iter5(0, 0);
    std::complex<double> iter6(0, 0);
    std::complex<double> iter7(0, 0);
    std::complex<double> iter8(0, 0);
    std::complex<double> iter9(0, 0);
    std::complex<double> iter10(0, 0);
    std::complex<double> iter11(0, 0);
    std::complex<double> iter12(0, 0);
    std::complex<double> iter13(0, 0);
    std::complex<double> iter14(0, 0);
    std::complex<double> iter15(0, 0);
    std::complex<double> iter16(0, 0);
    std::complex<double> iter17(0, 0);
    std::complex<double> iter18(0, 0);



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
        MouseX = (GetMouseX() - (GetScreenWidth() / 2.0)) / 100.0;
        MouseY = (GetMouseY() - (GetScreenHeight() / 2.0)) / 100.0;




        // Get the Complex points
        iter1 = {MouseX, MouseY};
        iter1 = std::pow(iter1, 2);

        iter2 = iter1;
        iter2 = std::pow(iter2, 2);

        iter3 = iter2;
        iter3 = std::pow(iter3, 2);

        iter4 = iter3;
        iter4 = std::pow(iter4, 2);

        iter5 = iter4;
        iter5 = std::pow(iter5, 2);

        iter6 = iter5;
        iter6 = std::pow(iter6, 2);

        iter7 = iter6;
        iter7 = std::pow(iter7, 2);

        iter8 = iter7;
        iter8 = std::pow(iter8, 2);

        iter9 = iter8;
        iter9 = std::pow(iter9, 2);

        iter10 = iter9;
        iter10 = std::pow(iter10, 2);

        iter11 = iter10;
        iter11 = std::pow(iter11, 2);

        iter12 = iter11;
        iter12 = std::pow(iter12, 2);

        iter13 = iter12;
        iter13 = std::pow(iter13, 2);

        iter14 = iter13;
        iter14 = std::pow(iter14, 2);

        iter15 = iter14;
        iter15 = std::pow(iter15, 2);

        iter16 = iter15;
        iter16 = std::pow(iter16, 2);

        iter17 = iter16;
        iter17 = std::pow(iter17, 2);

        iter18 = iter17;
        iter18 = std::pow(iter18, 2);


        //Draw lines between all complex points
        DrawLine(std::real(iter1) * 100.0, std::imag(iter1) * 100.0, std::real(iter2) * 100.0, std::imag(iter2) * 100.0, BLACK);
        DrawLine(std::real(iter2) * 100.0, std::imag(iter2) * 100.0, std::real(iter3) * 100.0, std::imag(iter3) * 100.0, BLACK);
        DrawLine(std::real(iter3) * 100.0, std::imag(iter3) * 100.0, std::real(iter4) * 100.0, std::imag(iter4) * 100.0, BLACK);
        DrawLine(std::real(iter4) * 100.0, std::imag(iter4) * 100.0, std::real(iter5) * 100.0, std::imag(iter5) * 100.0, BLACK);
        DrawLine(std::real(iter5) * 100.0, std::imag(iter5) * 100.0, std::real(iter6) * 100.0, std::imag(iter6) * 100.0, BLACK);
        DrawLine(std::real(iter6) * 100.0, std::imag(iter6) * 100.0, std::real(iter7) * 100.0, std::imag(iter7) * 100.0, BLACK);
        DrawLine(std::real(iter7) * 100.0, std::imag(iter7) * 100.0, std::real(iter8) * 100.0, std::imag(iter8) * 100.0, BLACK);
        DrawLine(std::real(iter8) * 100.0, std::imag(iter8) * 100.0, std::real(iter9) * 100.0, std::imag(iter9) * 100.0, BLACK);
        DrawLine(std::real(iter9) * 100.0, std::imag(iter9) * 100.0, std::real(iter10) * 100.0, std::imag(iter10) * 100.0, BLACK);
        DrawLine(std::real(iter10) * 100.0, std::imag(iter10) * 100.0, std::real(iter11) * 100.0, std::imag(iter11) * 100.0, BLACK);
        DrawLine(std::real(iter11) * 100.0, std::imag(iter11) * 100.0, std::real(iter12) * 100.0, std::imag(iter12) * 100.0, BLACK);
        DrawLine(std::real(iter12) * 100.0, std::imag(iter12) * 100.0, std::real(iter13) * 100.0, std::imag(iter13) * 100.0, BLACK);
        DrawLine(std::real(iter13) * 100.0, std::imag(iter13) * 100.0, std::real(iter14) * 100.0, std::imag(iter14) * 100.0, BLACK);
        DrawLine(std::real(iter14) * 100.0, std::imag(iter14) * 100.0, std::real(iter15) * 100.0, std::imag(iter15) * 100.0, BLACK);
        DrawLine(std::real(iter15) * 100.0, std::imag(iter15) * 100.0, std::real(iter16) * 100.0, std::imag(iter16) * 100.0, BLACK);
        DrawLine(std::real(iter16) * 100.0, std::imag(iter16) * 100.0, std::real(iter17) * 100.0, std::imag(iter17) * 100.0, BLACK);
        DrawLine(std::real(iter17) * 100.0, std::imag(iter17) * 100.0, std::real(iter18) * 100.0, std::imag(iter18) * 100.0, BLACK);



        // Conversions from string to char bc DrawText() uses char :P
        strcpy(fpsTxt, std::to_string(GetFPS()).c_str());

        // Draw the points
        DrawCircle((std::real(iter1)) * 100.0, (std::imag(iter1)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter2)) * 100.0, (std::imag(iter2)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter3)) * 100.0, (std::imag(iter3)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter4)) * 100.0, (std::imag(iter4)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter5)) * 100.0, (std::imag(iter5)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter6)) * 100.0, (std::imag(iter6)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter7)) * 100.0, (std::imag(iter7)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter8)) * 100.0, (std::imag(iter8)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter9)) * 100.0, (std::imag(iter9)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter10)) * 100.0, (std::imag(iter10)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter11)) * 100.0, (std::imag(iter11)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter12)) * 100.0, (std::imag(iter12)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter13)) * 100.0, (std::imag(iter13)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter14)) * 100.0, (std::imag(iter14)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter15)) * 100.0, (std::imag(iter15)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter16)) * 100.0, (std::imag(iter16)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter17)) * 100.0, (std::imag(iter17)) * 100.0, 5, BLUE);
        DrawCircle((std::real(iter18)) * 100.0, (std::imag(iter18)) * 100.0, 5, BLUE);


        // Coordinate System
        DrawLine(0, 0 - GetScreenHeight() / 2, 0, GetScreenHeight() / 2, BLACK);
        DrawLine(0 - GetScreenWidth() / 2, 0, GetScreenWidth() / 2, 0, BLACK);
        DrawCircle(0, 0, 3, BLACK);
        // End Coordinate System

        // Outer Circle
        DrawCircleLines(0, 0, 100, BLACK);


        // Display 2nd Ball Coords
        DrawText(fpsTxt, 20 - GetScreenWidth() / 2, 20 - GetScreenHeight() / 2, 20, BLACK);

        EndDrawing();
    }

    // UnloadTexture() and CloseWindow() are called automatically.

    return 0;
}