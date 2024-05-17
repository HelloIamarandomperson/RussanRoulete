#include <stdio.h> // Standard input/output functions
#include <stdlib.h> // General utilities
#include <string.h> // String manipulation functions
#include <windows.h>
#include <time.h>
#include <ctype.h>

#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_primitives.h>
char Allegro[50]; // Declaration of the global variable

//

ALLEGRO_DISPLAY *display = nullptr;
ALLEGRO_BITMAP *Table = nullptr;
ALLEGRO_BITMAP *Dummy = nullptr;
ALLEGRO_BITMAP *Player = nullptr;
ALLEGRO_BITMAP *Dummyfires = nullptr;
ALLEGRO_BITMAP *Dummyflash = nullptr;
ALLEGRO_BITMAP *Playerfires = nullptr;
ALLEGRO_BITMAP *Playerflash = nullptr;


ALLEGRO_EVENT_QUEUE *event_queue = nullptr;

const int SCREEN_W = 800;       // screen width
const int SCREEN_H = 800 ;       // screen height
