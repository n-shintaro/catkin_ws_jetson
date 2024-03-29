// Generated by gencpp from file pedsim_srvs/SetAllAgentsStateResponse.msg
// DO NOT EDIT!


#ifndef PEDSIM_SRVS_MESSAGE_SETALLAGENTSSTATERESPONSE_H
#define PEDSIM_SRVS_MESSAGE_SETALLAGENTSSTATERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace pedsim_srvs
{
template <class ContainerAllocator>
struct SetAllAgentsStateResponse_
{
  typedef SetAllAgentsStateResponse_<ContainerAllocator> Type;

  SetAllAgentsStateResponse_()
    : finished(false)  {
    }
  SetAllAgentsStateResponse_(const ContainerAllocator& _alloc)
    : finished(false)  {
  (void)_alloc;
    }



   typedef uint8_t _finished_type;
  _finished_type finished;





  typedef boost::shared_ptr< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetAllAgentsStateResponse_

typedef ::pedsim_srvs::SetAllAgentsStateResponse_<std::allocator<void> > SetAllAgentsStateResponse;

typedef boost::shared_ptr< ::pedsim_srvs::SetAllAgentsStateResponse > SetAllAgentsStateResponsePtr;
typedef boost::shared_ptr< ::pedsim_srvs::SetAllAgentsStateResponse const> SetAllAgentsStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pedsim_srvs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'pedsim_msgs': ['/home/nvidia/catkin_ws/src/pedsim_ros/pedsim_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e2797c797e620a950ba704492d72873b";
  }

  static const char* value(const ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe2797c797e620a95ULL;
  static const uint64_t static_value2 = 0x0ba704492d72873bULL;
};

template<class ContainerAllocator>
struct DataType< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pedsim_srvs/SetAllAgentsStateResponse";
  }

  static const char* value(const ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool finished\n\
\n\
";
  }

  static const char* value(const ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.finished);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetAllAgentsStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pedsim_srvs::SetAllAgentsStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "finished: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.finished);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PEDSIM_SRVS_MESSAGE_SETALLAGENTSSTATERESPONSE_H
