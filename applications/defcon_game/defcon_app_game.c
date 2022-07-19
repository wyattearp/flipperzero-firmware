#include <furi.h>
#include <gui/gui.h>
#include <input/input.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <furi_hal_resources.h>
#include <furi_hal_gpio.h>

int32_t defcon_game_app() {

    // srand(DWT->CYCCNT);

    // osMessageQueueId_t event_queue = osMessageQueueNew(8, sizeof(TetrisEvent), NULL);

    // TetrisState* tetris_state = malloc(sizeof(TetrisState));

    // ValueMutex state_mutex;
    // if(!init_mutex(&state_mutex, tetris_state, sizeof(TetrisState))) {
    //     FURI_LOG_E("TetrisGame", "cannot create mutex\r\n");
    //     free(tetris_state);
    //     return 255;
    // }

    // // Not doing this eventually causes issues with TimerSvc due to not sleeping/yielding enough in this task
    // TaskHandle_t timer_task = xTaskGetHandle(configTIMER_SERVICE_TASK_NAME);
    // TaskHandle_t curr_task = xTaskGetHandle("Tetris Game");

    // uint32_t origTimerPrio = uxTaskPriorityGet(timer_task);
    // uint32_t myPrio = uxTaskPriorityGet(curr_task);
    // vTaskPrioritySet(timer_task, myPrio + 1);

    // ViewPort* view_port = view_port_alloc();
    // view_port_set_orientation(view_port, ViewPortOrientationVertical);
    // view_port_draw_callback_set(view_port, tetris_game_render_callback, &state_mutex);
    // view_port_input_callback_set(view_port, tetris_game_input_callback, event_queue);

    // // Open GUI and register view_port
    // Gui* gui = furi_record_open("gui");
    // gui_add_view_port(gui, view_port, GuiLayerFullscreen);

    // tetris_state->timer =
    //     osTimerNew(tetris_game_update_timer_callback, osTimerPeriodic, event_queue, NULL);
    // tetris_game_init_state(tetris_state);

    // TetrisEvent event;

    // Piece* newPiece = malloc(sizeof(Piece));
    // uint8_t downRepeatCounter = 0;

    // for(bool processing = true; processing;) {
    //     // This 10U implicitly sets the game loop speed. downRepeatCounter relies on this value
    //     osStatus_t event_status = osMessageQueueGet(event_queue, &event, NULL, 10U);

    //     TetrisState* tetris_state = (TetrisState*)acquire_mutex_block(&state_mutex);

    //     memcpy(newPiece, &tetris_state->currPiece, sizeof(tetris_state->currPiece));
    //     bool wasDownMove = false;

    //     if(!furi_hal_gpio_read(&gpio_button_right)) {
    //         if(downRepeatCounter > 3) {
    //             for(int i = 0; i < 4; i++) {
    //                 newPiece->p[i].y += 1;
    //             }
    //             downRepeatCounter = 0;
    //             wasDownMove = true;
    //         } else {
    //             downRepeatCounter++;
    //         }
    //     }

    //     if(event_status == osOK) {
    //         if(event.type == EventTypeKey) {
    //             if(event.input.type == InputTypePress || event.input.type == InputTypeLong ||
    //                event.input.type == InputTypeRepeat) {
    //                 switch(event.input.key) {
    //                 case InputKeyUp:
    //                     break;
    //                 case InputKeyDown:
    //                     break;
    //                 case InputKeyRight:
    //                     for(int i = 0; i < 4; i++) {
    //                         newPiece->p[i].x += 1;
    //                     }
    //                     break;
    //                 case InputKeyLeft:
    //                     for(int i = 0; i < 4; i++) {
    //                         newPiece->p[i].x -= 1;
    //                     }
    //                     break;
    //                 case InputKeyOk:
    //                     if(tetris_state->gameState == GameStatePlaying) {
    //                         tetris_game_remove_curr_piece(tetris_state);
    //                         tetris_game_try_rotation(tetris_state, newPiece);
    //                         tetris_game_render_curr_piece(tetris_state);
    //                     } else {
    //                         tetris_game_init_state(tetris_state);
    //                     }
    //                     break;
    //                 case InputKeyBack:
    //                     processing = false;
    //                     break;
    //                 }
    //             }
    //         } else if(event.type == EventTypeTick) {
    //             // TODO: This is inverted.  it returns true when the button is not pressed.
    //             // see macro in input.c and do that
    //             if(furi_hal_gpio_read(&gpio_button_right)) {
    //                 for(int i = 0; i < 4; i++) {
    //                     newPiece->p[i].y += 1;
    //                 }
    //                 wasDownMove = true;
    //             }
    //         }
    //     }

    //     tetris_game_process_step(tetris_state, newPiece, wasDownMove);

    //     view_port_update(view_port);
    //     release_mutex(&state_mutex, tetris_state);
    // }

    // osTimerDelete(tetris_state->timer);
    // view_port_enabled_set(view_port, false);
    // gui_remove_view_port(gui, view_port);
    // furi_record_close("gui");
    // view_port_free(view_port);
    // osMessageQueueDelete(event_queue);
    // delete_mutex(&state_mutex);
    // vTaskPrioritySet(timer_task, origTimerPrio);
    // free(newPiece);
    // free(tetris_state);

    return 0;
}