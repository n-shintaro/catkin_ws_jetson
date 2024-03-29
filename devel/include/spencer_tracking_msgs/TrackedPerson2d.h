// Generated by gencpp from file spencer_tracking_msgs/TrackedPerson2d.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDPERSON2D_H
#define SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDPERSON2D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct TrackedPerson2d_
{
  typedef TrackedPerson2d_<ContainerAllocator> Type;

  TrackedPerson2d_()
    : track_id(0)
    , person_height(0.0)
    , x(0)
    , y(0)
    , w(0)
    , h(0)
    , depth(0.0)  {
    }
  TrackedPerson2d_(const ContainerAllocator& _alloc)
    : track_id(0)
    , person_height(0.0)
    , x(0)
    , y(0)
    , w(0)
    , h(0)
    , depth(0.0)  {
  (void)_alloc;
    }



   typedef uint64_t _track_id_type;
  _track_id_type track_id;

   typedef float _person_height_type;
  _person_height_type person_height;

   typedef int32_t _x_type;
  _x_type x;

   typedef int32_t _y_type;
  _y_type y;

   typedef uint32_t _w_type;
  _w_type w;

   typedef uint32_t _h_type;
  _h_type h;

   typedef float _depth_type;
  _depth_type depth;





  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedPerson2d_

typedef ::spencer_tracking_msgs::TrackedPerson2d_<std::allocator<void> > TrackedPerson2d;

typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPerson2d > TrackedPerson2dPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedPerson2d const> TrackedPerson2dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'spencer_tracking_msgs': ['/home/nvidia/catkin_ws/src/pedsim_ros/2ndparty/spencer_messages/spencer_tracking_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "12df4823c658df0d660d2a5c68ae4aea";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x12df4823c658df0dULL;
  static const uint64_t static_value2 = 0x660d2a5c68ae4aeaULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/TrackedPerson2d";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message defining a 2d image bbox of a tracked person\n\
#\n\
\n\
uint64      track_id        # unique identifier of the target, consistent over time\n\
float32     person_height   # 3d height of person in m\n\
int32       x               # top left corner x of 2d image bbox\n\
int32       y               # top left corner y of 2d image bbox\n\
uint32      w               # width of 2d image bbox\n\
uint32      h               # height of 2d image bbox\n\
float32     depth           # distance from the camera in m\n\
";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.track_id);
      stream.next(m.person_height);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.w);
      stream.next(m.h);
      stream.next(m.depth);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedPerson2d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::TrackedPerson2d_<ContainerAllocator>& v)
  {
    s << indent << "track_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.track_id);
    s << indent << "person_height: ";
    Printer<float>::stream(s, indent + "  ", v.person_height);
    s << indent << "x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.y);
    s << indent << "w: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.w);
    s << indent << "h: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.h);
    s << indent << "depth: ";
    Printer<float>::stream(s, indent + "  ", v.depth);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDPERSON2D_H
