#ifndef _RESOURCES_INCLUDED_
#define _RESOURCES_INCLUDED_

#include <avr/pgmspace.h>
#include "res_font.h"
#include "res_signals.h"
#include "res_logo.h"

const char *messages[5] = {
    "Signal received",
    "Be careful",
    "STOP",
    "YELLOW",
    "KEEP RUNING",
};

const char *signals[9] = {
    signal_train,
    signal_bike,
    signal_hospital,
    signal_ban,
    signal_highway,
    signal_highway,

    signal_ban,
    signal_ban,
    signal_highway
};

#endif /* _RESOURCES_INCLUDED_ */
