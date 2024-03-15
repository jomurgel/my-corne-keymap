# Lighting
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes

# Enable Via
VIA_ENABLE = yes

# Reduce file size.
EXTRAFLAGS += -flto
LTO_ENABLE = yes
COMMAND_ENABLE = no
SWAP_HANDS_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
EXTRAKEY_ENABLE = no
AVR_USE_MINIMAL_PRINTF = yes
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no
MAGIC_ENABLE = no

# Enable OLED + BONGOCAT!
OLED_ENABLE = yes
WPM_ENABLE = no
SRC += ./oled/oled-bongocat.c ./oled/oled-icons.c

# Enable autoshift
AUTO_SHIFT_ENABLE = no

# Disable mousekey
MOUSEKEY_ENABLE = no

# Enable Tap Dance
TAP_DANCE_ENABLE = no
