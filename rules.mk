# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
SPLIT_KEYBOARD = yes

SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no
MUSIC_ENABLE = no

QUANTUM_LIB_SRC += analog.c #include analog file for trackball.h file

POINTING_DEVICE_ENABLE = yes # enable trackball
POINTING_DEVICE_DRIVER = pmw3360 # define trackball driver

SRC += opt_encoder.c #include pmw src 