/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.30
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_KubernetesEnclave_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_KubernetesEnclave_allOf::Json_KubernetesEnclave_allOf()
{
    m_RemoteControlIP = utility::conversions::to_string_t("");
    m_RemoteControlIPIsSet = false;
    m_EnclaveReplicaSetEventsIsSet = false;
    m_EnclaveDeploymentEventsIsSet = false;
    m_PodPhase = utility::conversions::to_string_t("");
    m_PodPhaseIsSet = false;
    m_DebugInfo = utility::conversions::to_string_t("");
    m_DebugInfoIsSet = false;
    m_WireguardPort = 0;
    m_WireguardPortIsSet = false;
    m_EnclavePodEventsIsSet = false;
    m_IsUsingInitContainer = false;
    m_IsUsingInitContainerIsSet = false;
    m_AttestationPort = 0;
    m_AttestationPortIsSet = false;
}

Json_KubernetesEnclave_allOf::~Json_KubernetesEnclave_allOf()
{
}

void Json_KubernetesEnclave_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Json_KubernetesEnclave_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_RemoteControlIPIsSet)
    {
        val[utility::conversions::to_string_t("remoteControlIP")] = ModelBase::toJson(m_RemoteControlIP);
    }
    if(m_EnclaveReplicaSetEventsIsSet)
    {
        val[utility::conversions::to_string_t("enclaveReplicaSetEvents")] = ModelBase::toJson(m_EnclaveReplicaSetEvents);
    }
    if(m_EnclaveDeploymentEventsIsSet)
    {
        val[utility::conversions::to_string_t("enclaveDeploymentEvents")] = ModelBase::toJson(m_EnclaveDeploymentEvents);
    }
    if(m_PodPhaseIsSet)
    {
        val[utility::conversions::to_string_t("podPhase")] = ModelBase::toJson(m_PodPhase);
    }
    if(m_DebugInfoIsSet)
    {
        val[utility::conversions::to_string_t("debugInfo")] = ModelBase::toJson(m_DebugInfo);
    }
    if(m_WireguardPortIsSet)
    {
        val[utility::conversions::to_string_t("wireguardPort")] = ModelBase::toJson(m_WireguardPort);
    }
    if(m_EnclavePodEventsIsSet)
    {
        val[utility::conversions::to_string_t("enclavePodEvents")] = ModelBase::toJson(m_EnclavePodEvents);
    }
    if(m_IsUsingInitContainerIsSet)
    {
        val[utility::conversions::to_string_t("isUsingInitContainer")] = ModelBase::toJson(m_IsUsingInitContainer);
    }
    if(m_AttestationPortIsSet)
    {
        val[utility::conversions::to_string_t("attestationPort")] = ModelBase::toJson(m_AttestationPort);
    }

    return val;
}

bool Json_KubernetesEnclave_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remoteControlIP")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remoteControlIP"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_remoteControlIP;
            ok &= ModelBase::fromJson(fieldValue, refVal_remoteControlIP);
            setRemoteControlIP(refVal_remoteControlIP);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveReplicaSetEvents")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveReplicaSetEvents"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1EventList> refVal_enclaveReplicaSetEvents;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveReplicaSetEvents);
            setEnclaveReplicaSetEvents(refVal_enclaveReplicaSetEvents);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveDeploymentEvents")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveDeploymentEvents"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1EventList> refVal_enclaveDeploymentEvents;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveDeploymentEvents);
            setEnclaveDeploymentEvents(refVal_enclaveDeploymentEvents);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("podPhase")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("podPhase"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_podPhase;
            ok &= ModelBase::fromJson(fieldValue, refVal_podPhase);
            setPodPhase(refVal_podPhase);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("debugInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("debugInfo"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_debugInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_debugInfo);
            setDebugInfo(refVal_debugInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wireguardPort")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wireguardPort"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_wireguardPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_wireguardPort);
            setWireguardPort(refVal_wireguardPort);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclavePodEvents")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclavePodEvents"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1EventList> refVal_enclavePodEvents;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclavePodEvents);
            setEnclavePodEvents(refVal_enclavePodEvents);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isUsingInitContainer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isUsingInitContainer"));
        if(!fieldValue.is_null())
        {
            bool refVal_isUsingInitContainer;
            ok &= ModelBase::fromJson(fieldValue, refVal_isUsingInitContainer);
            setIsUsingInitContainer(refVal_isUsingInitContainer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attestationPort")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attestationPort"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_attestationPort;
            ok &= ModelBase::fromJson(fieldValue, refVal_attestationPort);
            setAttestationPort(refVal_attestationPort);
        }
    }
    return ok;
}

