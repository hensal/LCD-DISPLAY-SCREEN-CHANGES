#include <stdio.h>
#include <string.h>
#include "iodefine.h"
#include "common.h"
#include "config.h"
#include "system.h"
#include "sfr.h"
#include "lcd_con.h"

extern unsigned char TITL0[32] = "'0804-0810:04*01";
extern unsigned char TITL1[32] = "H =+0123            ";
extern unsigned char TITL2[32] = "ﾋｶｸ ｾｯﾃｲ     *02";
extern unsigned char TITL3[32] = "+0000            ";
extern unsigned char TITL4[32] = "ｴﾗ- ﾁｪｯｸ     *03";
extern unsigned char TITL5[32] = ">ｱﾘ     ﾅｼ       ";

extern unsigned char TITL6[32] = "ﾄｹｲ ｺｳｾｲ     *04";
extern unsigned char TITL7[32] = "'08 04-08 10:04      ";
extern unsigned char TITL8[32] = "ｶｯﾄﾞｷﾛｸ/ｶｲｼｭｳ*05";
extern unsigned char TITL9[32] = ">ｶｯﾄﾞ   ｶｲｼｭｳ     ";

extern unsigned char TITL10[32] = "ｶﾝｿｸｼｮ NO.   *06";
extern unsigned char TITL11[32] = "000000           ";

extern unsigned char TITL12[32] = "ｷﾛｸｼﾞｶﾝ      *07";
extern unsigned char TITL13[32] = "010M               ";



extern unsigned char TITL14[32] = "ｷﾛｸｼﾞｶﾝ2     *08";
extern unsigned char TITL15[32] = "000M             ";
extern unsigned char TITL16[32] = "ﾒﾓﾘ ｸﾘｱ      *09";
extern unsigned char TITL17[32] = "YES=ｾｯﾄ            ";

extern unsigned char TITL18[32] = "ｶｯﾄﾞｺｳｶﾝｼﾑｽｶ?*10";
extern unsigned char TITL19[32] = "YES=ｾｯﾄ            ";


extern unsigned char TITL20[32] = "ｶｯﾄﾞﾌ ﾇｷﾑｽｶ? *11";
extern unsigned char TITL21[32] = "YES=ｾｯﾄ            ";

extern unsigned char TITL22[32] = "ｶｯﾄﾞﾌ ﾇｷﾑｽｶ? *12";
extern unsigned char TITL23[32] = "YES=ｾｯﾄ            ";

extern unsigned char TITL24[32] = "ｻﾞﾝﾘｮｳ ｶｸﾆﾝ  *13";
extern unsigned char TITL25[32] = "YES=ｾｯﾄ            ";
extern unsigned char TITL26[32] = "ｷﾛｸ ｶｸﾆﾝ *14    ";
extern unsigned char TITL27[32] = "YES=ｾｯﾄ            ";
extern unsigned char TITL28[32] = "ｷﾛｸ ｶｸﾆﾝ *15    ";
extern unsigned char TITL29[32] = "YES=ｾｯﾄ            ";

extern unsigned char TITL30[32] = "ｶｷｺﾐ ｴﾗ-     *16    ";
extern unsigned char TITL31[32] = "04/05 15:00 E1      ";


