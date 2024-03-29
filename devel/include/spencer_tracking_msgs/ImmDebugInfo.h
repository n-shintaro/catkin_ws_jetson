// Generated by gencpp from file spencer_tracking_msgs/ImmDebugInfo.msg
// DO NOT EDIT!


#ifndef SPENCER_TRACKING_MSGS_MESSAGE_IMMDEBUGINFO_H
#define SPENCER_TRACKING_MSGS_MESSAGE_IMMDEBUGINFO_H


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
struct ImmDebugInfo_
{
  typedef ImmDebugInfo_<ContainerAllocator> Type;

  ImmDebugInfo_()
    : track_id(0)
    , innovation(0.0)
    , CpXX(0.0)
    , CpYY(0.0)
    , CXX(0.0)
    , CYY(0.0)
    , modeProbabilities()  {
    }
  ImmDebugInfo_(const ContainerAllocator& _alloc)
    : track_id(0)
    , innovation(0.0)
    , CpXX(0.0)
    , CpYY(0.0)
    , CXX(0.0)
    , CYY(0.0)
    , modeProbabilities(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _track_id_type;
  _track_id_type track_id;

   typedef double _innovation_type;
  _innovation_type innovation;

   typedef double _CpXX_type;
  _CpXX_type CpXX;

   typedef double _CpYY_type;
  _CpYY_type CpYY;

   typedef double _CXX_type;
  _CXX_type CXX;

   typedef double _CYY_type;
  _CYY_type CYY;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _modeProbabilities_type;
  _modeProbabilities_type modeProbabilities;





  typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> const> ConstPtr;

}; // struct ImmDebugInfo_

typedef ::spencer_tracking_msgs::ImmDebugInfo_<std::allocator<void> > ImmDebugInfo;

typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfo > ImmDebugInfoPtr;
typedef boost::shared_ptr< ::spencer_tracking_msgs::ImmDebugInfo const> ImmDebugInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "824cd837fd158664a6f185fb8316da53";
  }

  static const char* value(const ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x824cd837fd158664ULL;
  static const uint64_t static_value2 = 0xa6f185fb8316da53ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_tracking_msgs/ImmDebugInfo";
  }

  static const char* value(const ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message for passing debug information of filter performance\n\
#\n\
\n\
uint64      track_id        # unique identifier of the target, consistent over time\n\
float64      innovation      # innovation of prediction and associated observation\n\
float64      CpXX            # variance of prediction acc. to x\n\
float64      CpYY            # variance of prediction acc. to y\n\
float64      CXX             # variance of state acc. to x\n\
float64      CYY             # variance of state acc. to y\n\
float64[]    modeProbabilities# array containing mode probabilities\n\
";
  }

  static const char* value(const ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.track_id);
      stream.next(m.innovation);
      stream.next(m.CpXX);
      stream.next(m.CpYY);
      stream.next(m.CXX);
      stream.next(m.CYY);
      stream.next(m.modeProbabilities);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImmDebugInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_tracking_msgs::ImmDebugInfo_<ContainerAllocator>& v)
  {
    s << indent << "track_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.track_id);
    s << indent << "innovation: ";
    Printer<double>::stream(s, indent + "  ", v.innovation);
    s << indent << "CpXX: ";
    Printer<double>::stream(s, indent + "  ", v.CpXX);
    s << indent << "CpYY: ";
    Printer<double>::stream(s, indent + "  ", v.CpYY);
    s << indent << "CXX: ";
    Printer<double>::stream(s, indent + "  ", v.CXX);
    s << indent << "CYY: ";
    Printer<double>::stream(s, indent + "  ", v.CYY);
    s << indent << "modeProbabilities[]" << std::endl;
    for (size_t i = 0; i < v.modeProbabilities.size(); ++i)
    {
      s << indent << "  modeProbabilities[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.modeProbabilities[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_TRACKING_MSGS_MESSAGE_IMMDEBUGINFO_H
