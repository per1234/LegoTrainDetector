#ifndef LegoTrainDetector_h
#define LegoTrainDetector_h

#include "Arduino.h"
#include "LegoTrain.h"

typedef void (*CallBackFunction) ();

class LegoTrainDetector {
   public:
      typedef enum {
        NOT_DETECTED = 0,
        DETECTED     = 1
      } State;

      LegoTrainDetector(byte detectorPin, unsigned short detectorSensitivity);

      void detectTrain();

      void registerAction(CallBackFunction callBackFunction);
   private:
      byte _detectorPin;
      unsigned short _detectorSensitivity;
};

#endif
