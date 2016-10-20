#include <Thread.h>
#include <ThreadController.h>
#include <synth.h>
#include "notes.h"
#include "Flash.h"


// define your music tempo
#define BPM 75


//** IMPORTANT: DON'T CHANGE **/
// DURATION OF THE NOTES 
#define SM 60000/BPM  // SEMÍNIMA
#define MI 2*SM       // MÍNIMA
#define CO SM/2       // COLCHEIA
#define SC SM/4       // SEMICOLCHEIA
#define SB 4*SM       // SEMIBREVE
#define GAP 1


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

synth edgar;




class CustomThread: public Thread
{
public:
  int channel;
  int nota=0;
  void setChannel(int c){
    channel = c;
  }
  void run(){
    edgar.mTrigger(channel,melody[nota][0]+32);
    setInterval(melody[nota][1]);
    nota++;
    runned();
  }
};

class CustomThread1: public Thread
{
public:
  int channel;
  int nota=0;
  void setChannel(int c){
    channel = c;
  }
  void run(){
    edgar.mTrigger(channel,melody2[nota][0]+32);
    setInterval(melody2[nota][1]);
    nota++;
    runned();
  }
};





CustomThread a;
CustomThread1 b;
ThreadController c;


void setup() 
{
  Serial.begin(19200);
  edgar.begin(DIFF);

  a.setChannel(1);
  a.setInterval(0);

  
  b.setChannel(0);
  b.setInterval(0);

  //c.setInterval(10);
  c.add(&a);
  c.add(&b);
  

  edgar.setupVoice(0,SQUARE,60,ENVELOPE1,60,64);
  edgar.setupVoice(1,SQUARE,0,ENVELOPE3,64,64);

}

void loop() 
{
  c.run();

}


