#define BPM 82
#define SM 60000/BPM  // SEMÍNIMA
#define MI 2*SM       // MÍNIMA
#define CO SM/2       // COLCHEIA
#define SC SM/4       // SEMICOLCHEIA
#define FU SM/8       // FUSA
#define SF SM/16      // SEMIFUSA
#define SB 4*SM       // SEMIBREVE





// second channel melody 
FLASH_TABLE(int, melody2, 2,

 //1
 
{0,SC},
{LA2,SC},
{0,SC},
{LA3,CO*1.5},
{0,SC},
{GS3,SC},
{0,SC},
{LA3,SC/2},
{0,SC/2},
{E3,SC},
{LA3,SC},
{C4,SC},
{B3,SC},
{E3,SC},
{B3,SC},
{D4,SC},

//2
{C4,SC},
{0,SC},
{LA3,SC},
{0,SC},
{GS3,SC},
{0,SC},
{E3,SC},
{0,SC},
{LA3,SC},
{E3,SC},
{LA3,SC},
{C4,SC},
{B3,SC},
{E3,SC},
{B3,SC},
{D4,SC},

//3
{C4,SC},
{0,SC},
{LA3,SC},
{0,SC},
{C4,SC},
{0,SC},
{LA3,SC},
{0,SC},
{D4,SC},
{LA3,SC},
{F3,SC},
{LA3,SC},
{D3,SC},
{F3,SC},
{LA2,SC},
{C3,SC},

// 4
{B2,SC},
{0,SC},
{D3,SC},
{0,SC},
{G3,SC},
{0,SC},
{B3,CO},
{0,SC},
{G3,SC},
{E3,SC},
{G3,SC},
{C3,SC},
{E3,SC},
{G2,SC},
{B2,SC},

//5
{LA2,SC},
{0,SC},
{C3,SC},
{0,SC},
{D3,SC},
{F3,SC},
{B2,SC},
{D3,SC},
{G2,SC},
{0,SC},
{B2,SC},
{0,SC},
{C3,SC},
{E3,SC},
{LA2,SC},
{C3,SC},

// 6
{F2,SC},
{0,SC},
{D2,SC},
{0,SC},
{G2,SC},
{G3,SC/2},
{0,SC/2},
{F3,SC},
{G3,SC},
{C3,SC},
{G3,SC},
{C4,SC},
{E4,SC},
{D4,SC},
{G3,SC},
{D4,SC},
{F4,SC},


//7
{E4,SC},
{0,SC},
{C4,SC},
{0,SC},
{B3,SC},
{0,SC},
{G3,SC},
{0,SC},
{C4,SC},
{G3,SC},
{C4,SC},
{E4,SC},
{D4,SC},
{G3,SC},
{D4,SC},
{F4,SC},

//8
{E4,SC},
{0,SC},
{C4,SC},
{0,SC},
{0,SM},
{0,SC},
{G4,SC},
{E4,SC},
{G4,SC},
{C4,SC},
{E4,SC},
{G3,SC},
{B3,SC},

//9
{LA3,SC},
{0,SC},
{C4,SC},
{0,SC},
{E4,SC},
{0,SC},
{G4,SC},
{0,SC},
{FS4,SC},
{LA4,SC},
{D4,SC},
{FS4,SC},
{LA3,SC},
{D4,SC},
{FS3,SC},
{LA3,SC},

//10
{G3,SC},
{0,SC},
{B3,SC},
{0,SC},
{D4,SC},
{0,SC},
{FS4,SC},
{0,SC},
{E4,SC},
{G4,SC},
{C4,SC},
{E4,SC},
{G3,SC},
{C4,SC},
{E3,SC},
{G3,SC},

//11
{FS3,SC},
{0,SC},
{LA3,SC},
{0,SC},
{B3,SC},
{0,SC},
{DS4,SC},
{0,SC},
{0,SC},
{E4,SC},
{C4,SC},
{E4,SC},
{LA3,SC},
{C4,SC},
{E4,SC},
{G4,SC},

//12
{FS4,SC},
{D4,SC},
{B3,SC},
{D4,SC},
{G3,SC},
{B3,SC},
{D4,SC},
{FS4,SC},
{E4,SC},
{C4,SC},
{LA3,SC},
{C4,SC},
{FS3,SC},
{LA3,SC},
{C4,CO},

//13
{0,SC},
{B3,SC},
{C4,SC},
{LA3,SC},
{B3,SC},
{0,SC},
{B2,SC},
{0,SC},
{E3,SC/2},
{0,SC/2},
{E4,SC},
{B3,SC},
{G3,SC},
{E3,SC},
{B2,SC},
{G2,SC},
{B2,SC},

//14
{E2,SC},
{0,SC},
{E3,SC},
{0,SC},
{G3,SC},
{0,SC},
{AS3,SC},
{0,SC},
{CS3,CO},
{0,CO},
{0,SC},
{G4,SC},
{F4,SC},
{E4,SC},

//15
{D4,SC},
{0,SC},
{D3,SC},
{0,SC},
{F3,SC},
{0,SC},
{GS3,SC},
{0,SC},
{B2,CO},
{0,CO},
{0,SC},
{F4,SC},
{E4,SC},
{D4,SC},

//16
{C4,SC},
{0,SC},
{C3,SC},
{0,SC},
{E3,SC},
{0,SC},
{FS3,SC},
{0,SC},
{LA2,CO},
{0,CO},
{0,SC},
{E4,SC},
{DS4,SC},
{CS4,SC},

//17
{B3,SC},
{0,SC},
{B2,SC},
{0,SC},
{D3,SC},
{0,SC},
{F3,SC},
{0,SC},
{GS2,CO},
{0,CO},
{0,SC},
{D4,SC},
{C4,SC},
{B3,SC},

//18
{C4,SC},
{0,SC},
{LA3,SC},
{0,SC},
{GS3,SC},
{0,SC},
{E3,SC},
{0,SC},
{LA3,SC/2},
{0,SC/2},
{E3,SC},
{LA3,SC},
{C4,SC},
{B3,SC},
{E3,SC},
{B3,SC},
{D4,SC},

//19
{C4,SC},
{E4,SC},
{LA4,SC},
{E4,SC},
{C4,SC},
{E4,SC},
{LA3,SC},
{C4,SC},
{FS3,SC},
{LA3,SC},
{C4,SC},
{LA3,SC},
{FS3,SC/2},
{0,SC/2},
{LA3,SC},
{DS3,SC},
{FS3,SC},

//20
{E3,SC},
{0,SC},
{GS3,SC},
{0,SC},
{B3,SC},
{0,SC},
{GS3,SC},
{0,SC},
{E3,SC},
{0,SC},
{B2,SC},
{0,SC},
{GS2,SC},
{0,SC},
{E2,SC},
{0,SC},

//21
{LA2,SC},
{0,SC},
{C3,SC},
{0,SC},
{E3,SC},
{0,SC},
{C3,SC},
{0,SC},
{LA2,SC},
{0,SC},
{C3,SC},
{0,SC},
{DS2,CO},
{0,CO},

//22
{0,SC},
{B3,SC},
{GS3,SC},
{E3,SC},
{D3,SC},
{B3,SC},
{GS3,SC},
{D3,SC},
{C3,SC},
{0,SC},
{E3,SC},
{0,SC},
{GS2,SC},
{0,SC},
{E3,SC},
{0,SC},

//23
{LA2,SC},
{0,SC},
{FS3,SC},
{0,SC},
{B2,SC},
{0,SC},
{GS3,SC},
{0,SC},
{C3,SC},
{0,SC},
{LA3,SC},
{0,SC},
{D3,SC},
{0,SC},
{AS3,SC},
{0,SC},

//24
{GS3,SC},
{0,SC},
{F3,SC},
{0,SC},
{D3,SC},
{0,SC},
{B2,SC},
{0,SC},
{GS2,SC},
{0,SC},
{LA2,SC},
{0,SC},
{D2,SC},
{0,SC},
{E2,SC},
{0,SC},

//25
{F2,SC},
{0,SC},
{DS2,SC},
{0,SC},
{E2,SC},
{0,SC},
{E3,SC},
{0,SC},
{LA2,MI+CO});