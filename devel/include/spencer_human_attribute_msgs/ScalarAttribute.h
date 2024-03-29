// Generated by gencpp from file spencer_human_attribute_msgs/ScalarAttribute.msg
// DO NOT EDIT!


#ifndef SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_SCALARATTRIBUTE_H
#define SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_SCALARATTRIBUTE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace spencer_human_attribute_msgs
{
template <class ContainerAllocator>
struct ScalarAttribute_
{
  typedef ScalarAttribute_<ContainerAllocator> Type;

  ScalarAttribute_()
    : subject_id(0)
    , type()
    , values()
    , confidences()  {
    }
  ScalarAttribute_(const ContainerAllocator& _alloc)
    : subject_id(0)
    , type(_alloc)
    , values(_alloc)
    , confidences(_alloc)  {
  (void)_alloc;
    }



   typedef uint64_t _subject_id_type;
  _subject_id_type subject_id;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _values_type;
  _values_type values;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _confidences_type;
  _confidences_type confidences;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  PERSON_HEIGHT;

  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const> ConstPtr;

}; // struct ScalarAttribute_

typedef ::spencer_human_attribute_msgs::ScalarAttribute_<std::allocator<void> > ScalarAttribute;

typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute > ScalarAttributePtr;
typedef boost::shared_ptr< ::spencer_human_attribute_msgs::ScalarAttribute const> ScalarAttributeConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      ScalarAttribute_<ContainerAllocator>::PERSON_HEIGHT =
        
          "person_height"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace spencer_human_attribute_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'spencer_human_attribute_msgs': ['/home/nvidia/catkin_ws/src/pedsim_ros/2ndparty/spencer_messages/spencer_human_attribute_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e10ac15d3bace9d3787523d1dd728fe0";
  }

  static const char* value(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe10ac15d3bace9d3ULL;
  static const uint64_t static_value2 = 0x787523d1dd728fe0ULL;
};

template<class ContainerAllocator>
struct DataType< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "spencer_human_attribute_msgs/ScalarAttribute";
  }

  static const char* value(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint64                  subject_id              # either an observation ID or a track ID (if information has been integrated over time); should be encoded in topic name\n\
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

  static const char* value(const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.subject_id);
      stream.next(m.type);
      stream.next(m.values);
      stream.next(m.confidences);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ScalarAttribute_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::spencer_human_attribute_msgs::ScalarAttribute_<ContainerAllocator>& v)
  {
    s << indent << "subject_id: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.subject_id);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.values[i]);
    }
    s << indent << "confidences[]" << std::endl;
    for (size_t i = 0; i < v.confidences.size(); ++i)
    {
      s << indent << "  confidences[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidences[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SPENCER_HUMAN_ATTRIBUTE_MSGS_MESSAGE_SCALARATTRIBUTE_H
