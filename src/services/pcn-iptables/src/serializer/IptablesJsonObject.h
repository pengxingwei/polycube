/**
* iptables API
* iptables API generated from iptables.yang
*
* OpenAPI spec version: 1.0.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

/*
* IptablesJsonObject.h
*
*
*/

#pragma once


#include "JsonObjectBase.h"

#include "ChainJsonObject.h"
#include "SessionTableJsonObject.h"
#include "PortsJsonObject.h"
#include <vector>
#include "polycube/services/cube.h"

using polycube::service::CubeType;

namespace io {
namespace swagger {
namespace server {
namespace model {

enum class IptablesLoglevelEnum {
  TRACE, DEBUG, INFO, WARN, ERR, CRITICAL, OFF
};
enum class IptablesConntrackEnum {
  ON, OFF
};
enum class IptablesHorusEnum {
  ON, OFF
};

/// <summary>
///
/// </summary>
class  IptablesJsonObject : public JsonObjectBase {
public:
  IptablesJsonObject();
  virtual ~IptablesJsonObject();

  /////////////////////////////////////////////
  /// JsonObjectBase overrides

  void validateKeys() override;
  void validateMandatoryFields() override;
  void validateParams() override;

  nlohmann::json toJson() const override;
  void fromJson(nlohmann::json& json) override;

  static nlohmann::json helpKeys();
  static nlohmann::json helpElements();
  static nlohmann::json helpWritableLeafs();
  static nlohmann::json helpComplexElements();
  static std::vector<std::string> helpActions();
  /////////////////////////////////////////////
  /// IptablesJsonObject members

  /// <summary>
  /// Name of the iptables service
  /// </summary>
  std::string getName() const;
  void setName(std::string value);
  bool nameIsSet() const;
  void unsetName();

  /// <summary>
  /// UUID of the Cube
  /// </summary>
  std::string getUuid() const;
  void setUuid(std::string value);
  bool uuidIsSet() const;
  void unsetUuid();

  /// <summary>
  /// Type of the Cube (TC, XDP_SKB, XDP_DRV)
  /// </summary>
  CubeType getType() const;
  void setType(CubeType value);
  bool typeIsSet() const;
  void unsetType();
  static std::string CubeType_to_string(const CubeType &value);
  static CubeType string_to_CubeType(const std::string &str);

  /// <summary>
  /// Defines the logging level of a service instance, from none (OFF) to the most verbose (TRACE)
  /// </summary>
  IptablesLoglevelEnum getLoglevel() const;
  void setLoglevel(IptablesLoglevelEnum value);
  bool loglevelIsSet() const;
  void unsetLoglevel();
  static std::string IptablesLoglevelEnum_to_string(const IptablesLoglevelEnum &value);
  static IptablesLoglevelEnum string_to_IptablesLoglevelEnum(const std::string &str);
  polycube::LogLevel getPolycubeLoglevel() const;
  /// <summary>
  /// Entry of the ports table
  /// </summary>
  const std::vector<PortsJsonObject>& getPorts() const;
  void addPorts(PortsJsonObject value);
  bool portsIsSet() const;
  void unsetPorts();

  /// <summary>
  /// Interactive mode applies new rules immediately; if &#39;false&#39;, the command &#39;apply-rules&#39; has to be used to apply all the rules at once. Default is TRUE.
  /// </summary>
  bool getInteractive() const;
  void setInteractive(bool value);
  bool interactiveIsSet() const;
  void unsetInteractive();

  /// <summary>
  /// Enables the Connection Tracking module. Mandatory if connection tracking rules are needed. Default is ON.
  /// </summary>
  IptablesConntrackEnum getConntrack() const;
  void setConntrack(IptablesConntrackEnum value);
  bool conntrackIsSet() const;
  void unsetConntrack();
  static std::string IptablesConntrackEnum_to_string(const IptablesConntrackEnum &value);
  static IptablesConntrackEnum string_to_IptablesConntrackEnum(const std::string &str);

  /// <summary>
  /// Enables the HORUS optimization. Default is OFF.
  /// </summary>
  IptablesHorusEnum getHorus() const;
  void setHorus(IptablesHorusEnum value);
  bool horusIsSet() const;
  void unsetHorus();
  static std::string IptablesHorusEnum_to_string(const IptablesHorusEnum &value);
  static IptablesHorusEnum string_to_IptablesHorusEnum(const std::string &str);

  /// <summary>
  ///
  /// </summary>
  const std::vector<SessionTableJsonObject>& getSessionTable() const;
  void addSessionTable(SessionTableJsonObject value);
  bool sessionTableIsSet() const;
  void unsetSessionTable();

  /// <summary>
  ///
  /// </summary>
  const std::vector<ChainJsonObject>& getChain() const;
  void addChain(ChainJsonObject value);
  bool chainIsSet() const;
  void unsetChain();


protected:
  std::string m_name;
  bool m_nameIsSet;
  std::string m_uuid;
  bool m_uuidIsSet;
  CubeType m_type;
  bool m_typeIsSet;
  IptablesLoglevelEnum m_loglevel;
  bool m_loglevelIsSet;
  std::vector<PortsJsonObject> m_ports;
  bool m_portsIsSet;
  bool m_interactive;
  bool m_interactiveIsSet;
  IptablesConntrackEnum m_conntrack;
  bool m_conntrackIsSet;
  IptablesHorusEnum m_horus;
  bool m_horusIsSet;
  std::vector<SessionTableJsonObject> m_sessionTable;
  bool m_sessionTableIsSet;
  std::vector<ChainJsonObject> m_chain;
  bool m_chainIsSet;

  std::vector<std::string> allowedParameters_{ "name", "uuid", "type", "loglevel", "ports", "interactive", "conntrack", "horus", "session-table", "chain" };
};

}
}
}
}
