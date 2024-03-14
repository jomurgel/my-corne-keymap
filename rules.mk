# Lighting
RGBLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes

# Reduce file size.
EXTRAFLAGS += -flto
LTO_ENABLE = yes

# Enable OLED + BONGOCAT!
OLED_ENABLE = yes
WPM_ENABLE = no
SRC += ./oled/oled-bongocat.c ./oled/oled-icons.c

# Enable autoshift
AUTO_SHIFT_ENABLE = yes

# Disable mousekey
MOUSEKEY_ENABLE = no

# Enable Tap Dance
TAP_DANCE_ENABLE = no
