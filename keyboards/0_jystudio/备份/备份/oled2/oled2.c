#include "oled2.h"

// OLED animation
#include "lib/logo.h"
#include "lib/logo.c"

#ifdef OLED_ENABLE
    uint16_t startup_timer; 

    oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
        startup_timer = timer_read();

        return rotation;
    }

    bool oled_task_kb(void) {
        static bool finished_logo = false;

        if ((timer_elapsed(startup_timer) < 5000) && !finished_logo) {
            render_logo();
        } else {
            finished_logo = true;
			
            if (!oled_task_user()) {
                return false;
            }
        }

        return true;
    }
#endif
