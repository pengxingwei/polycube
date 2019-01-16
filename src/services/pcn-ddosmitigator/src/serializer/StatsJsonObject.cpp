/**
* ddosmitigator API
* DDoS Mitigator Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */



#include "StatsJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

StatsJsonObject::StatsJsonObject() {

  m_ppsIsSet = false;

  m_pktsIsSet = false;
}

StatsJsonObject::~StatsJsonObject() {}

void StatsJsonObject::validateKeys() {

}

void StatsJsonObject::validateMandatoryFields() {

}

void StatsJsonObject::validateParams() {

}

nlohmann::json StatsJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_ppsIsSet) {
    val["pps"] = m_pps;
  }

  if (m_pktsIsSet) {
    val["pkts"] = m_pkts;
  }


  return val;
}

void StatsJsonObject::fromJson(nlohmann::json& val) {
  for(nlohmann::json::iterator it = val.begin(); it != val.end(); ++it) {
    std::string key = it.key();
    bool found = (std::find(allowedParameters_.begin(), allowedParameters_.end(), key) != allowedParameters_.end());
    if (!found) {
      throw std::runtime_error(key + " is not a valid parameter");
      return;
    }
  }

  if (val.find("pps") != val.end()) {
    setPps(val.at("pps"));
  }

  if (val.find("pkts") != val.end()) {
    setPkts(val.at("pkts"));
  }
}

nlohmann::json StatsJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json StatsJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["pps"]["name"] = "pps";
  val["pps"]["type"] = "leaf"; // Suppose that type is leaf
  val["pps"]["simpletype"] = "integer";
  val["pps"]["description"] = R"POLYCUBE(Dropped Packets/s)POLYCUBE";
  val["pps"]["example"] = R"POLYCUBE()POLYCUBE";
  val["pkts"]["name"] = "pkts";
  val["pkts"]["type"] = "leaf"; // Suppose that type is leaf
  val["pkts"]["simpletype"] = "integer";
  val["pkts"]["description"] = R"POLYCUBE(Total Dropped Packets)POLYCUBE";
  val["pkts"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json StatsJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json StatsJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> StatsJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

uint64_t StatsJsonObject::getPps() const {
  return m_pps;
}

void StatsJsonObject::setPps(uint64_t value) {
  m_pps = value;
  m_ppsIsSet = true;
}

bool StatsJsonObject::ppsIsSet() const {
  return m_ppsIsSet;
}

void StatsJsonObject::unsetPps() {
  m_ppsIsSet = false;
}



uint64_t StatsJsonObject::getPkts() const {
  return m_pkts;
}

void StatsJsonObject::setPkts(uint64_t value) {
  m_pkts = value;
  m_pktsIsSet = true;
}

bool StatsJsonObject::pktsIsSet() const {
  return m_pktsIsSet;
}

void StatsJsonObject::unsetPkts() {
  m_pktsIsSet = false;
}




}
}
}
}
