# MCU name
MCU = STM32F103

# stm32f103c6专用
# BOOTLOADER = custom
# OPT_DEFS += -DBOOTLOADER_STM32DUINO
# MCU_LDSCRIPT = STM32F103x6_stm32duino_bootloader
# BOARD = STM32_F103_STM32DUINO
# STM32_BOOTLOADER_ADDRESS = 0x80000000
# DFU_ARGS = -d 1EAF:0003 -a 2 -R
# DFU_SUFFIX_ARGS = -v 1EAF -p 0003


#apm32CBT6
# Bootloader selection
# BOOTLOADER = stm32duino

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
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = no        # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output

# 分体设置
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = bitbang