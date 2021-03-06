/* Auto-generated by genmsg_cpp for file /net/home4/harihar.subramanyam/sketchbook/LEDKeepon/led_keepon_ws/sandbox/led_keepon/msg/LEDMessage.msg */
#ifndef LED_KEEPON_MESSAGE_LEDMESSAGE_H
#define LED_KEEPON_MESSAGE_LEDMESSAGE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"


namespace led_keepon
{
template <class ContainerAllocator>
struct LEDMessage_ {
  typedef LEDMessage_<ContainerAllocator> Type;

  LEDMessage_()
  : led_state(0)
  , freq(0)
  , led_param1(0)
  , color1()
  , led_param2(0)
  , color2()
  {
    color1.assign(0);
    color2.assign(0);
  }

  LEDMessage_(const ContainerAllocator& _alloc)
  : led_state(0)
  , freq(0)
  , led_param1(0)
  , color1()
  , led_param2(0)
  , color2()
  {
    color1.assign(0);
    color2.assign(0);
  }

  typedef int32_t _led_state_type;
  int32_t led_state;

  typedef int32_t _freq_type;
  int32_t freq;

  typedef int32_t _led_param1_type;
  int32_t led_param1;

  typedef boost::array<int32_t, 3>  _color1_type;
  boost::array<int32_t, 3>  color1;

  typedef int32_t _led_param2_type;
  int32_t led_param2;

  typedef boost::array<int32_t, 3>  _color2_type;
  boost::array<int32_t, 3>  color2;


  typedef boost::shared_ptr< ::led_keepon::LEDMessage_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::led_keepon::LEDMessage_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LEDMessage
typedef  ::led_keepon::LEDMessage_<std::allocator<void> > LEDMessage;

typedef boost::shared_ptr< ::led_keepon::LEDMessage> LEDMessagePtr;
typedef boost::shared_ptr< ::led_keepon::LEDMessage const> LEDMessageConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::led_keepon::LEDMessage_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::led_keepon::LEDMessage_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace led_keepon

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::led_keepon::LEDMessage_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::led_keepon::LEDMessage_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::led_keepon::LEDMessage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "55920192e5581cc9eac7865606e971e9";
  }

  static const char* value(const  ::led_keepon::LEDMessage_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x55920192e5581cc9ULL;
  static const uint64_t static_value2 = 0xeac7865606e971e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::led_keepon::LEDMessage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "led_keepon/LEDMessage";
  }

  static const char* value(const  ::led_keepon::LEDMessage_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::led_keepon::LEDMessage_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 led_state\n\
int32 freq\n\
int32 led_param1\n\
int32[3] color1\n\
int32 led_param2\n\
int32[3] color2\n\
\n\
";
  }

  static const char* value(const  ::led_keepon::LEDMessage_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::led_keepon::LEDMessage_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::led_keepon::LEDMessage_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.led_state);
    stream.next(m.freq);
    stream.next(m.led_param1);
    stream.next(m.color1);
    stream.next(m.led_param2);
    stream.next(m.color2);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LEDMessage_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::led_keepon::LEDMessage_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::led_keepon::LEDMessage_<ContainerAllocator> & v) 
  {
    s << indent << "led_state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.led_state);
    s << indent << "freq: ";
    Printer<int32_t>::stream(s, indent + "  ", v.freq);
    s << indent << "led_param1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.led_param1);
    s << indent << "color1[]" << std::endl;
    for (size_t i = 0; i < v.color1.size(); ++i)
    {
      s << indent << "  color1[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.color1[i]);
    }
    s << indent << "led_param2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.led_param2);
    s << indent << "color2[]" << std::endl;
    for (size_t i = 0; i < v.color2.size(); ++i)
    {
      s << indent << "  color2[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.color2[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // LED_KEEPON_MESSAGE_LEDMESSAGE_H