void dispset_titl(void)
{	
	unsigned char n;
	unsigned char dsp_buf;
      	label: 
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL0[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x40);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL1[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL2[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL3[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL4[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL5[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL6[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL7[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}	
	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL8[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL9[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}	

	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL10[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL11[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL12[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL13[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL14[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL15[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL16[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL17[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}	

	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL18[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL19[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL20[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL21[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL22[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL23[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}

	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL24[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL25[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL26[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL27[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL28[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL29[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}
	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL30[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL31[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}

	delay_msec(1000);
	lcd_cout(0x01);
	
	lcd_l1(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL30[n];		//line 1
		lcd_dout(dsp_buf);		//1data write		
	}
	
	lcd_l2(0x00);				
	for (n=0 ;n<16 ;n++) {
		dsp_buf = TITL31[n];		//line 2
		lcd_dout(dsp_buf);		//1data write			
	}


	goto label;
}

void dispset_count(void)
{
	lcd_cout(0x8C);
	
	delay_msec(100);
	dpcnt[0]++;
	if (dpcnt[0] > 9){
		dpcnt[0] = 0;
		dpcnt[1]++;
	}
	if (dpcnt[1] > 9){
		dpcnt[1] = 0;
		dpcnt[2]++;
	}
	if (dpcnt[2] > 9){
		dpcnt[2] = 0;
		dpcnt[3]++;
	}
	if (dpcnt[3] > 9){
		dpcnt[3] = 0;
	}
	lcd_cout(0x8C);
	lcd_dout(dpcnt[3] + 0x30);
	lcd_dout(dpcnt[2] + 0x30);
	lcd_dout(dpcnt[1] + 0x30);
	lcd_dout(dpcnt[0] + 0x30);

}

void lcd_init(void)
{
	P0 = 0x00;		                           //E=0,R/W=0

	P2 = 0x03;
	P0 = 0x02;		                          //E=1,R/W=0
	delay_micro(100);
	P0 = 0x00;		                          //E=0,R/W=0
	delay_msec(5);

	P2 = 0x03;
	P0 = 0x02;		                          //E=1,R/W=0
	delay_micro(100);
	P0 = 0x00;		                          //E=0,R/W=0
	delay_msec(5);

	P2 = 0x03;
	P0 = 0x02;		                           //E=1,R/W=0
	delay_micro(100);
	P0 = 0x00;		                           //E=0,R/W=0
	delay_msec(5);

	P2 = 0x02;		
	P0 = 0x02;		                           //E=1,R/W=0
	delay_micro(100);
	P0 = 0x00;		                           //E=0,R/W=0
	delay_msec(5);              
       
	lcd_cout(0x28);		                          //for 4-bit lcd intialization
	delay_msec(5);
	lcd_cout(0x0F);		
	delay_msec(5);
	lcd_cout(0x06);
	delay_msec(5);     
	lcd_cout(0x01);
	delay_msec(5);  
	lcd_cout(0x02);
	delay_msec(5);  
	lcd_cout(0x0E);
	delay_msec(5);  	
	 
}

void lcd_l1(unsigned char column)
{
	unsigned char pos;
	
	pos = column & 0x0F;	
	pos = pos | 0x80;	
	lcd_cout(pos);
	delay_msec(5);
}

void lcd_l2(unsigned char column)
{
	unsigned char pos;
         
	pos = column & 0x4F;	
	pos = pos | 0xC0;
	lcd_cout(pos);
	delay_msec(5);                      
}



void lcd_cout(unsigned char code)
{
	unsigned char code_msb,code_lsb;

	code_msb = code / 0x10;
	code_lsb = code & 0x0F;
	P0 = 0x00;		                                //E=0,R/W=0

	P2 = code_msb;
	P0 = 0x02;		                               //E=1,R/W=0
	delay_micro(2);
	P0 = 0x00;		                               //E=0,R/W=0

	delay_micro(2);

	P2 = code_lsb;
	P0 = 0x02;		                                //E=1,R/W=0
	delay_micro(2);
	P0 = 0x00;		                                //E=0,R/W=0
	delay_micro(50);	

}

void lcd_dout(unsigned char code)
{
	unsigned char code_msb,code_lsb;

	code_msb = code / 0x10;
	code_lsb = code & 0x0F;
	
	P0 = 0x01;		                               //E=0,R/W=1

	P2 = code_msb;
	P0 = 0x03;		                               //E=1,R/W=1
	delay_micro(2);
	P0 = 0x01;		                               //E=0,R/W=1

	delay_micro(2);

	P2 = code_lsb;
	P0 = 0x03;		                               //E=1,R/W=1
	delay_micro(2);
	P0 = 0x01;		                               //E=0,R/W=1
	delay_micro(50);
	

}

void delay_micro(unsigned int icnt)
{
	unsigned int del_cnt;

	for (del_cnt=0;del_cnt<icnt;del_cnt++){
			NOP();
  			NOP();
			NOP();
			NOP();
			NOP();
	}
}

void delay_msec(unsigned int icnt)
{
	unsigned int del_cnt;

	for (del_cnt=0;del_cnt<icnt;del_cnt++){
//		wdt_rst();
		delay_micro(1000);
	}
}
