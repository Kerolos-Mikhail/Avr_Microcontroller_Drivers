#ifndef DIO_REGISTERS_H
#define DIO_REGISTERS_H
/* PORTA registers */
#define PORTA     *((volatile u8*) 0x3B)
#define PINA     *((volatile u8*) 0x39)
#define DDRA     *((volatile u8*) 0x3A)

/* PORTB registers */
#define PORTB     *((volatile u8*) 0x38)
#define PINB     *((volatile u8*) 0x36)
#define DDRB     *((volatile u8*) 0x37)

/* PORTC registers */
#define PORTC     *((volatile u8*) 0x35)
#define PINC     *((volatile u8*) 0x33)
#define DDRC     *((volatile u8*) 0x34)

/* PORTD registers */
#define PORTD     *((volatile u8*) 0x32)
#define PIND     *((volatile u8*) 0x30)
#define DDRD     *((volatile u8*) 0x31)



#endif