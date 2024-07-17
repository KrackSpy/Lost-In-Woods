#include "raylib.h"
#include<stdio.h>

int main()
{

InitWindow(500,500,"RPG");
Texture2D woodfloor=LoadTexture("src/WOOD.png");
Texture2D table=LoadTexture("src/table.png");
while (WindowShouldClose()!=1)
{
BeginDrawing();
ClearBackground(WHITE);

for (int i = 0; i < 28; i++)
{
    for (int j = 0; j < 28; j++)
    {
         DrawTexture(woodfloor,0+(18*j),0+(18*i),WHITE);
    }
    
DrawTexture(table,250,1,WHITE);

   
}






EndDrawing();
}



    return 0;
}