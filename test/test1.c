#include "hal.h"
#include "commander.h"
#include "assert.h"

int main(int argc, char * argv[]) {
	uint16_t state = X_MANUAL | X_ARMED;
	uint16_t stimulus = S_DISARM;
	state = command(state, stimulus);
	return 0;
}

/* vim: set noet fenc= ff=unix sts=0 sw=4 ts=4 : */