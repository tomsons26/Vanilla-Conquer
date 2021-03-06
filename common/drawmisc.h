#ifndef DRAWMISC_H
#define DRAWMISC_H

extern "C" extern unsigned char CurrentPalette[768];
extern "C" extern unsigned char PaletteTable[1024];

extern "C" void __cdecl Buffer_Draw_Line(void* this_object, int sx, int sy, int dx, int dy, unsigned char color);
extern "C" void __cdecl Buffer_Fill_Rect(void* thisptr, int sx, int sy, int dx, int dy, unsigned char color);
extern "C" void __cdecl Buffer_Clear(void* this_object, unsigned char color);
extern "C" BOOL __cdecl Linear_Blit_To_Linear(void* this_object,
                                              void* dest,
                                              int x_pixel,
                                              int y_pixel,
                                              int dest_x0,
                                              int dest_y0,
                                              int pixel_width,
                                              int pixel_height,
                                              BOOL trans);
extern "C" BOOL __cdecl Linear_Scale_To_Linear(void* this_object,
                                               void* dest,
                                               int src_x,
                                               int src_y,
                                               int dst_x,
                                               int dst_y,
                                               int src_width,
                                               int src_height,
                                               int dst_width,
                                               int dst_height,
                                               BOOL trans,
                                               char* remap);
extern "C" void __cdecl Set_Font_Palette_Range(void const* palette, int start_idx, int end_idx);

extern "C" extern int LastIconset;
extern "C" extern int StampPtr;
extern "C" extern int IsTrans;
extern "C" extern int MapPtr;
extern "C" extern int IconWidth;
extern "C" extern int IconHeight;
extern "C" extern int IconSize;
extern "C" extern int IconCount;

extern "C" void __cdecl Init_Stamps(unsigned int icondata);

#endif
