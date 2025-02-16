// Generated by gencpp from file ros_tutorials/IsClap.msg
// DO NOT EDIT!


#ifndef ROS_TUTORIALS_MESSAGE_ISCLAP_H
#define ROS_TUTORIALS_MESSAGE_ISCLAP_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ros_tutorials
{
template <class ContainerAllocator>
struct IsClap_
{
  typedef IsClap_<ContainerAllocator> Type;

  IsClap_()
    : data(0)
    , isclap()  {
    }
  IsClap_(const ContainerAllocator& _alloc)
    : data(0)
    , isclap(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _data_type;
  _data_type data;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _isclap_type;
  _isclap_type isclap;





  typedef boost::shared_ptr< ::ros_tutorials::IsClap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_tutorials::IsClap_<ContainerAllocator> const> ConstPtr;

}; // struct IsClap_

typedef ::ros_tutorials::IsClap_<std::allocator<void> > IsClap;

typedef boost::shared_ptr< ::ros_tutorials::IsClap > IsClapPtr;
typedef boost::shared_ptr< ::ros_tutorials::IsClap const> IsClapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_tutorials::IsClap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_tutorials::IsClap_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_tutorials::IsClap_<ContainerAllocator1> & lhs, const ::ros_tutorials::IsClap_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data &&
    lhs.isclap == rhs.isclap;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_tutorials::IsClap_<ContainerAllocator1> & lhs, const ::ros_tutorials::IsClap_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_tutorials

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ros_tutorials::IsClap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_tutorials::IsClap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorials::IsClap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_tutorials::IsClap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorials::IsClap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_tutorials::IsClap_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_tutorials::IsClap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02936c85ca2c23baf7e87b1b66fbc9e8";
  }

  static const char* value(const ::ros_tutorials::IsClap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02936c85ca2c23baULL;
  static const uint64_t static_value2 = 0xf7e87b1b66fbc9e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_tutorials::IsClap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_tutorials/IsClap";
  }

  static const char* value(const ::ros_tutorials::IsClap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_tutorials::IsClap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 data\n"
"string isclap\n"
;
  }

  static const char* value(const ::ros_tutorials::IsClap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_tutorials::IsClap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
      stream.next(m.isclap);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsClap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_tutorials::IsClap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_tutorials::IsClap_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<int32_t>::stream(s, indent + "  ", v.data);
    s << indent << "isclap: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.isclap);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_TUTORIALS_MESSAGE_ISCLAP_H
