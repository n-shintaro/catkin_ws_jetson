// Generated by gencpp from file spencer_vision_msgs/PersonImages.msg
// DO NOT EDIT!


#ifndef SPENCER_VISION_MSGS_MESSAGE_PERSONIMAGES_H
#define SPENCER_VISION_MSGS_MESSAGE_PERSONIMAGES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <spencer_vision_msgs/PersonImage.h>

namespace spencer_vision_msgs
{
template <class ContainerAllocator>
struct PersonImages_
{
  typedef PersonImages_<ContainerAllocator> Type;

  PersonImages_()
    : header()
    , elements()  {
    }
  PersonImages_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , elements(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::spencer_vision_msgs::PersonImage_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::spencer_vision_msgs::PersonImage_<ContainerAllocator> >::other >  _elements_type;
  _elements_type elements;





  typedef boost::shared_ptr< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> const> ConstPtr;

}; // struct PersonImages_

typedef ::spencer_vision_msgs::PersonImages_<std::allocator<void> > PersonImages;

typedef boost::shared_ptr< ::spencer_vision_msgs::PersonImages > PersonImagesPtr;
typedef boost::shared_ptr< ::spencer_vision_msgs::PersonImages const> PersonImagesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_vision_msgs::PersonImages_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'spencer_vision_msgs': ['/home/nvidia/catkin_ws/src/pedsim_ros/2ndparty/spencer_messages/spencer_vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c5881059a7a7f9c813cdc2429f1b5cf";
  }

  static const char* value(const ::spencer_vision_msgs::PersonImages_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c5881059a7a7f9cULL;
  static const uint64_t static_value2 = 0x813cdc2429f1b5cfULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_vision_msgs/PersonImages";
  }

  static const char* value(const ::spencer_vision_msgs::PersonImages_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message describing an array of depth or RGB images containing a part of a person (e.g. head, face, full body...), which is usually encoded in the topic title\n\
#\n\
\n\
std_msgs/Header     header\n\
PersonImage[]       elements\n\
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
\n\
================================================================================\n\
MSG: spencer_vision_msgs/PersonImage\n\
# Message describing a depth or RGB image containing a part of a person (e.g. head, face, full body...), which is usually encoded in the topic title\n\
#\n\
\n\
uint64              detection_id\n\
sensor_msgs/Image   image\n\
\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of camera\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
";
  }

  static const char* value(const ::spencer_vision_msgs::PersonImages_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.elements);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PersonImages_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_vision_msgs::PersonImages_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_vision_msgs::PersonImages_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "elements[]" << std::endl;
    for (size_t i = 0; i < v.elements.size(); ++i)
    {
      s << indent << "  elements[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_vision_msgs::PersonImage_<ContainerAllocator> >::stream(s, indent + "    ", v.elements[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_VISION_MSGS_MESSAGE_PERSONIMAGES_H
