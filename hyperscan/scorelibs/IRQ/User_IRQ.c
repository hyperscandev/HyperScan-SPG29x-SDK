#include "../../include/SPG290_Registers.h"
#include "../../include/SPG290_Constants.h"

extern void MP3_Service_Loop_ISR(); 

//====================================================
// IRQ63 - SPU FIQ
//
//
//
//====================================================
void IRQ63(void)
{
	MP3_Service_Loop_ISR();
}

//====================================================
// IRQ62 - SPI BeatIRQ
//
//
//
//====================================================
void IRQ62(void)
{
	
}

//====================================================
// IRQ61 - SPU EnvIRQ
//
//
//
//====================================================
void IRQ61(void)
{
	
}

//====================================================
// IRQ60 - CDServo
//
//
//
//====================================================
void IRQ60(void)
{
	
}

//====================================================
// IRQ59 - ADC Gain OvFlw/ADC Rcd/ FIFO OvFlw
//
//
//
//====================================================
void IRQ59(void)
{
	
}

//====================================================
// IRQ58 - General Purpose ADC
//
//
//
//====================================================
void IRQ58(void)
{
	
}

//====================================================
// IRQ57 - Timer Base
//
//
//
//====================================================
void IRQ57(void)
{
	
}

//====================================================
// IRQ56 - Timer
//
//
//
//====================================================
void IRQ56(void)
{

}

//====================================================
// IRQ55 - TV VBlanking Start
//
//
//
//====================================================
void IRQ55(void)
{
	
}

//====================================================
// IRQ54 - LCD VBlanking Start
//
//
//
//====================================================
void IRQ54(void)
{
	
}

//====================================================
// IRQ53 - PPU VBlanking Start
//
//
//
//====================================================
void IRQ53(void)
{

}

//====================================================
// IRQ52 - TV
//
//
//
//====================================================
void IRQ52(void)
{

}

//====================================================
// IRQ51 - Sensor Frame End
//
//
//
//====================================================
void IRQ51(void)
{

}

//====================================================
// IRQ50 - Sensor Coordinate Hit
//
//
//
//====================================================
void IRQ50(void)
{
	
}

//====================================================
// IRQ49 - Sensor Motion Frame End
//
//
//
//====================================================
void IRQ49(void)
{
	
}

//====================================================
// IRQ48 - Sensor Capture Done + Sensor DBG IRQ
//
//
//
//====================================================
void IRQ48(void)
{
	
}

//====================================================
// IRQ47 - TV Coordinate Hit
//
//
//
//====================================================
void IRQ47(void)
{
	
}

//====================================================
// IRQ46 - PPU Coordinate Hit
//
//
//
//====================================================
void IRQ46(void)
{
	
}

//====================================================
// IRQ45 - USB Host + Device
//
//
//
//====================================================
void IRQ45(void)
{

}

//====================================================
// IRQ44 - SIO
//
//
//
//====================================================
void IRQ44(void)
{
	
}

//====================================================
// IRQ43 - SPI
//
//
//
//====================================================
void IRQ43(void)
{
	
}

//====================================================
// IRQ42 - UART (IrDA)
//
//
//
//====================================================
void IRQ42(void)
{
	
}

//====================================================
// IRQ41 - NAND
//
//
//
//====================================================
void IRQ41(void)
{
	
}

//====================================================
// IRQ40 - SD
//
//
//
//====================================================
void IRQ40(void)
{
	
}

//====================================================
// IRQ39 - I2C Master
//
//
//
//====================================================
void IRQ39(void)
{
	
}

//====================================================
// IRQ38 - I2C Slave
//
//
//
//====================================================
void IRQ38(void)
{
	
}

//====================================================
// IRQ37 - APBDMA CH1
//
//
//
//====================================================
void IRQ37(void)
{
	
}

//====================================================
// IRQ36 - APBDMA CH2
//
//
//
//====================================================
void IRQ36(void)
{
	
}

//====================================================
// IRQ35 - LDM_DMA
//
//
//
//====================================================
void IRQ35(void)
{
	
}

//====================================================
// IRQ34 - BLN_DMA
//
//
//
//====================================================
void IRQ34(void)
{
	
}

//====================================================
// IRQ33 - APBDMA CH3
//
//
//
//====================================================
void IRQ33(void)
{
	
}

//====================================================
// IRQ32 - APBDMA CH4
//
//
//
//====================================================
void IRQ32(void)
{
	
}

//====================================================
// IRQ31 - Alarm + HMS
//
//
//
//====================================================
void IRQ31(void)
{
	
}

//====================================================
// IRQ30 - MP4
//
//
//
//====================================================
void IRQ30(void)
{
	
}

//====================================================
// IRQ29 - C3 (ECC Module)
//
//
//
//====================================================
void IRQ29(void)
{
	
}

//====================================================
// IRQ28 - GPIO
//
//
//
//====================================================
void IRQ28(void)
{
	
}

//====================================================
// IRQ27 - BUFCTL + TV/PPU VBlanking End (for DBG)
//
//
//
//====================================================
void IRQ27(void)
{
	
}

//====================================================
// IRQ26 - RESERVED1
//
//
//
//====================================================
void IRQ26(void)
{
	
}

//====================================================
// IRQ25 - RESERVED2
//
//
//
//====================================================
void IRQ25(void)
{
	
}

//====================================================
// IRQ24 - RESERVED3
//
//
//
//====================================================
void IRQ24(void)
{
	
}

//====================================================
//	end
//====================================================


