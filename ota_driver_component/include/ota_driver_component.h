/*
 * ota_driver_component.h
 *
 *  Created on: 9/07/2017
 *      Author: jonas
 */

#ifndef ota_driver_component_H_
#define ota_driver_component_H_
#include "sdkconfig.h"
#include "esp_system.h"
#include "esp_http_client.h"

//handle events from https actions
esp_err_t _http_event_handler(esp_http_client_event_t *evt);

//actual task that performs the check with specified web server- compares "version" in
//.json file with version in running firmware. If external version > than running version.  Then
//downloads the file specified in json as "file".
void check_update_task(void *pvParameter);




#endif /* ota_driver_component_H_ */
