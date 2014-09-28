/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.1 at Sat Sep 27 20:17:56 2014. */

#ifndef PB_OPENXC_PB_H_INCLUDED
#define PB_OPENXC_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _openxc_VehicleMessage_Type {
    openxc_VehicleMessage_Type_RAW = 1,
    openxc_VehicleMessage_Type_TRANSLATED = 2,
    openxc_VehicleMessage_Type_DIAGNOSTIC = 3,
    openxc_VehicleMessage_Type_CONTROL_COMMAND = 4,
    openxc_VehicleMessage_Type_COMMAND_RESPONSE = 5
} openxc_VehicleMessage_Type;

typedef enum _openxc_ControlCommand_Type {
    openxc_ControlCommand_Type_VERSION = 1,
    openxc_ControlCommand_Type_DEVICE_ID = 2,
    openxc_ControlCommand_Type_DIAGNOSTIC = 3,
    openxc_ControlCommand_Type_PASSTHROUGH = 4,
    openxc_ControlCommand_Type_ACCEPTANCE_FILTER_BYPASS = 5,
    openxc_ControlCommand_Type_MESSAGE_FORMAT = 6
} openxc_ControlCommand_Type;

typedef enum _openxc_DiagnosticControlCommand_Action {
    openxc_DiagnosticControlCommand_Action_ADD = 1,
    openxc_DiagnosticControlCommand_Action_CANCEL = 2
} openxc_DiagnosticControlCommand_Action;

typedef enum _openxc_MessageFormatCommand_MessageFormat {
    openxc_MessageFormatCommand_MessageFormat_JSON = 1,
    openxc_MessageFormatCommand_MessageFormat_BINARY = 2
} openxc_MessageFormatCommand_MessageFormat;

typedef enum _openxc_DiagnosticRequest_DecodedType {
    openxc_DiagnosticRequest_DecodedType_NONE = 1,
    openxc_DiagnosticRequest_DecodedType_OBD2 = 2
} openxc_DiagnosticRequest_DecodedType;

typedef enum _openxc_DynamicField_Type {
    openxc_DynamicField_Type_STRING = 1,
    openxc_DynamicField_Type_NUM = 2,
    openxc_DynamicField_Type_BOOL = 3
} openxc_DynamicField_Type;

typedef enum _openxc_TranslatedMessage_Type {
    openxc_TranslatedMessage_Type_STRING = 1,
    openxc_TranslatedMessage_Type_NUM = 2,
    openxc_TranslatedMessage_Type_BOOL = 3,
    openxc_TranslatedMessage_Type_EVENTED_STRING = 4,
    openxc_TranslatedMessage_Type_EVENTED_NUM = 5,
    openxc_TranslatedMessage_Type_EVENTED_BOOL = 6
} openxc_TranslatedMessage_Type;

/* Struct definitions */
typedef struct _openxc_AcceptanceFilterBypassCommand {
    bool has_bus;
    int32_t bus;
    bool has_bypass;
    bool bypass;
} openxc_AcceptanceFilterBypassCommand;

typedef struct _openxc_CommandResponse {
    bool has_type;
    openxc_ControlCommand_Type type;
    bool has_message;
    char message[128];
    bool has_status;
    bool status;
} openxc_CommandResponse;

typedef PB_BYTES_ARRAY_T(8) openxc_DiagnosticRequest_payload_t;

typedef struct _openxc_DiagnosticRequest {
    bool has_bus;
    int32_t bus;
    bool has_message_id;
    uint32_t message_id;
    bool has_mode;
    uint32_t mode;
    bool has_pid;
    uint32_t pid;
    bool has_payload;
    openxc_DiagnosticRequest_payload_t payload;
    bool has_multiple_responses;
    bool multiple_responses;
    bool has_frequency;
    double frequency;
    bool has_name;
    char name[10];
    bool has_decoded_type;
    openxc_DiagnosticRequest_DecodedType decoded_type;
} openxc_DiagnosticRequest;

