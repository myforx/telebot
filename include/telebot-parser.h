/*
 * telebot
 *
 * Copyright (c) 2015 Elmurod Talipov.
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __TELEBOT_PARSER_H__
#define __TELEBOT_PARSER_H__

#include <json_object.h>
#include <telebot-api.h>
#include <telebot-core-api.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _telebot_update_t_ {
    int update_id;
    telebot_message_t message;
} telebot_update_t;

struct json_object *telebot_parser_str_to_obj(char *data);

/** Get update from Json Object */
telebot_error_e telebot_parser_get_updates(char *data, telebot_update_t *updates,
        int *count);

/** Parse message object */
telebot_error_e telebot_parser_get_message(struct json_object *obj,
        telebot_message_t *msg);

/** Parse user object */
telebot_error_e telebot_parser_get_user(struct json_object *obj,
        telebot_user_t *user);

/** Prase chat object */
telebot_error_e telebot_parser_get_chat(struct json_object *obj,
        telebot_chat_t *chat);

/** Prase audio object */
telebot_error_e telebot_parser_get_audio(struct json_object *obj,
        telebot_audio_t *audio);

/** Prase document object */
telebot_error_e telebot_parser_get_document(struct json_object *obj,
        telebot_document_t *document);

/** Prase photos object */
telebot_error_e telebot_parser_get_photos(struct json_object *obj,
        telebot_photosize_t photos[]);

/** Prase sticker object */
telebot_error_e telebot_parser_get_sticker(struct json_object *obj,
        telebot_sticker_t *sticker);

/** Prase video object */
telebot_error_e telebot_parser_get_video(struct json_object *obj,
        telebot_video_t *video);

/** Prase voice object */
telebot_error_e telebot_parser_get_voice(struct json_object *obj,
        telebot_voice_t *voice);

/** Prase contact object */
telebot_error_e telebot_parser_get_contact(struct json_object *obj,
        telebot_contact_t *contact);

/** Prase location object */
telebot_error_e telebot_parser_get_location(struct json_object *obj,
        telebot_location_t *location);

#ifdef __cplusplus
}
#endif

#endif /* __TELEBOT_PARSER_H__ */

