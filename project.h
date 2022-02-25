/*	project.h
	Contains global functions and variables.
	*/

#include <stdint.h>

/* Declare bitmap array containing font */
extern const uint8_t const font[128*8];
/* Declare bitmap array containing icon */
extern const uint8_t const icon[256];
/* Declare text buffer for display output */
extern char textbuffer[4][16];

void display_image(int x, const uint8_t *data);
void display_init(void);
void display_string(int line, char *s);
void display_update(void);
uint8_t spi_send_recv(uint8_t data);
void quicksleep(int cyc);



/* ~~~ OUR STUFF BELOW THIS LINE ~~~ */
/* Pixel graphics buffer for our game */
extern uint8_t gamebuffer[516];

/* Functions to draw and erase pixels into our gamebuffer */
void setPixel(uint8_t *target_array, const unsigned int x, const unsigned int y);
void clearPixel(uint8_t *target_array, const unsigned int x, const unsigned int y);