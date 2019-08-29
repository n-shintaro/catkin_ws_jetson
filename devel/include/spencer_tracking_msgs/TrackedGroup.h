// Generated by gencpp from file spencer_tracking_msgs/TrackedGroup.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDGROUP_H
#define SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDGROUP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseWithCovariance.h>

namespace spencer_tracking_msgs
{
template <class ContainerAllocator>
struct TrackedGroup_
{
  typedef TrackedGroup_<ContainerAllocator> Type;

  TrackedGroup_()
    : group_id(0)
    , age()
    , centerOfGravity()
    , track_ids()  {
    }
  TrackedGroup_(const ContainerAllocator& _alloc)
    : group_id(0)
    , age()
    , centerOfGravity(_alloc)
    , track_ids(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _group_id_type;
  _group_id_type group_id;

   typedef ros::Duration _age_type;
  _age_type age;

   typedef  ::geometry_msgs::PoseWithCovariance_<ContainerAllocator>  _centerOfGravity_type;
  _centerOfGravity_type centerOfGravity;

   typedef std::vector<uint64_t, typename ContainerAllocator::template rebind<uint64_t>::other >  _track_ids_type;
  _track_ids_type track_ids;





  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> const> ConstPtr;

}; // struct TrackedGroup_

typedef ::spencer_tracking_msgs::TrackedGroup_<std::allocator<void> > TrackedGroup;

typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedGroup > TrackedGroupPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::TrackedGroup const> TrackedGroupConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_tracking_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'spencer_tracking_msgs': ['/home/nvidia/catkin_ws/src/pedsim_ros/2ndparty/spencer_messages/spencer_tracking_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6a5318bfb8e49948a4dc15c1267f7e54";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6a5318bfb8e49948ULL;
  static const uint64_t static_value2 = 0xa4dc15c1267f7e54ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/TrackedGroup";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message defining a tracked group\n\
#\n\
\n\
uint64      group_id        # unique identifier of the target, consistent over time\n\
\n\
duration    age             # age of the group\n\
\n\
geometry_msgs/PoseWithCovariance    centerOfGravity   # mean and covariance of the group (calculated from its person tracks)\n\
\n\
uint64[]    track_ids       # IDs of the tracked persons in this group. See srl_tracking_msgs/TrackedPersons\n\
================================================================================\n\
MSG: geometry_msgs/PoseWithCovariance\n\
# This represents a pose in free space with uncertainty.\n\
\n\
Pose pose\n\
\n\
# Row-major representation of the 6x6 covariance matrix\n\
# The orientation parameters use a fixed-axis representation.\n\
# In order, the parameters are:\n\
# (x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis)\n\
float64[36] covariance\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.group_id);
      stream.next(m.age);
      stream.next(m.centerOfGravity);
      stream.next(m.track_ids);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TrackedGroup_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::TrackedGroup_<ContainerAllocator>& v)
  {
    s << indent << "group_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.group_id);
    s << indent << "age: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.age);
    s << indent << "centerOfGravity: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseWithCovariance_<ContainerAllocator> >::stream(s, indent + "  ", v.centerOfGravity);
    s << indent << "track_ids[]" << std::endl;
    for (size_t i = 0; i < v.track_ids.size(); ++i)
    {
      s << indent << "  track_ids[" << i << "]: ";
      Printer<uint64_t>::stream(s, indent + "  ", v.track_ids[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_TRACKEDGROUP_H
