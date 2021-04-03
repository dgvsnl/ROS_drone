// Generated by gencpp from file brics_actuator/JointConstraint.msg
// DO NOT EDIT!


#ifndef BRICS_ACTUATOR_MESSAGE_JOINTCONSTRAINT_H
#define BRICS_ACTUATOR_MESSAGE_JOINTCONSTRAINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <brics_actuator/JointValue.h>

namespace brics_actuator
{
template <class ContainerAllocator>
struct JointConstraint_
{
  typedef JointConstraint_<ContainerAllocator> Type;

  JointConstraint_()
    : type()
    , value()  {
    }
  JointConstraint_(const ContainerAllocator& _alloc)
    : type(_alloc)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef  ::brics_actuator::JointValue_<ContainerAllocator>  _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::brics_actuator::JointConstraint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::brics_actuator::JointConstraint_<ContainerAllocator> const> ConstPtr;

}; // struct JointConstraint_

typedef ::brics_actuator::JointConstraint_<std::allocator<void> > JointConstraint;

typedef boost::shared_ptr< ::brics_actuator::JointConstraint > JointConstraintPtr;
typedef boost::shared_ptr< ::brics_actuator::JointConstraint const> JointConstraintConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::brics_actuator::JointConstraint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::brics_actuator::JointConstraint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace brics_actuator

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'brics_actuator': ['/home/godanime/catkin_ws/src/brics_actuator/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::brics_actuator::JointConstraint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::brics_actuator::JointConstraint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::JointConstraint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::brics_actuator::JointConstraint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::JointConstraint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::brics_actuator::JointConstraint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::brics_actuator::JointConstraint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f77db04949b26b64f80564df22f00ecb";
  }

  static const char* value(const ::brics_actuator::JointConstraint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf77db04949b26b64ULL;
  static const uint64_t static_value2 = 0xf80564df22f00ecbULL;
};

template<class ContainerAllocator>
struct DataType< ::brics_actuator::JointConstraint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "brics_actuator/JointConstraint";
  }

  static const char* value(const ::brics_actuator::JointConstraint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::brics_actuator::JointConstraint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string type  		#smaller, greater, equal or <, >, =\n\
JointValue value\n\
\n\
================================================================================\n\
MSG: brics_actuator/JointValue\n\
time timeStamp 		#time of the data \n\
string joint_uri\n\
string unit 		#if empy expects si units, you can use boost::unit\n\
float64 value\n\
";
  }

  static const char* value(const ::brics_actuator::JointConstraint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::brics_actuator::JointConstraint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointConstraint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::brics_actuator::JointConstraint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::brics_actuator::JointConstraint_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "value: ";
    s << std::endl;
    Printer< ::brics_actuator::JointValue_<ContainerAllocator> >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BRICS_ACTUATOR_MESSAGE_JOINTCONSTRAINT_H
