#define BPM 82
#define SM 60000/BPM  // SEMÍNIMA
#define MI 2*SM       // MÍNIMA
#define CO SM/2       // COLCHEIA
#define SC SM/4       // SEMICOLCHEIA
#define FU SM/8       // FUSA
#define SF SM/16      // SEMIFUSA
#define SB 4*SM       // SEMIBREVE




// First channel melody
FLASH_TABLE(int, melody, 2,

 //1
 
{0,SC},


{0,SC},
{E4,SC},
{LA4,SC},
{C5,SC},
{B4,SC},
{E4,SC},
{B4,SC},
{D5,SC},
{C5,SC},
{0,SC},
{E5,SC},
{0,SC},
{GS4,SC},
{0,SC},
{E5,SC},
{0,SC},

//2
{LA4,SC},
{E4,SC},
{LA4,SC},
{C5,SC},
{B4,SC},
{E4,SC},
{B4,SC},
{D5,SC},
{C5,SC},
{0,SC},
{LA4,SC},
{0,SC},
{0,SM},

//3
{0,SC},
{E5,SC},
{C5,SC},
{E5,SC},
{LA4,SC},
{C5,SC},
{E4,SC},
{G4,SC},
{F4,SC},
{0,SC},
{LA4,SC},
{0,SC},
{D5,SC},
{0,SC},
{F5,CO},


//4
{0,SC},
{D5,SC},
{B4,SC},
{D5,SC},
{G4,SC},
{B4,SC},
{D4,SC},
{F4,SC},
{E4,SC},
{0,SC},
{G4,SC},
{0,SC},
{C5,SC},
{0,SC},
{E5,CO},

//5

{0,SC},
{C5,SC},
{LA4,SC},
{C5,SC},
{F4,SC},
{0,SC},
{D5,CO},
{0,SC},
{B4,SC},
{G4,SC},
{B4,SC},
{E4,SC},
{0,SC},
{C5,CO},

//6

{0,SC},
{LA4,SC},
{F4,SC},
{LA4,SC},
{D4,SC},
{0,SC},
{B4,SC},
{0,SC},
{C5,CO},
{0,CO},
{0,SM},

//7

{0,SC},
{G4,SC},
{C5,SC},
{E5,SC},
{D5,SC},
{G4,SC},
{D5,SC},
{F5,SC},
{E5,SC},
{0,SC},
{G5,SC},
{0,SC},
{B4,SC},
{0,SC},
{G5,SC},
{0,SC},

//8

{C5,SC},
{G4,SC},
{C5,SC},
{E5,SC},
{D5,SC},
{G4,SC},
{D5,SC},
{F5,SC},
{E5,SC},
{0,SC},
{C5,SC},
{0,SC},
{G5,SC},
{0,SC},
{E5,SC},
{0,SC},


//9
{C6,SC},
{LA5,SC},
{E5,SC},
{LA5,SC},
{C5,SC},
{E5,SC},
{LA4,SC},
{C5,SC},
{D5,SC},
{0,SC},
{FS5,SC},
{0,SC},
{LA5,SC},
{0,SC},
{C6,SC},
{0,SC},


//10
{B5,SC},
{G5,SC},
{D5,SC},
{G5,SC},
{B4,SC},
{D5,SC},
{G4,SC},
{B4,SC},
{C5,SC},
{0,SC},
{E5,SC},
{0,SC},
{G5,SC},
{0,SC},
{B5,SC},
{0,SC},

//11

{LA5,SC},
{FS5,SC},
{DS5,SC},
{FS5,SC},
{B4,SC},
{DS5,SC},
{FS4,SC},
{LA4,SC},
{G4,SC},
{0,SC},
{G5,CO},
{0,SC},
{E5,SC},
{C5,SC},
{E5,SC},

//12

{LA4,SC},
{0,SC},
{FS5,CO},
{0,SC},
{D5,SC},
{B4,SC},
{D5,SC},
{G4,SC},
{0,SC},
{E5,CO},
{0,SC},
{C5,SC},
{LA4,SC},
{C5,SC},

//13

{FS4,SC/2},
{0,SC/2},
{G5,SC},
{FS5,SC},
{E5,SC},
{DS5,SC},
{FS5,SC},
{B4,SC},
{DS5,SC},
{E5,CO},
{0,CO},
{0,SM},

//14
{0,SC},
{G5,SC},
{AS5,SC},
{G5,SC},
{E5,SC},
{G5,SC},
{CS5,SC},
{E5,SC},
{G5,SC},
{E5,SC},
{CS5,SC},
{E5,SC},
{LA4,SC},
{0,SC},
{0,CO},

//15

{0,SC},
{F5,SC},
{LA5,SC},
{F5,SC},
{D5,SC},
{F5,SC},
{B4,SC},
{D5,SC},
{F5,SC},
{D5,SC},
{B4,SC},
{D5,SC},
{G4,SC},
{0,SC},
{0,CO},


//16

{0,SC},
{E5,SC},
{G5,SC},
{E5,SC},
{C5,SC},
{E5,SC},
{LA4,SC},
{C5,SC},
{DS5,SC},
{C5,SC},
{LA4,SC},
{C5,SC},
{FS4,SC},
{0,SC},
{0,CO},


//17

{0,SC},
{D5,SC},
{F5,SC},
{D5,SC},
{B4,SC},
{D5,SC},
{GS4,SC},
{B4,SC},
{D5,SC},
{B4,SC},
{GS4,SC},
{B4,SC},
{E4,SC},
{0,SC},
{0,CO},


//18
{0,SC},
{E4,SC},
{LA4,SC},
{C5,SC},
{B4,SC},
{E4,SC},
{B4,SC},
{D5,SC},
{C5,SC},
{0,SC},
{LA4,SC},
{0,SC},
{GS4,SC},
{0,SC},
{E4,SC},
{0,SC},


//19

{LA4,SC},
{C5,SC},
{E5,SC},
{C5,SC},
{LA4,SC},
{C5,SC},
{FS4,SC},
{LA4,SC},
{C5,SC},
{LA4,SC},
{FS4,SC},
{LA4,SC},
{DS4,SC/2},
{0,SC/2},
{C5,SC},
{B4,SC},
{LA4,SC},


//20

{GS4,SC},
{B4,SC},
{D5,SC},
{B4,SC},
{GS4,SC},
{B4,SC},
{D4,SC},
{F4,SC},
{GS4,SC},
{F4,SC},
{D4,SC},
{F4,SC},
{B3,SC/2},
{0,SC/2},
{F4,SC},
{E4,SC},
{D4,SC},

//21
{C4,SC},
{E4,SC},
{LA4,SC},
{E4,SC},
{C4,SC},
{E4,SC},
{LA3,SC},
{C4,SC},
{DS4,SC},
{C4,SC},
{LA3,SC},
{C4,SC},
{FS3,SC/2},
{0,SC/2},
{C4,SC},
{B3,SC},
{LA3,SC},

//22

{GS3,SC},
{0,SC},
{B4,SC},
{0,SC},
{GS4,SC},
{0,SC},
{E4,SC},
{0,SC},
{0,SC},
{E4,SC},
{LA4,SC},
{C5,SC},
{B4,SC},
{E4,SC},
{B4,SC},
{D5,SC},

//23

{C5,SC},
{LA4,SC},
{C5,SC},
{E5,SC},
{D5,SC},
{B4,SC},
{D5,SC},
{F5,SC},
{E5,SC},
{C5,SC},
{E5,SC},
{G5,SC},
{F5,SC},
{E5,SC},
{D5,SC},
{C5,SC},

//24
{B4,SC},
{C5,SC},
{D5,SC},
{E5,SC},
{F5,SC},
{D5,SC},
{GS5,SC},
{D5,SC},
{B5,SC},
{D5,SC},
{C5,SC},
{LA5,SC},
{F5,SC},
{D5,SC},
{B4,SC},
{D5,SC},


//25
{GS4,SC},
{B4,SC},
{C5,SC},
{LA4,SC},
{E4,SC},
{LA4,SC},
{B4,SC},
{GS4,SC},
{LA4,SC},
{E4,SC*1.25},
{0,SC/2},
{C4,SC*1.25},
{0,SC},
{E4,SC*1.5},
{0,SC*1.5},
{LA3,MI},
{0, 100000}
   );

