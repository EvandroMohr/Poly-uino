#include "Thread.h"
#include "ThreadController.h"
#include "synth.h"
#include "notes.h"
#include "Flash.h"
#include "melody1.h"
#include "melody2.h"
#include "melody3.h"
#include "melody4.h"

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


// Inicializa o sintetizador
synth edgar;

class TrackThread: public Thread
{
public:
  int channel;
  int nota=0;
  void setChannel(int c){
    channel = c;
  }
  void run(){
    switch (channel) {
       case 1:
          //dispara o cannal passando a frequencia
          edgar.mTrigger(channel,melody1[nota][0]+32);
          //define a duração da nota/pausa
          setInterval(melody1[nota][1]);
       break;
       case 2:
          edgar.mTrigger(channel,melody2[nota][0]+32);
          setInterval(melody2[nota][1]);
       break;
       case 3:
          edgar.mTrigger(channel,melody3[nota][0]+32);
          setInterval(melody3[nota][1]);
       break;
       case 4:
          edgar.mTrigger(channel,melody4[nota][0]+32);
          setInterval(melody4[nota][1]);
       break;
    }
    nota++;
    runned();
  }
};


TrackThread a;
TrackThread b;
ThreadController c;


void setup() 
{
  Serial.begin(19200);
  edgar.begin(DIFF);

  // define a melodia do arquivo melody1 no canal 1
  a.setChannel(1);
  a.setInterval(0);

  // define melodia do arquivo melody2 no canal 2
  b.setChannel(2);
  b.setInterval(0);

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


