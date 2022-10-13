#include "UI.hpp"

bool UI::drawButton(const char* text, float posX, float posY, float width, float height)
{
    float mouseX = GetMouseX(), mouseY = GetMouseY();
    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && mouseX > posX && mouseY > posY && mouseX < posX + width && mouseY < posY + height)
    {
        DrawRectangle(posX, posY, width, height, LIGHTGRAY);
        DrawText(text, posX+5, posY+5, 6, BLACK);
        return true;
    }
    else
    {
        DrawRectangle(posX, posY, width, height, GRAY);
        DrawText(text, posX+5, posY+5, 6, BLACK);
        return false;
    }
}