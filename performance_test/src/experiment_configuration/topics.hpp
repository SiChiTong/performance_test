// Copyright 2017 Apex.AI, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/**
 * \brief Contains all includes and type abstraction for all means of communication.
 */

#ifndef EXPERIMENT_CONFIGURATION__TOPICS_HPP_
#define EXPERIMENT_CONFIGURATION__TOPICS_HPP_


#include <boost/mpl/list.hpp>
#include <boost/mpl/for_each.hpp>

// ROS2 2 types:
#include <performance_test/msg/array1k.hpp>
#include <performance_test/msg/array4k.hpp>
#include <performance_test/msg/array16k.hpp>
#include <performance_test/msg/array32k.hpp>
#include <performance_test/msg/array60k.hpp>
#include <performance_test/msg/array1m.hpp>
#include <performance_test/msg/array2m.hpp>
#include <performance_test/msg/array4m.hpp>

#include <performance_test/msg/struct16.hpp>
#include <performance_test/msg/struct256.hpp>
#include <performance_test/msg/struct4k.hpp>
#include <performance_test/msg/struct32k.hpp>

#include <performance_test/msg/point_cloud512k.hpp>
#include <performance_test/msg/point_cloud1m.hpp>
#include <performance_test/msg/point_cloud2m.hpp>
#include <performance_test/msg/point_cloud4m.hpp>

#include <performance_test/msg/range.hpp>
#include <performance_test/msg/nav_sat_fix.hpp>

#include <performance_test/msg/radar_detection.hpp>
#include <performance_test/msg/radar_track.hpp>

// FastRTPS Types:
#include <fast_rtps/Array1k_PubSubTypes.h>
#include <fast_rtps/Array4k_PubSubTypes.h>
#include <fast_rtps/Array16k_PubSubTypes.h>
#include <fast_rtps/Array32k_PubSubTypes.h>
#include <fast_rtps/Array60k_PubSubTypes.h>
#include <fast_rtps/Array1m_PubSubTypes.h>
#include <fast_rtps/Array2m_PubSubTypes.h>
#include <fast_rtps/Array4m_PubSubTypes.h>

#include <fast_rtps/Struct16_PubSubTypes.h>
#include <fast_rtps/Struct256_PubSubTypes.h>
#include <fast_rtps/Struct4k_PubSubTypes.h>
#include <fast_rtps/Struct32k_PubSubTypes.h>

#include <fast_rtps/PointCloud512k_PubSubTypes.h>
#include <fast_rtps/PointCloud1m_PubSubTypes.h>
#include <fast_rtps/PointCloud2m_PubSubTypes.h>
#include <fast_rtps/PointCloud4m_PubSubTypes.h>

#include <fast_rtps/Range_PubSubTypes.h>
#include <fast_rtps/NavSatFix_PubSubTypes.h>

#include <fast_rtps/RadarDetection_PubSubTypes.h>
#include <fast_rtps/RadarTrack_PubSubTypes.h>

#ifdef CONNEXT_DDS_MICRO_ENABLED
// Connext DDS Micro Types:
#include <micro/Array1k_Support.h>
#include <micro/Array4k_Support.h>
#include <micro/Array16k_Support.h>
#include <micro/Array32k_Support.h>
#include <micro/Array60k_Support.h>
#include <micro/Array1m_Support.h>
#include <micro/Array2m_Support.h>
#include <micro/Array4m_Support.h>

#include <micro/Struct16_Support.h>
#include <micro/Struct256_Support.h>
#include <micro/Struct4k_Support.h>
#include <micro/Struct32k_Support.h>

#include <micro/PointCloud512k_Support.h>
#include <micro/PointCloud1m_Support.h>
#include <micro/PointCloud2m_Support.h>
#include <micro/PointCloud4m_Support.h>

#include <micro/Range_Support.h>
#include <micro/NavSatFix_Support.h>

#include <micro/RadarDetection_Support.h>
#include <micro/RadarTrack_Support.h>
#endif

#include <algorithm>
#include <string>
#include <vector>

namespace performance_test
{

namespace topics
{

///  \cond
class Array1k
{
public:
  using RosType = performance_test::msg::Array1k;

  using EprosimaTopicType = performance_test_msgs::msg::dds_::Array1k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Array1k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Array1k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Array1k");
  }
};

class Array4k
{
public:
  using RosType = performance_test::msg::Array4k;

  using EprosimaTopicType = performance_test_msgs::msg::dds_::Array4k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Array4k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Array4k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Array4k");
  }
};

