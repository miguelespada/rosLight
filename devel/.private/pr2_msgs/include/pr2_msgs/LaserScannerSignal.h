// Generated by gencpp from file pr2_msgs/LaserScannerSignal.msg
// DO NOT EDIT!


#ifndef PR2_MSGS_MESSAGE_LASERSCANNERSIGNAL_H
#define PR2_MSGS_MESSAGE_LASERSCANNERSIGNAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace pr2_msgs
{
template <class ContainerAllocator>
struct LaserScannerSignal_
{
  typedef LaserScannerSignal_<ContainerAllocator> Type;

  LaserScannerSignal_()
    : header()
    , signal(0)  {
    }
  LaserScannerSignal_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , signal(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _signal_type;
  _signal_type signal;




  typedef boost::shared_ptr< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> const> ConstPtr;

}; // struct LaserScannerSignal_

typedef ::pr2_msgs::LaserScannerSignal_<std::allocator<void> > LaserScannerSignal;

typedef boost::shared_ptr< ::pr2_msgs::LaserScannerSignal > LaserScannerSignalPtr;
typedef boost::shared_ptr< ::pr2_msgs::LaserScannerSignal const> LaserScannerSignalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pr2_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'pr2_msgs': ['/home/miguel/ws_moveit/src/pr2_common/pr2_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "78f41e618127bce049dd6104d9c31dc5";
  }

  static const char* value(const ::pr2_msgs::LaserScannerSignal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x78f41e618127bce0ULL;
  static const uint64_t static_value2 = 0x49dd6104d9c31dc5ULL;
};

template<class ContainerAllocator>
struct DataType< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pr2_msgs/LaserScannerSignal";
  }

  static const char* value(const ::pr2_msgs::LaserScannerSignal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message is emitted by the laser tilt controller when the laser hits\n\
# one limit of its profile.\n\
Header header\n\
\n\
# signal == 0 => Half profile complete\n\
# signal == 1 => Full Profile Complete\n\
int32 signal\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::pr2_msgs::LaserScannerSignal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.signal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LaserScannerSignal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pr2_msgs::LaserScannerSignal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pr2_msgs::LaserScannerSignal_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "signal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.signal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PR2_MSGS_MESSAGE_LASERSCANNERSIGNAL_H
