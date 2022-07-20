#include "mgos.h"
#include "mgos_bgps.h"

static void mg_gps_position_changed(int ev, void *ev_data, void *userdata) {
  struct mgos_bgps_position_changed *data = (struct mgos_bgps_position_changed *)ev_data;
  LOG(LL_INFO, ("GPS: lat %3f, lng %3f (accuracy %2f)",
    data->cur_pos.location.latitude,
    data->cur_pos.location.longitude,
    data->cur_pos.accuracy));

  (void) ev;
  (void) userdata;
}

enum mgos_app_init_result mgos_app_init(void) {
  mgos_event_add_handler(MGOS_EV_BGPS_POSITION_CHANGED, mg_gps_position_changed, NULL);
  return MGOS_APP_INIT_SUCCESS;
}