class Array16k
{
public:
  using RosType = performance_test::msg::Array16k;

  using EprosimaTopicType = performance_test_msgs::msg::dds_::Array16k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Array16k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Array16k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Array16k");
  }
};

class Array32k
{
public:
  using RosType = performance_test::msg::Array32k;

  using EprosimaTopicType = performance_test_msgs::msg::dds_::Array32k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Array32k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Array32k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Array32k");
  }
};

class Array60k
{
public:
  using RosType = performance_test::msg::Array60k;

  using EprosimaTopicType = performance_test_msgs::msg::dds_::Array60k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Array60k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Array60k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Array60k");
  }
};

class Array1m
{
public:
  using RosType = performance_test::msg::Array1m;

  using EprosimaTopicType = performance_test_msgs::msg::dds_::Array1m_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Array1m_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Array1m_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Array1m");
  }
};

class Array2m
{
public:
  using RosType = performance_test::msg::Array2m;

  using EprosimaTopicType = performance_test_msgs::msg::dds_::Array2m_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Array2m_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Array2m_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Array2m");
  }
};

class Struct16
{
public:
  using RosType = performance_test::msg::Struct16;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::Struct16_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Struct16_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Struct16_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Struct16");
  }
};

class Struct256
{
public:
  using RosType = performance_test::msg::Struct256;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::Struct256_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Struct256_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Struct256_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Struct256");
  }
};

class Struct4k
{
public:
  using RosType = performance_test::msg::Struct4k;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::Struct4k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Struct4k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Struct4k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Struct4k");
  }
};

class Struct32k
{
public:
  using RosType = performance_test::msg::Struct32k;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::Struct32k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Struct32k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Struct32k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Struct32k");
  }
};

class PointCloud512k
{
public:
  using RosType = performance_test::msg::PointCloud512k;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::PointCloud512k_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__PointCloud512k_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__PointCloud512k_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("PointCloud512k");
  }
};

class PointCloud1m
{
public:
  using RosType = performance_test::msg::PointCloud1m;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::PointCloud1m_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__PointCloud1m_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__PointCloud1m_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("PointCloud1m");
  }
};

class PointCloud2m
{
public:
  using RosType = performance_test::msg::PointCloud2m;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::PointCloud2m_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__PointCloud2m_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__PointCloud2m_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("PointCloud2m");
  }
};

class PointCloud4m
{
public:
  using RosType = performance_test::msg::PointCloud4m;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::PointCloud4m_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__PointCloud4m_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__PointCloud4m_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("PointCloud4m");
  }
};

class Range
{
public:
  using RosType = performance_test::msg::Range;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::Range_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__Range_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__Range_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("Range");
  }
};

class NavSatFix
{
public:
  using RosType = performance_test::msg::NavSatFix;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::NavSatFix_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__NavSatFix_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__NavSatFix_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("NavSatFix");
  }
};

class RadarDetection
{
public:
  using RosType = performance_test::msg::RadarDetection;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::RadarDetection_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__RadarDetection_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__RadarDetection_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("RadarDetection");
  }
};

class RadarTrack
{
public:
  using RosType = performance_test::msg::RadarTrack;
  using EprosimaTopicType = performance_test_msgs::msg::dds_::RadarTrack_PubSubType;
  using EprosimaType = typename EprosimaTopicType::type;

#ifdef CONNEXT_DDS_MICRO_ENABLED
  using ConnextDDSMicroType = performance_test_msgs_msg_dds__RadarTrack_;
  static NDDS_Type_Plugin * ConnextDDSMicroTypePlugin()
  {
    return performance_test_msgs_msg_dds__RadarTrack_TypePlugin_get();
  }
#endif

  static std::string topic_name()
  {
    return std::string("RadarTrack");
  }
};
///  \endcond

using TopicTypeList = boost::mpl::list<Array1k, Array4k, Array16k, Array32k, Array60k, Array1m,
      Array2m,
      Struct16, Struct256, Struct4k, Struct32k, PointCloud512k, PointCloud1m, PointCloud2m,
      PointCloud4m,
      Range, NavSatFix, RadarDetection, RadarTrack>;

/// Returns a vector of supported topic names.
inline std::vector<std::string> supported_topic_names()
{
  std::vector<std::string> result;
  boost::mpl::for_each<TopicTypeList>([&result](auto topic) {
      using T = decltype(topic);
      result.push_back(T::topic_name());
    });
  return result;
}

}  // namespace topics
}  // namespace performance_test

#endif  // EXPERIMENT_CONFIGURATION__TOPICS_HPP_
