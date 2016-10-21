#define BPM 82
#define SM 60000/BPM  // SEMÍNIMA
#define MI 2*SM       // MÍNIMA
#define CO SM/2       // COLCHEIA
#define SC SM/4       // SEMICOLCHEIA
#define FU SM/8       // FUSA
#define SF SM/16      // SEMIFUSA
#define SB 4*SM       // SEMIBREVE

// forth channel melody 
FLASH_TABLE(int, melody4, 2,

{0,100000},
);