void Json_KubernetesEnclave_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_RemoteControlIPIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("remoteControlIP"), m_RemoteControlIP));
    }
    if(m_EnclaveReplicaSetEventsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveReplicaSetEvents"), m_EnclaveReplicaSetEvents));
    }
    if(m_EnclaveDeploymentEventsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveDeploymentEvents"), m_EnclaveDeploymentEvents));
    }
    if(m_PodPhaseIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("podPhase"), m_PodPhase));
    }
    if(m_DebugInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("debugInfo"), m_DebugInfo));
    }
    if(m_WireguardPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wireguardPort"), m_WireguardPort));
    }
    if(m_EnclavePodEventsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclavePodEvents"), m_EnclavePodEvents));
    }
    if(m_IsUsingInitContainerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isUsingInitContainer"), m_IsUsingInitContainer));
    }
    if(m_AttestationPortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attestationPort"), m_AttestationPort));
    }
}

bool Json_KubernetesEnclave_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("remoteControlIP")))
    {
        utility::string_t refVal_remoteControlIP;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("remoteControlIP")), refVal_remoteControlIP );
        setRemoteControlIP(refVal_remoteControlIP);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveReplicaSetEvents")))
    {
        std::shared_ptr<Json_V1EventList> refVal_enclaveReplicaSetEvents;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveReplicaSetEvents")), refVal_enclaveReplicaSetEvents );
        setEnclaveReplicaSetEvents(refVal_enclaveReplicaSetEvents);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveDeploymentEvents")))
    {
        std::shared_ptr<Json_V1EventList> refVal_enclaveDeploymentEvents;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveDeploymentEvents")), refVal_enclaveDeploymentEvents );
        setEnclaveDeploymentEvents(refVal_enclaveDeploymentEvents);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("podPhase")))
    {
        utility::string_t refVal_podPhase;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("podPhase")), refVal_podPhase );
        setPodPhase(refVal_podPhase);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("debugInfo")))
    {
        utility::string_t refVal_debugInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("debugInfo")), refVal_debugInfo );
        setDebugInfo(refVal_debugInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wireguardPort")))
    {
        int32_t refVal_wireguardPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wireguardPort")), refVal_wireguardPort );
        setWireguardPort(refVal_wireguardPort);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclavePodEvents")))
    {
        std::shared_ptr<Json_V1EventList> refVal_enclavePodEvents;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclavePodEvents")), refVal_enclavePodEvents );
        setEnclavePodEvents(refVal_enclavePodEvents);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("isUsingInitContainer")))
    {
        bool refVal_isUsingInitContainer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isUsingInitContainer")), refVal_isUsingInitContainer );
        setIsUsingInitContainer(refVal_isUsingInitContainer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("attestationPort")))
    {
        int32_t refVal_attestationPort;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attestationPort")), refVal_attestationPort );
        setAttestationPort(refVal_attestationPort);
    }
    return ok;
}

utility::string_t Json_KubernetesEnclave_allOf::getRemoteControlIP() const
{
    return m_RemoteControlIP;
}

void Json_KubernetesEnclave_allOf::setRemoteControlIP(const utility::string_t& value)
{
    m_RemoteControlIP = value;
    m_RemoteControlIPIsSet = true;
}

bool Json_KubernetesEnclave_allOf::remoteControlIPIsSet() const
{
    return m_RemoteControlIPIsSet;
}

void Json_KubernetesEnclave_allOf::unsetRemoteControlIP()
{
    m_RemoteControlIPIsSet = false;
}
std::shared_ptr<Json_V1EventList> Json_KubernetesEnclave_allOf::getEnclaveReplicaSetEvents() const
{
    return m_EnclaveReplicaSetEvents;
}

void Json_KubernetesEnclave_allOf::setEnclaveReplicaSetEvents(const std::shared_ptr<Json_V1EventList>& value)
{
    m_EnclaveReplicaSetEvents = value;
    m_EnclaveReplicaSetEventsIsSet = true;
}

bool Json_KubernetesEnclave_allOf::enclaveReplicaSetEventsIsSet() const
{
    return m_EnclaveReplicaSetEventsIsSet;
}

