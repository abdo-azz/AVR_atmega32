/*
 * Utils.h
 *
 * Created: 11/26/2023 5:47:57 PM
 *  Author: DELL
 */ 


#ifndef UTILS_H_
#define UTILS_H_

#define setbit(reg,bit)       (reg=reg|(1<<bit)) 
#define clearbit(reg,bit)	  (reg=reg|(1<<bit))  
#define  toggelbit(reg,bit)  (reg=reg^(1<<bit))

#define  readbit(reg,bit)     ((reg>>bit)&1)




#endif /* UTILS_H_ */