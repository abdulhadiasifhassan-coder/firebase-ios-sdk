
/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.5 */

#include "me.nanopb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t firebase_messaging_MessagingClientEvent_fields[6] = {
    PB_FIELD(  2, BYTES   , OPTIONAL, POINTER , FIRST, firebase_messaging_MessagingClientEvent, message_id, message_id, 0),
    PB_FIELD(  3, BYTES   , OPTIONAL, POINTER , OTHER, firebase_messaging_MessagingClientEvent, instance_id, message_id, 0),
    PB_FIELD(  6, BYTES   , OPTIONAL, POINTER , OTHER, firebase_messaging_MessagingClientEvent, package_name, instance_id, 0),
    PB_FIELD( 13, BYTES   , OPTIONAL, POINTER , OTHER, firebase_messaging_MessagingClientEvent, analytics_label, package_name, 0),
    PB_FIELD( 15, BYTES   , OPTIONAL, POINTER , OTHER, firebase_messaging_MessagingClientEvent, composer_label, analytics_label, 0),
    PB_LAST_FIELD
};

const pb_field_t firebase_messaging_MessagingClientEventExtension_fields[2] = {
    PB_FIELD(  1, MESSAGE , OPTIONAL, STATIC  , FIRST, firebase_messaging_MessagingClientEventExtension, messaging_client_event, messaging_client_event, &firebase_messaging_MessagingClientEvent_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(firebase_messaging_MessagingClientEventExtension, messaging_client_event) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_firebase_messaging_MessagingClientEvent_firebase_messaging_MessagingClientEventExtension)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(firebase_messaging_MessagingClientEventExtension, messaging_client_event) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_firebase_messaging_MessagingClientEvent_firebase_messaging_MessagingClientEventExtension)
#endif


/* @@protoc_insertion_point(eof) */