# Eddy GPS1 firmware
## Overview
This firmware allows you to easly transform an MCU, like ESP8266 or ESP32, into a GPS tracker.
## Configuration
`mos wifi <ssid> <pwd>`

`mos config-set mqtt.server=<mqtt_server_address>`
`mos config-set mqtt.user=<username>`
`mos config-set mqtt.pass=<password>`

`mos config-set dash.token=<token>`
`mos config-set dash.enable=true`

`mos config-set bgps.gapi.api_key=<YOUR_GOOGLE_API_KEY>`

The library adds the `eddy` section to the device configuration:
```javascript
{
}
```
## To Do
*No improvements scheduled.*