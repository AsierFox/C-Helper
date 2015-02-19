
/////////////////////////////////////////////////////////////////////////
//////////////////       Console Methods        /////////////////////////
/////////////////////////////////////////////////////////////////////////
// Set the console cursor to a specific point.
void gotoxy (int x, int y) {
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

// Set the color of the text in console.
void setColor (int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

/////////////////////////////////////////////////////////////////////////
//////////////////       Number Methods         /////////////////////////
/////////////////////////////////////////////////////////////////////////

int generateRandom(int max_num, int min_num = 0) {
    // Initialize to seed this method before execute -> srand(time(NULL));
    return rand() % (++max_num - min_num) + min_num;
}
