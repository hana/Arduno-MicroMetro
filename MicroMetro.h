

/*  * * * * * * * * * * * * * * * * * * * * * * * * * * *
 Created by Hananosuke Takimoto ( hana@qux-jp.com )
* * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef MicroMetro_h
#define MicroMetro_h

#include <inttypes.h>


class MicroMetro {

public:
    MicroMetro();
    MicroMetro(unsigned long interval);
    void setInterval(unsigned long interval);
    uint8_t bang();
    void reset();

private:
  unsigned long  previous_micros, interval_micros, now;

};

#endif