typedef PB_BYTES_ARRAY_T(8) openxc_DiagnosticResponse_payload_t;

typedef struct _openxc_DiagnosticResponse {
    bool has_bus;
    int32_t bus;
    bool has_message_id;
    uint32_t message_id;
    bool has_mode;
    uint32_t mode;
    bool has_pid;
    uint32_t pid;
    bool has_success;
    bool success;
    bool has_negative_response_code;
    uint32_t negative_response_code;
    bool has_payload;
    openxc_DiagnosticResponse_payload_t payload;
    bool has_value;
    double value;
} openxc_DiagnosticResponse;

typedef struct _openxc_DynamicField {
    bool has_type;
    openxc_DynamicField_Type type;
    bool has_string_value;
    char string_value[100];
    bool has_numeric_value;
    double numeric_value;
    bool has_boolean_value;
    bool boolean_value;
} openxc_DynamicField;

typedef struct _openxc_MessageFormatCommand {
    bool has_format;
    openxc_MessageFormatCommand_MessageFormat format;
} openxc_MessageFormatCommand;

typedef struct _openxc_PassthroughModeControlCommand {
    bool has_bus;
    int32_t bus;
    bool has_enabled;
    bool enabled;
} openxc_PassthroughModeControlCommand;

typedef PB_BYTES_ARRAY_T(8) openxc_RawMessage_data_t;

typedef struct _openxc_RawMessage {
    bool has_bus;
    int32_t bus;
    bool has_message_id;
    uint32_t message_id;
    bool has_data;
    openxc_RawMessage_data_t data;
} openxc_RawMessage;

typedef struct _openxc_DiagnosticControlCommand {
    bool has_request;
    openxc_DiagnosticRequest request;
    bool has_action;
    openxc_DiagnosticControlCommand_Action action;
} openxc_DiagnosticControlCommand;

typedef struct _openxc_TranslatedMessage {
    bool has_type;
    openxc_TranslatedMessage_Type type;
    bool has_name;
    char name[100];
    bool has_value;
    openxc_DynamicField value;
    bool has_event;
    openxc_DynamicField event;
} openxc_TranslatedMessage;

typedef struct _openxc_ControlCommand {
    bool has_type;
    openxc_ControlCommand_Type type;
    bool has_diagnostic_request;
    openxc_DiagnosticControlCommand diagnostic_request;
    bool has_passthrough_mode_request;
    openxc_PassthroughModeControlCommand passthrough_mode_request;
    bool has_acceptance_filter_bypass_command;
    openxc_AcceptanceFilterBypassCommand acceptance_filter_bypass_command;
    bool has_message_format_command;
    openxc_MessageFormatCommand message_format_command;
} openxc_ControlCommand;

typedef struct _openxc_VehicleMessage {
    bool has_type;
    openxc_VehicleMessage_Type type;
    bool has_raw_message;
    openxc_RawMessage raw_message;
    bool has_translated_message;
    openxc_TranslatedMessage translated_message;
    bool has_diagnostic_response;
    openxc_DiagnosticResponse diagnostic_response;
    bool has_control_command;
    openxc_ControlCommand control_command;
    bool has_command_response;
    openxc_CommandResponse command_response;
} openxc_VehicleMessage;

/* Default values for struct fields */

