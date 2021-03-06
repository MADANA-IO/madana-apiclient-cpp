/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.56
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_KubernetesEnclave_allOf.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_KubernetesEnclave_allOf_H_
#define COM_MADANA_APICLIENT_MODEL_Json_KubernetesEnclave_allOf_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Json_V1EventList.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_KubernetesEnclave_allOf
    : public ModelBase
{
public:
    Json_KubernetesEnclave_allOf();
    virtual ~Json_KubernetesEnclave_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_KubernetesEnclave_allOf members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1EventList> getEnclavePodEvents() const;
    bool enclavePodEventsIsSet() const;
    void unsetEnclavePodEvents();

    void setEnclavePodEvents(const std::shared_ptr<Json_V1EventList>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRemoteControlIP() const;
    bool remoteControlIPIsSet() const;
    void unsetRemoteControlIP();

    void setRemoteControlIP(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPodPhase() const;
    bool podPhaseIsSet() const;
    void unsetPodPhase();

    void setPodPhase(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1EventList> getEnclaveDeploymentEvents() const;
    bool enclaveDeploymentEventsIsSet() const;
    void unsetEnclaveDeploymentEvents();

    void setEnclaveDeploymentEvents(const std::shared_ptr<Json_V1EventList>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDebugInfo() const;
    bool debugInfoIsSet() const;
    void unsetDebugInfo();

    void setDebugInfo(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getAttestationPort() const;
    bool attestationPortIsSet() const;
    void unsetAttestationPort();

    void setAttestationPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isIsUsingInitContainer() const;
    bool isUsingInitContainerIsSet() const;
    void unsetIsUsingInitContainer();

    void setIsUsingInitContainer(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getWireguardPort() const;
    bool wireguardPortIsSet() const;
    void unsetWireguardPort();

    void setWireguardPort(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1EventList> getEnclaveReplicaSetEvents() const;
    bool enclaveReplicaSetEventsIsSet() const;
    void unsetEnclaveReplicaSetEvents();

    void setEnclaveReplicaSetEvents(const std::shared_ptr<Json_V1EventList>& value);


protected:
    std::shared_ptr<Json_V1EventList> m_EnclavePodEvents;
    bool m_EnclavePodEventsIsSet;
    utility::string_t m_RemoteControlIP;
    bool m_RemoteControlIPIsSet;
    utility::string_t m_PodPhase;
    bool m_PodPhaseIsSet;
    std::shared_ptr<Json_V1EventList> m_EnclaveDeploymentEvents;
    bool m_EnclaveDeploymentEventsIsSet;
    utility::string_t m_DebugInfo;
    bool m_DebugInfoIsSet;
    int32_t m_AttestationPort;
    bool m_AttestationPortIsSet;
    bool m_IsUsingInitContainer;
    bool m_IsUsingInitContainerIsSet;
    int32_t m_WireguardPort;
    bool m_WireguardPortIsSet;
    std::shared_ptr<Json_V1EventList> m_EnclaveReplicaSetEvents;
    bool m_EnclaveReplicaSetEventsIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_KubernetesEnclave_allOf_H_ */
