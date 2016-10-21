#include "Thread.h"
#include "ThreadController.h"
#include "synth.h"
#include "notes.h"
#include "Flash.h"
#include "melody1.h"
#include "melody2.h"

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
  

  /**
   * setupVoice(
   *  voice[0-3] 
   *  waveform[SINE,TRIANGLE,SQUARE,SAW,RAMP,NOISE] 
   *  pitch[0-127], 
   *  envelope[ENVELOPE0-ENVELOPE3]
   *  length[0-127]
   *  mod[0-127, 64=no mod])
   *  
   */
  edgar.setupVoice(0,SQUARE,60,ENVELOPE1,60,64);
  edgar.setupVoice(1,TRIANGLE,0,ENVELOPE3,64,64);

}

void loop() 
{
  c.run();
}


