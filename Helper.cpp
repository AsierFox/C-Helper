
/////////////////////////////////////////////////////////////////////////
//////////////////       Console Methods        /////////////////////////
/////////////////////////////////////////////////////////////////////////

// Set the console cursor to a specific point.
void gotoxy (int x, int y) {
    COORD c;
    c.X = x;
    x.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Set the color of the text in console.
void setColor (int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
