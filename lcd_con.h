/***********************************************************************
Private variables and functions
ŠÖ”ƒvƒƒgƒ^ƒCƒvéŒ¾
***********************************************************************/
void dispset_titl(void);
void lcd_init(void);
void lcd_l1(unsigned char column);
void lcd_l2(unsigned char column);
void lcd_cout(unsigned char code);
void lcd_dout(unsigned char code);
void delay_micro(unsigned int icnt);
void delay_msec(unsigned int icnt);
void dispset_count(void);
//**** •Ï”
extern unsigned char dpcnt[4];

void LCD_Set_Cursor(unsigned char r, unsigned char c);

