/*
  Copyright (c) 2019 Aromajoin Corporation
	Licensed under the Apache License, Version 2.0 (the "License");
  You may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  @file main.c
  @author Hanh D. TRAN
  @brief Entry of application.
*/

#include <stdio.h>
#include <string.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <esp_system.h>
#include <esp_log.h>

/* @brief tag used for ESP serial console messages */
static const char MAIN_TAG[] = "ASN_MAIN";


/**
 * @brief FreeRTOS task that periodically prints the heap memory available.
 *
 * @note Pure debug information, should not be ever started on production code!
 */
void monitoring_task(void *pvParameter)
{
	for(;;)
  {
		ESP_LOGI(MAIN_TAG, "free heap: %d", esp_get_free_heap_size());
		vTaskDelay(pdMS_TO_TICKS(10000));
	}
}


/**
 * @brief Application setup configuration
 */
void app_setup()
{
  // TODO: Put your initial firmware configurations here
}


void app_main()
{
  // TODO: Start your main tasks here

  /* Simply create a task that monitors free heap memory and it is pinned to APP CPU */
  xTaskCreatePinnedToCore(&monitoring_task, (const char * const)"monitor_task",
                          2048, NULL, 1, NULL, 1);
}
