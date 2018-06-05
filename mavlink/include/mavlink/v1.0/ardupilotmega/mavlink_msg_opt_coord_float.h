#pragma once
// MESSAGE OPT_COORD_FLOAT PACKING

#define MAVLINK_MSG_ID_OPT_COORD_FLOAT 11029

MAVPACKED(
typedef struct __mavlink_opt_coord_float_t {
 uint64_t time_usec; /*< Timestamp (microseconds since UNIX epoch or microseconds since system boot)*/
 uint32_t hdg_acc; /*< Heading / track uncertainty in degrees * 1e5.*/
}) mavlink_opt_coord_float_t;

#define MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN 12
#define MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN 12
#define MAVLINK_MSG_ID_11029_LEN 12
#define MAVLINK_MSG_ID_11029_MIN_LEN 12

#define MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC 5
#define MAVLINK_MSG_ID_11029_CRC 5



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_OPT_COORD_FLOAT { \
    11029, \
    "OPT_COORD_FLOAT", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_opt_coord_float_t, time_usec) }, \
         { "hdg_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_opt_coord_float_t, hdg_acc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_OPT_COORD_FLOAT { \
    "OPT_COORD_FLOAT", \
    2, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_opt_coord_float_t, time_usec) }, \
         { "hdg_acc", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_opt_coord_float_t, hdg_acc) }, \
         } \
}
#endif

/**
 * @brief Pack a opt_coord_float message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param hdg_acc Heading / track uncertainty in degrees * 1e5.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_opt_coord_float_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint32_t hdg_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, hdg_acc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN);
#else
    mavlink_opt_coord_float_t packet;
    packet.time_usec = time_usec;
    packet.hdg_acc = hdg_acc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPT_COORD_FLOAT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC);
}

/**
 * @brief Pack a opt_coord_float message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param hdg_acc Heading / track uncertainty in degrees * 1e5.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_opt_coord_float_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint32_t hdg_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, hdg_acc);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN);
#else
    mavlink_opt_coord_float_t packet;
    packet.time_usec = time_usec;
    packet.hdg_acc = hdg_acc;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_OPT_COORD_FLOAT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC);
}

/**
 * @brief Encode a opt_coord_float struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param opt_coord_float C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_opt_coord_float_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_opt_coord_float_t* opt_coord_float)
{
    return mavlink_msg_opt_coord_float_pack(system_id, component_id, msg, opt_coord_float->time_usec, opt_coord_float->hdg_acc);
}

/**
 * @brief Encode a opt_coord_float struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param opt_coord_float C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_opt_coord_float_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_opt_coord_float_t* opt_coord_float)
{
    return mavlink_msg_opt_coord_float_pack_chan(system_id, component_id, chan, msg, opt_coord_float->time_usec, opt_coord_float->hdg_acc);
}

/**
 * @brief Send a opt_coord_float message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 * @param hdg_acc Heading / track uncertainty in degrees * 1e5.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_opt_coord_float_send(mavlink_channel_t chan, uint64_t time_usec, uint32_t hdg_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, hdg_acc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPT_COORD_FLOAT, buf, MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC);
#else
    mavlink_opt_coord_float_t packet;
    packet.time_usec = time_usec;
    packet.hdg_acc = hdg_acc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPT_COORD_FLOAT, (const char *)&packet, MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC);
#endif
}

/**
 * @brief Send a opt_coord_float message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_opt_coord_float_send_struct(mavlink_channel_t chan, const mavlink_opt_coord_float_t* opt_coord_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_opt_coord_float_send(chan, opt_coord_float->time_usec, opt_coord_float->hdg_acc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPT_COORD_FLOAT, (const char *)opt_coord_float, MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC);
#endif
}

#if MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_opt_coord_float_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint32_t hdg_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, hdg_acc);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPT_COORD_FLOAT, buf, MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC);
#else
    mavlink_opt_coord_float_t *packet = (mavlink_opt_coord_float_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->hdg_acc = hdg_acc;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_OPT_COORD_FLOAT, (const char *)packet, MAVLINK_MSG_ID_OPT_COORD_FLOAT_MIN_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN, MAVLINK_MSG_ID_OPT_COORD_FLOAT_CRC);
#endif
}
#endif

#endif

// MESSAGE OPT_COORD_FLOAT UNPACKING


/**
 * @brief Get field time_usec from opt_coord_float message
 *
 * @return Timestamp (microseconds since UNIX epoch or microseconds since system boot)
 */
static inline uint64_t mavlink_msg_opt_coord_float_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field hdg_acc from opt_coord_float message
 *
 * @return Heading / track uncertainty in degrees * 1e5.
 */
static inline uint32_t mavlink_msg_opt_coord_float_get_hdg_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Decode a opt_coord_float message into a struct
 *
 * @param msg The message to decode
 * @param opt_coord_float C-struct to decode the message contents into
 */
static inline void mavlink_msg_opt_coord_float_decode(const mavlink_message_t* msg, mavlink_opt_coord_float_t* opt_coord_float)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    opt_coord_float->time_usec = mavlink_msg_opt_coord_float_get_time_usec(msg);
    opt_coord_float->hdg_acc = mavlink_msg_opt_coord_float_get_hdg_acc(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN? msg->len : MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN;
        memset(opt_coord_float, 0, MAVLINK_MSG_ID_OPT_COORD_FLOAT_LEN);
    memcpy(opt_coord_float, _MAV_PAYLOAD(msg), len);
#endif
}
