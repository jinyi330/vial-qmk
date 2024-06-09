# MCU name
MCU = STM32F103

# Bootloader selection
# Cannot use `BOOTLOADER = stm32duino` due to the need to override
# `MCU_LDSCRIPT`, therefore all parameters need to be specified here manually.
# OPT_DEFS += -DBOOTLOADER_STM32DUINO
# MCU_LDSCRIPT = STM32F103xB_stm32duino_bootloader
# BOARD = STM32_F103_STM32DUINO
# BOOTLOADER_TYPE = stm32duino
# DFU_ARGS = -d 1EAF:0003 -a 2 -R
# DFU_SUFFIX_ARGS = -v 1EAF -p 0003

MCU_LDSCRIPT = STM32F103xB_uf2
BOARD = STM32_F103_STM32DUINO
BOOTLOADER = tinyuf2
FIRMWARE_FORMAT = uf2
MCU_STARTUP ?= stm32f1xx
# Wildcard to allow APM32 MCU
DFU_SUFFIX_ARGS = -p FFFF -v FFFF
# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

#OLED Support
OLED_ENABLE = yes
OLED_DRIVER = SSD1306