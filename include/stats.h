#pragma once

/* Various statistics. */

struct stats_s {
	unsigned long op_count;
	unsigned long successes;
	unsigned long failures;

	/* Counts to tell if we're making progress or not. */
	unsigned long previous_op_count;	/* combined total of all children */

	// patching
	unsigned long duration;
};

void dump_stats(void);
