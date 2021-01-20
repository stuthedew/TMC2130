#ifndef REG_DEFINE
#define REG_DEFINE

// Driver Register Set
/** ############### CHOPPER CONFIGURATION #############**/
const static uint8_t ADDRESS_CHOPCONF = 0x6C;

#define TOFF_BIT_SIZE 4
#define TOFF_BIT_SHIFT 0

#define HSTRT_BIT_SIZE 3
#define HSTRT_BIT_SHIFT 4

#define HEND_BIT_SIZE 4
#define HEND_BIT_SHIFT 7

#define FD3_BIT_SIZE 1
#define FD3_BIT_SHIFT 11

// fast decay mode
#define DISFDCC_BIT_SIZE 1
#define DISFDCC_BIT_SHIFT 12

// random TOFF time
#define RNDTF_BIT_SIZE 1
#define RNDTF_BIT_SHIFT 13

// chopper mode
#define CHM_BIT_SIZE 1
#define CHM_BIT_SHIFT 14

#define TBL_BIT_SIZE 2
#define TBL_BIT_SHIFT 15

//sense resistor voltage based current scalin
#define VSENSE_BIT_SIZE 1
#define VSENSE_BIT_SHIFT 17

//high velocity fullstep selection
#define VHIGHFS_BIT_SIZE 1
#define VHIGHFS_BIT_SHIFT 18

//high velocity chopper mode
#define VHIGHCHM_BIT_SIZE 1
#define VHIGHCHM_BIT_SHIFT 19

#define SYNC_BIT_SIZE 4
#define SYNC_BIT_SHIFT 20

//micro step resolution
#define MRES_BIT_SIZE 4
#define MRES_BIT_SHIFT 24

//interpolation to 256 microsteps
#define INTPOL_BIT_SIZE 1
#define INTPOL_BIT_SHIFT 28

//enable double edge step pulses
#define DEDGE_BIT_SIZE 1
#define INTPOL_BIT_SHIFT 29

//short to GND protection disable
#define DISS2G_BIT_SIZE 1
#define DISS2G_BIT_SHIFT 30


/** ############### CHOPPER CONFIGURATION #############**/

#endif
