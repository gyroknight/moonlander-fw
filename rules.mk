# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
DYNAMIC_MACRO_ENABLE = yes
SRC = matrix.c

# Custom rules
DEBOUNCE_TYPE = sym_eager_pk