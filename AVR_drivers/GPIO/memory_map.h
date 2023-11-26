/*
 * memory_map.h
 *
 * Created: 11/26/2023 5:15:57 PM
 *  Author: DELL
 */ 


#ifndef MEMORY_MAP_H_
#define MEMORY_MAP_H_
 
#define  porta   *((volatile unsigned char *)0x3B)
#define  ddra  *((volatile unsigned char *) 0x3A)
#define  pina  *((volatile unsigned char *) 0x39)

#define  ddrb  *((volatile unsigned char *) 0x37)
#define  portb  *((volatile unsigned char *) 0x38)
#define  pinb  *((volatile unsigned char *) 0x36)


#endif /* MEMORY_MAP_H_ */