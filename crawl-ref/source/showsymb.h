#ifndef SHOWSYMB_H
#define SHOWSYMB_H

struct show_type;

struct glyph
{
    unsigned ch;
    unsigned short col;
};

void get_item_glyph(const item_def *item, unsigned *glych,
                    unsigned short *glycol);
void get_mons_glyph(const monsters *mons, unsigned *glych,
                    unsigned short *glycol);
unsigned get_screen_glyph( int x, int y );
unsigned get_screen_glyph( const coord_def &p );

int get_mons_colour(const monsters *mons);

unsigned grid_character_at(const coord_def &c);
void get_symbol(const coord_def& where,
                show_type object, unsigned *ch,
                unsigned short *colour);
void get_show_symbol(show_type object, unsigned *ch, unsigned short *colour);

#endif