/* Initializer values for message structs */
#define openxc_VehicleMessage_init_default       {false, (openxc_VehicleMessage_Type)0, false, openxc_RawMessage_init_default, false, openxc_TranslatedMessage_init_default, false, openxc_DiagnosticResponse_init_default, false, openxc_ControlCommand_init_default, false, openxc_CommandResponse_init_default}
#define openxc_RawMessage_init_default           {false, 0, false, 0, false, {0, {0}}}
#define openxc_ControlCommand_init_default       {false, (openxc_ControlCommand_Type)0, false, openxc_DiagnosticControlCommand_init_default, false, openxc_PassthroughModeControlCommand_init_default, false, openxc_AcceptanceFilterBypassCommand_init_default, false, openxc_MessageFormatCommand_init_default}
#define openxc_DiagnosticControlCommand_init_default {false, openxc_DiagnosticRequest_init_default, false, (openxc_DiagnosticControlCommand_Action)0}
#define openxc_PassthroughModeControlCommand_init_default {false, 0, false, 0}
#define openxc_AcceptanceFilterBypassCommand_init_default {false, 0, false, 0}
#define openxc_MessageFormatCommand_init_default {false, (openxc_MessageFormatCommand_MessageFormat)0}
#define openxc_CommandResponse_init_default      {false, (openxc_ControlCommand_Type)0, false, "", false, 0}
#define openxc_DiagnosticRequest_init_default    {false, 0, false, 0, false, 0, false, 0, false, {0, {0}}, false, 0, false, 0, false, "", false, (openxc_DiagnosticRequest_DecodedType)0}
#define openxc_DiagnosticResponse_init_default   {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, {0, {0}}, false, 0}
#define openxc_DynamicField_init_default         {false, (openxc_DynamicField_Type)0, false, "", false, 0, false, 0}
#define openxc_TranslatedMessage_init_default    {false, (openxc_TranslatedMessage_Type)0, false, "", false, openxc_DynamicField_init_default, false, openxc_DynamicField_init_default}
#define openxc_VehicleMessage_init_zero          {false, (openxc_VehicleMessage_Type)0, false, openxc_RawMessage_init_zero, false, openxc_TranslatedMessage_init_zero, false, openxc_DiagnosticResponse_init_zero, false, openxc_ControlCommand_init_zero, false, openxc_CommandResponse_init_zero}
#define openxc_RawMessage_init_zero              {false, 0, false, 0, false, {0, {0}}}
#define openxc_ControlCommand_init_zero          {false, (openxc_ControlCommand_Type)0, false, openxc_DiagnosticControlCommand_init_zero, false, openxc_PassthroughModeControlCommand_init_zero, false, openxc_AcceptanceFilterBypassCommand_init_zero, false, openxc_MessageFormatCommand_init_zero}
#define openxc_DiagnosticControlCommand_init_zero {false, openxc_DiagnosticRequest_init_zero, false, (openxc_DiagnosticControlCommand_Action)0}
#define openxc_PassthroughModeControlCommand_init_zero {false, 0, false, 0}
#define openxc_AcceptanceFilterBypassCommand_init_zero {false, 0, false, 0}
#define openxc_MessageFormatCommand_init_zero    {false, (openxc_MessageFormatCommand_MessageFormat)0}
#define openxc_CommandResponse_init_zero         {false, (openxc_ControlCommand_Type)0, false, "", false, 0}
#define openxc_DiagnosticRequest_init_zero       {false, 0, false, 0, false, 0, false, 0, false, {0, {0}}, false, 0, false, 0, false, "", false, (openxc_DiagnosticRequest_DecodedType)0}
#define openxc_DiagnosticResponse_init_zero      {false, 0, false, 0, false, 0, false, 0, false, 0, false, 0, false, {0, {0}}, false, 0}
#define openxc_DynamicField_init_zero            {false, (openxc_DynamicField_Type)0, false, "", false, 0, false, 0}
#define openxc_TranslatedMessage_init_zero       {false, (openxc_TranslatedMessage_Type)0, false, "", false, openxc_DynamicField_init_zero, false, openxc_DynamicField_init_zero}

