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



#include "BlacklistSrcJsonObject.h"
#include <regex>

namespace io {
namespace swagger {
namespace server {
namespace model {

BlacklistSrcJsonObject::BlacklistSrcJsonObject() {

  m_ipIsSet = false;

  m_dropPktsIsSet = false;
}

BlacklistSrcJsonObject::~BlacklistSrcJsonObject() {}

void BlacklistSrcJsonObject::validateKeys() {

  if (!m_ipIsSet) {
    throw std::runtime_error("Variable ip is required");
  }
}

void BlacklistSrcJsonObject::validateMandatoryFields() {

}

void BlacklistSrcJsonObject::validateParams() {

}

nlohmann::json BlacklistSrcJsonObject::toJson() const {
  nlohmann::json val = nlohmann::json::object();

  if (m_ipIsSet) {
    val["ip"] = m_ip;
  }

  if (m_dropPktsIsSet) {
    val["drop-pkts"] = m_dropPkts;
  }


  return val;
}

void BlacklistSrcJsonObject::fromJson(nlohmann::json& val) {
  for(nlohmann::json::iterator it = val.begin(); it != val.end(); ++it) {
    std::string key = it.key();
    bool found = (std::find(allowedParameters_.begin(), allowedParameters_.end(), key) != allowedParameters_.end());
    if (!found) {
      throw std::runtime_error(key + " is not a valid parameter");
      return;
    }
  }

  if (val.find("ip") != val.end()) {
    setIp(val.at("ip"));
  }

  if (val.find("drop-pkts") != val.end()) {
    setDropPkts(val.at("drop-pkts"));
  }
}

nlohmann::json BlacklistSrcJsonObject::helpKeys() {
  nlohmann::json val = nlohmann::json::object();

  val["ip"]["name"] = "ip";
  val["ip"]["type"] = "key";
  val["ip"]["simpletype"] = "string";
  val["ip"]["description"] = R"POLYCUBE(Source IP Address)POLYCUBE";
  val["ip"]["example"] = R"POLYCUBE(10.0.0.1)POLYCUBE";

  return val;
}

nlohmann::json BlacklistSrcJsonObject::helpElements() {
  nlohmann::json val = nlohmann::json::object();

  val["drop-pkts"]["name"] = "drop-pkts";
  val["drop-pkts"]["type"] = "leaf"; // Suppose that type is leaf
  val["drop-pkts"]["simpletype"] = "integer";
  val["drop-pkts"]["description"] = R"POLYCUBE(Dropped Packets)POLYCUBE";
  val["drop-pkts"]["example"] = R"POLYCUBE()POLYCUBE";

  return val;
}

nlohmann::json BlacklistSrcJsonObject::helpWritableLeafs() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

nlohmann::json BlacklistSrcJsonObject::helpComplexElements() {
  nlohmann::json val = nlohmann::json::object();


  return val;
}

std::vector<std::string> BlacklistSrcJsonObject::helpActions() {
  std::vector<std::string> val;
  return val;
}

std::string BlacklistSrcJsonObject::getIp() const {
  return m_ip;
}

void BlacklistSrcJsonObject::setIp(std::string value) {
  m_ip = value;
  m_ipIsSet = true;
}

bool BlacklistSrcJsonObject::ipIsSet() const {
  return m_ipIsSet;
}

void BlacklistSrcJsonObject::unsetIp() {
  m_ipIsSet = false;
}



uint64_t BlacklistSrcJsonObject::getDropPkts() const {
  return m_dropPkts;
}

void BlacklistSrcJsonObject::setDropPkts(uint64_t value) {
  m_dropPkts = value;
  m_dropPktsIsSet = true;
}

bool BlacklistSrcJsonObject::dropPktsIsSet() const {
  return m_dropPktsIsSet;
}

void BlacklistSrcJsonObject::unsetDropPkts() {
  m_dropPktsIsSet = false;
}




}
}
}
}
