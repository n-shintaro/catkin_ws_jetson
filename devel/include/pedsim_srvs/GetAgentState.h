// Generated by gencpp from file pedsim_srvs/GetAgentState.msg
// DO NOT EDIT!


#ifndef PEDSIM_SRVS_MESSAGE_GETAGENTSTATE_H
#define PEDSIM_SRVS_MESSAGE_GETAGENTSTATE_H

#include <ros/service_traits.h>


#include <pedsim_srvs/GetAgentStateRequest.h>
#include <pedsim_srvs/GetAgentStateResponse.h>


namespace pedsim_srvs
{

struct GetAgentState
{

typedef GetAgentStateRequest Request;
typedef GetAgentStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetAgentState
} // namespace pedsim_srvs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::pedsim_srvs::GetAgentState > {
  static const char* value()
  {
    return "506aed4cf0fa361a55600b1ac6b1f978";
  }

  static const char* value(const ::pedsim_srvs::GetAgentState&) { return value(); }
};

template<>
struct DataType< ::pedsim_srvs::GetAgentState > {
  static const char* value()
  {
    return "pedsim_srvs/GetAgentState";
  }

  static const char* value(const ::pedsim_srvs::GetAgentState&) { return value(); }
};


// service_traits::MD5Sum< ::pedsim_srvs::GetAgentStateRequest> should match 
// service_traits::MD5Sum< ::pedsim_srvs::GetAgentState > 
template<>
struct MD5Sum< ::pedsim_srvs::GetAgentStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::pedsim_srvs::GetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::GetAgentStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::pedsim_srvs::GetAgentStateRequest> should match 
// service_traits::DataType< ::pedsim_srvs::GetAgentState > 
template<>
struct DataType< ::pedsim_srvs::GetAgentStateRequest>
{
  static const char* value()
  {
    return DataType< ::pedsim_srvs::GetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::GetAgentStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::pedsim_srvs::GetAgentStateResponse> should match 
// service_traits::MD5Sum< ::pedsim_srvs::GetAgentState > 
template<>
struct MD5Sum< ::pedsim_srvs::GetAgentStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::pedsim_srvs::GetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::GetAgentStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::pedsim_srvs::GetAgentStateResponse> should match 
// service_traits::DataType< ::pedsim_srvs::GetAgentState > 
template<>
struct DataType< ::pedsim_srvs::GetAgentStateResponse>
{
  static const char* value()
  {
    return DataType< ::pedsim_srvs::GetAgentState >::value();
  }
  static const char* value(const ::pedsim_srvs::GetAgentStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PEDSIM_SRVS_MESSAGE_GETAGENTSTATE_H