/* Field tags (for use in manual encoding/decoding) */
#define openxc_AcceptanceFilterBypassCommand_bus_tag 1
#define openxc_AcceptanceFilterBypassCommand_bypass_tag 2
#define openxc_CommandResponse_type_tag          1
#define openxc_CommandResponse_message_tag       2
#define openxc_CommandResponse_status_tag        3
#define openxc_DiagnosticRequest_bus_tag         1
#define openxc_DiagnosticRequest_message_id_tag  2
#define openxc_DiagnosticRequest_mode_tag        3
#define openxc_DiagnosticRequest_pid_tag         4
#define openxc_DiagnosticRequest_payload_tag     5
#define openxc_DiagnosticRequest_multiple_responses_tag 6
#define openxc_DiagnosticRequest_frequency_tag   7
#define openxc_DiagnosticRequest_name_tag        8
#define openxc_DiagnosticRequest_decoded_type_tag 9
#define openxc_DiagnosticResponse_bus_tag        1
#define openxc_DiagnosticResponse_message_id_tag 2
#define openxc_DiagnosticResponse_mode_tag       3
#define openxc_DiagnosticResponse_pid_tag        4
#define openxc_DiagnosticResponse_success_tag    5
#define openxc_DiagnosticResponse_negative_response_code_tag 6
#define openxc_DiagnosticResponse_payload_tag    7
#define openxc_DiagnosticResponse_value_tag      8
#define openxc_DynamicField_type_tag             1
#define openxc_DynamicField_string_value_tag     2
#define openxc_DynamicField_numeric_value_tag    3
#define openxc_DynamicField_boolean_value_tag    4
#define openxc_MessageFormatCommand_format_tag   1
#define openxc_PassthroughModeControlCommand_bus_tag 1
#define openxc_PassthroughModeControlCommand_enabled_tag 2
#define openxc_RawMessage_bus_tag                1
#define openxc_RawMessage_message_id_tag         2
#define openxc_RawMessage_data_tag               3
#define openxc_DiagnosticControlCommand_request_tag 1
#define openxc_DiagnosticControlCommand_action_tag 2
#define openxc_TranslatedMessage_type_tag        1
#define openxc_TranslatedMessage_name_tag        2
#define openxc_TranslatedMessage_value_tag       3
#define openxc_TranslatedMessage_event_tag       4
#define openxc_ControlCommand_type_tag           1
#define openxc_ControlCommand_diagnostic_request_tag 2
#define openxc_ControlCommand_passthrough_mode_request_tag 3
#define openxc_ControlCommand_acceptance_filter_bypass_command_tag 4
#define openxc_ControlCommand_message_format_command_tag 5
#define openxc_VehicleMessage_type_tag           1
#define openxc_VehicleMessage_raw_message_tag    2
#define openxc_VehicleMessage_translated_message_tag 3
#define openxc_VehicleMessage_diagnostic_response_tag 4
#define openxc_VehicleMessage_control_command_tag 5
#define openxc_VehicleMessage_command_response_tag 6

/* Struct field encoding specification for nanopb */
extern const pb_field_t openxc_VehicleMessage_fields[7];
extern const pb_field_t openxc_RawMessage_fields[4];
extern const pb_field_t openxc_ControlCommand_fields[6];
extern const pb_field_t openxc_DiagnosticControlCommand_fields[3];
extern const pb_field_t openxc_PassthroughModeControlCommand_fields[3];
extern const pb_field_t openxc_AcceptanceFilterBypassCommand_fields[3];
extern const pb_field_t openxc_MessageFormatCommand_fields[2];
extern const pb_field_t openxc_CommandResponse_fields[4];
extern const pb_field_t openxc_DiagnosticRequest_fields[10];
extern const pb_field_t openxc_DiagnosticResponse_fields[9];
extern const pb_field_t openxc_DynamicField_fields[5];
extern const pb_field_t openxc_TranslatedMessage_fields[5];

/* Maximum encoded size of messages (where known) */
#define openxc_VehicleMessage_size               712
#define openxc_RawMessage_size                   27
#define openxc_ControlCommand_size               122
#define openxc_DiagnosticControlCommand_size     76
#define openxc_PassthroughModeControlCommand_size 13
#define openxc_AcceptanceFilterBypassCommand_size 13
#define openxc_MessageFormatCommand_size         6
#define openxc_CommandResponse_size              139
#define openxc_DiagnosticRequest_size            68
#define openxc_DiagnosticResponse_size           56
#define openxc_DynamicField_size                 119
#define openxc_TranslatedMessage_size            350

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
