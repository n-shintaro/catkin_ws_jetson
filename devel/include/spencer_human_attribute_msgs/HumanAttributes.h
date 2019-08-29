// Generated by gencpp from file spencer_human_attribute_msgs/HumanAttributes.msg
// DO NOT EDIT!


#ifndef SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_HUMANATTRIBUTES_H
#define SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_HUMANATTRIBUTES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <spencer_human_attribute_msgs/CategoricalAttribute.h>
#include <spencer_human_attribute_msgs/ScalarAttribute.h>

namespace spencer_human_attribute_msgs
{
template <class ContainerAllocator>
struct HumanAttributes_
{
  typedef HumanAttributes_<ContainerAllocator> Type;

  HumanAttributes_()
    : header()
    , categoricalAttributes()
    , scalarAttributes()  {
    }
  HumanAttributes_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , categoricalAttributes(_alloc)
    , scalarAttributes(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >::other >  _categoricalAttributes_type;
  _categoricalAttributes_type categoricalAttributes;

   typedef std::vector< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >::other >  _scalarAttributes_type;
  _scalarAttributes_type scalarAttributes;





  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> const> ConstPtr;

}; // struct HumanAttributes_

typedef ::spencer_human_attribute_msgs::HumanAttributes_<std::allocator<void> > HumanAttributes;

typedef boost::shared_ptr< ::spencer_human_attribute_msgs::HumanAttributes > HumanAttributesPtr;
typedef boost::shared_ptr< ::spencer_human_attribute_msgs::HumanAttributes const> HumanAttributesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_human_attribute_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'spencer_human_attribute_msgs': ['/home/nvidia/catkin_ws/src/pedsim_ros/2ndparty/spencer_messages/spencer_human_attribute_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ce67039f788378180e089c471174c58";
  }

  static const char* value(const ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ce67039f7883781ULL;
  static const uint64_t static_value2 = 0x80e089c471174c58ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_human_attribute_msgs/HumanAttributes";
  }

  static const char* value(const ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
# One entry per attribute type per person\n\
CategoricalAttribute[]   categoricalAttributes\n\
ScalarAttribute[]       scalarAttributes\n\
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
MSG: spencer_human_attribute_msgs/CategoricalAttribute\n\
uint64                  subject_id              # either an observation ID or a track ID (if information has been integrated over time); should be encoded in topic name\n\
string                  type                    # type of the attribute, see constants below\n\
\n\
string[]                values                  # values, each value also should have a confidence, highest-confidence attribute should come first\n\
float32[]               confidences             # corresponding confidences should sum up to 1.0, highest confidence comes first\n\
\n\
\n\
##################################################\n\
### Constants for categorical attribute types. ###\n\
##################################################\n\
\n\
string      GENDER        = gender\n\
string      AGE_GROUP     = age_group\n\
\n\
###################################################\n\
### Constants for categorical attribute values. ###\n\
###################################################\n\
\n\
string      GENDER_MALE             = male\n\
string      GENDER_FEMALE           = female\n\
\n\
# Age groups are based upon the categories from the \"Images Of Groups\" RGB database\n\
string      AGE_GROUP_0_TO_2        = 0-2\n\
string      AGE_GROUP_3_TO_7        = 3-7\n\
string      AGE_GROUP_8_TO_12       = 8-12\n\
string      AGE_GROUP_13_TO_19      = 13-19\n\
string      AGE_GROUP_20_TO_36      = 20-36\n\
string      AGE_GROUP_37_TO_65      = 37-65\n\
string      AGE_GROUP_66_TO_99      = 66-99\n\
\n\
\n\
\n\
\n\
================================================================================\n\
MSG: spencer_human_attribute_msgs/ScalarAttribute\n\
uint64                  subject_id              # either an observation ID or a track ID (if information has been integrated over time); should be encoded in topic name\n\
string                  type                    # type of the attribute, see constants below\n\
\n\
float32[]               values                  # values, each value also should have a confidence; highest-confidence value comes first!\n\
float32[]               confidences             # corresponding confidences should sum up to 1.0\n\
\n\
\n\
###########################################\n\
### Constants for scalar attribute types. #\n\
###########################################\n\
\n\
string      PERSON_HEIGHT        = person_height\n\
";
  }

  static const char* value(const ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.categoricalAttributes);
      stream.next(m.scalarAttributes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HumanAttributes_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_human_attribute_msgs::HumanAttributes_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "categoricalAttributes[]" << std::endl;
    for (size_t i = 0; i < v.categoricalAttributes.size(); ++i)
    {
      s << indent << "  categoricalAttributes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_human_attribute_msgs::CategoricalAttribute_<ContainerAllocator> >::stream(s, indent + "    ", v.categoricalAttributes[i]);
    }
    s << indent << "scalarAttributes[]" << std::endl;
    for (size_t i = 0; i < v.scalarAttributes.size(); ++i)
    {
      s << indent << "  scalarAttributes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >::stream(s, indent + "    ", v.scalarAttributes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_HUMANATTRIBUTES_H
