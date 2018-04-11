#define TTY_COLOR_HIGHLIGHT TTY_COLOR_YELLOW

#define SCORE_GAP_LEADING -0.005
#define SCORE_GAP_TRAILING -0.005
#define SCORE_GAP_INNER -0.01
#define SCORE_MATCH_CONSECUTIVE 1.0
#define SCORE_MATCH_SLASH 0.9
#define SCORE_MATCH_WORD 0.8
#define SCORE_MATCH_CAPITAL 0.7
#define SCORE_MATCH_DOT 0.6



#define KEYBINDINGS \
keybinding_t keybindings[] = {{"\x7f", action_del_char},	/* DEL */\
                                {KEY_CTRL('H'), action_del_char}, /* Backspace (C-H) */\
                                {KEY_CTRL('W'), action_del_word}, /* C-W */\
                                {KEY_CTRL('U'), action_del_all},  /* C-U */\
                                {KEY_CTRL('I'), action_autocomplete}, /* TAB (C-I ) */\
                                {KEY_CTRL('C'), action_exit},	 /* C-C */\
                                {KEY_CTRL('D'), action_exit},	 /* C-D */\
                                {KEY_CTRL('M'), action_emit},	 /* CR */\
                                {KEY_CTRL('P'), action_prev},	 /* C-P */\
                                {KEY_CTRL('N'), action_next},	 /* C-N */\
                                {KEY_CTRL('K'), action_prev},	 /* C-J */\
                                {KEY_CTRL('J'), action_next},	 /* C-K */\
                                {KEY_CTRL('A'), action_beginning},    /* C-A */\
                                {KEY_CTRL('E'), action_end},		 /* C-E */\
\
                                {"\x1b", action_exit},\
                                {"\x1bOD", action_left}, /* LEFT */\
                                {"\x1b[D", action_left}, /* LEFT */\
                                {"\x1bOC", action_right}, /* RIGHT */\
                                {"\x1b[C", action_right}, /* RIGHT */\
                                {"\x1b[A", action_prev}, /* UP */\
                                {"\x1bOA", action_prev}, /* UP */\
                                {"\x1b[B", action_next}, /* DOWN */\
                                {"\x1bOB", action_next}, /* DOWN */\
                                {"\x1b[5~", action_pageup},\
                                {"\x1b[6~", action_pagedown},\
                                {"\x1b[200~", action_ignore},\
                                {"\x1b[201~", action_ignore},\
                                {NULL, NULL}};
