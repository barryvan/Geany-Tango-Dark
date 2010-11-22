# For complete documentation of this file, please see Geany's main documentation
[styling]
# foreground;background;bold;italic
default=0xeeeeec;0x2e3436;false;false
commentline=0x888a85;0x2e3436;false;false
comment=0x888a85;0x2e3436;false;false
commentdoc=0x888a85;0x2e3436;false;false
number=0x8ae234;0x2e3436;false;false
word=0x729fcf;0x2e3436;true;false
word2=0x729fcf;0x2e3436;true;false
string=0x8ae234;0x2e3436;true;false
character=0x8ae234;0x2e3436;true;false
uuid=0x404080;0x2e3436;false;false
preprocessor=0x007F7F;0x2e3436;true;false
operator=0xfcaf3e;0x2e3436;true;false
identifier=0xeeeeec;0x2e3436;false;false
stringeol=0xeeeeec;0xffffff;true;false
verbatim=0xd3d7cf;0x2e3436;false;false
regex=0x3465a4;0x2e3436;false;false
commentlinedoc=0x888a85;0x2e3436;false;false
commentdockeyword=0x888a85;0x2e3436;false;false
commentdockeyworderror=0x888a85;0x2e3436;false;false
globalclass=0xeeeeec;0x2e3436;false;false
styling_within_preprocessor=1;0;false;false

[keywords]
# all items must be in one line
primary=volatile default export goto sizeof typename asm enum bool union NULL FALSE TRUE typedef struct char int float double void unsigned signed long short extern static register auto const if else switch for while do break continue return class new delete inline case

docComment=attention author brief bug class code date def enum example exception file fn namespace note param remarks return see since struct throw todo typedef var version warning union

[settings]
# the following characters are these which a "word" can contains, see documentation
#wordchars=_abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789

# if only single comment char is supported like # in this file, leave comment_close blank
comment_open=/*
comment_close=*/

# set to false if a comment character/string should start at column 0 of a line, true uses any
# indentation of the line, e.g. setting to true causes the following on pressing CTRL+d
	#command_example();
# setting to false would generate this
#	command_example();
# This setting works only for single line comments
comment_use_indent=true

# context action command (please see Geany's main documentation for details)
context_action_cmd=

[build_settings]
# %f will be replaced by the complete filename
# %e will be replaced by the filename without extension
# (use only one of it at one time)
compiler=gcc -Wall -c "%f"
# the -o option is automatically added by Geany
linker=gcc -Wall "%f"
run_cmd="./%e"