void Json_KubernetesEnclave_allOf::unsetEnclaveReplicaSetEvents()
{
    m_EnclaveReplicaSetEventsIsSet = false;
}
std::shared_ptr<Json_V1EventList> Json_KubernetesEnclave_allOf::getEnclaveDeploymentEvents() const
{
    return m_EnclaveDeploymentEvents;
}

void Json_KubernetesEnclave_allOf::setEnclaveDeploymentEvents(const std::shared_ptr<Json_V1EventList>& value)
{
    m_EnclaveDeploymentEvents = value;
    m_EnclaveDeploymentEventsIsSet = true;
}

bool Json_KubernetesEnclave_allOf::enclaveDeploymentEventsIsSet() const
{
    return m_EnclaveDeploymentEventsIsSet;
}

void Json_KubernetesEnclave_allOf::unsetEnclaveDeploymentEvents()
{
    m_EnclaveDeploymentEventsIsSet = false;
}
utility::string_t Json_KubernetesEnclave_allOf::getPodPhase() const
{
    return m_PodPhase;
}

void Json_KubernetesEnclave_allOf::setPodPhase(const utility::string_t& value)
{
    m_PodPhase = value;
    m_PodPhaseIsSet = true;
}

bool Json_KubernetesEnclave_allOf::podPhaseIsSet() const
{
    return m_PodPhaseIsSet;
}

void Json_KubernetesEnclave_allOf::unsetPodPhase()
{
    m_PodPhaseIsSet = false;
}
utility::string_t Json_KubernetesEnclave_allOf::getDebugInfo() const
{
    return m_DebugInfo;
}

void Json_KubernetesEnclave_allOf::setDebugInfo(const utility::string_t& value)
{
    m_DebugInfo = value;
    m_DebugInfoIsSet = true;
}

bool Json_KubernetesEnclave_allOf::debugInfoIsSet() const
{
    return m_DebugInfoIsSet;
}

void Json_KubernetesEnclave_allOf::unsetDebugInfo()
{
    m_DebugInfoIsSet = false;
}
int32_t Json_KubernetesEnclave_allOf::getWireguardPort() const
{
    return m_WireguardPort;
}

void Json_KubernetesEnclave_allOf::setWireguardPort(int32_t value)
{
    m_WireguardPort = value;
    m_WireguardPortIsSet = true;
}

bool Json_KubernetesEnclave_allOf::wireguardPortIsSet() const
{
    return m_WireguardPortIsSet;
}

void Json_KubernetesEnclave_allOf::unsetWireguardPort()
{
    m_WireguardPortIsSet = false;
}
std::shared_ptr<Json_V1EventList> Json_KubernetesEnclave_allOf::getEnclavePodEvents() const
{
    return m_EnclavePodEvents;
}

void Json_KubernetesEnclave_allOf::setEnclavePodEvents(const std::shared_ptr<Json_V1EventList>& value)
{
    m_EnclavePodEvents = value;
    m_EnclavePodEventsIsSet = true;
}

bool Json_KubernetesEnclave_allOf::enclavePodEventsIsSet() const
{
    return m_EnclavePodEventsIsSet;
}

void Json_KubernetesEnclave_allOf::unsetEnclavePodEvents()
{
    m_EnclavePodEventsIsSet = false;
}
bool Json_KubernetesEnclave_allOf::isIsUsingInitContainer() const
{
    return m_IsUsingInitContainer;
}

void Json_KubernetesEnclave_allOf::setIsUsingInitContainer(bool value)
{
    m_IsUsingInitContainer = value;
    m_IsUsingInitContainerIsSet = true;
}

bool Json_KubernetesEnclave_allOf::isUsingInitContainerIsSet() const
{
    return m_IsUsingInitContainerIsSet;
}

void Json_KubernetesEnclave_allOf::unsetIsUsingInitContainer()
{
    m_IsUsingInitContainerIsSet = false;
}
int32_t Json_KubernetesEnclave_allOf::getAttestationPort() const
{
    return m_AttestationPort;
}

void Json_KubernetesEnclave_allOf::setAttestationPort(int32_t value)
{
    m_AttestationPort = value;
    m_AttestationPortIsSet = true;
}

bool Json_KubernetesEnclave_allOf::attestationPortIsSet() const
{
    return m_AttestationPortIsSet;
}

void Json_KubernetesEnclave_allOf::unsetAttestationPort()
{
    m_AttestationPortIsSet = false;
}
}
}
}
}


