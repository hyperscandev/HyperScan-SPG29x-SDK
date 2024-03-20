#ifndef __TV_H__
#define __TV_H__

/**************************************************************************
 *                           C O N S T A N T S                            *
 **************************************************************************/
#define	COLOR_RGB565     	0
#define RESOLUTION_640_480	0
#define RESOLUTION_320_240  1
/**************************************************************************
 *               F U N C T I O N    D E C L A R A T I O N S               *
 **************************************************************************/
void TV_ClearScreen(unsigned short *fb);
void TV_Init(unsigned int Resolution, unsigned int ColorMode, unsigned int FB1_Addr, unsigned int FB2_Addr, unsigned int FB3_Addr);
void TV_Buffer_Set(unsigned int FB1_Addr, unsigned int FB2_Addr, unsigned int FB3_Addr);
void TV_Buffer_Sel(unsigned int sel);
void TV_Saturation(unsigned int satu);
void TV_Hue(unsigned int hue);
void TV_Fade(unsigned int fade);
void TV_FadeIn(void);
void TV_FadeOut(void);
void TV_Print(unsigned short *fb, unsigned int x, unsigned int y, char *text);
void TV_PrintColor(unsigned short *fb, unsigned int x, unsigned int y, char *text, unsigned short color);
void TV_PrintHex(unsigned short *fb, unsigned intx,  unsigned int y, unsigned long value);

#endif
