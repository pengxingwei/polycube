/**
* k8sfilter API
* Kubernetes Traffic Filtering Service
*
* OpenAPI spec version: 2.0
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/polycube-network/swagger-codegen.git
* branch polycube
*/


/* Do not edit this file manually */

#include "api/K8sfilterApiImpl.h"
#define MANAGER_TYPE io::swagger::server::api::K8sfilterApiImpl
#define SERVICE_DESCRIPTION "Kubernetes Traffic Filtering Service"
#define SERVICE_VERSION "2.0"
#define SERVICE_PYANG_GIT ""
#define SERVICE_SWAGGER_CODEGEN_GIT "c757d44b71d48df9e381fc8d35ea69bd12268127/c757d44"
#define SERVICE_REQUIRED_KERNEL_VERSION "4.14.0"

const std::string SERVICE_DATA_MODEL = R"POLYCUBE_DM(
module k8sfilter {
  yang-version 1.1;
  namespace "http://polycube.network/nat";
  prefix "k8sfilter";

  import polycube-base { prefix "polycube-base"; }
  import polycube-standard-base { prefix "polycube-standard-base"; }

  organization "Polycube open source project";
  description "YANG data model for the Polycube traffic filter for Kubernetes";

  polycube-base:service-description "Kubernetes Traffic Filtering Service";
  polycube-base:service-version "2.0";
  polycube-base:service-name "k8sfilter";
  polycube-base:service-min-kernel-version "4.14.0";

  uses "polycube-standard-base:standard-base-yang-module" {
    augment ports {
      leaf type {
        type enumeration {
          enum EXTERNAL { description "Connected to NIC"; }
          enum INTERNAL { description "Connected to LBRP"; }
        }
        mandatory true;
        config false;
        description "...";
      }
    }
  }

  leaf nodeport-range {
    type string;
    description "Port range used for NodePort services";
    default "30000-32767";
    polycube-base:cli-example "30000-32767";
  }
}

)POLYCUBE_DM";

extern "C" const char *data_model() {
  return SERVICE_DATA_MODEL.c_str();
}


#include <polycube/services/shared_library.h>
