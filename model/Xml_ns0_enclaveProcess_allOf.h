/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.31
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Xml_ns0_enclaveProcess_allOf.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Xml_ns0_enclaveProcess_allOf_H_
#define COM_MADANA_APICLIENT_MODEL_Xml_ns0_enclaveProcess_allOf_H_


#include "../ModelBase.h"

#include "Xml_ns0_wireguardInterface.h"
#include "Xml_ns0_inputStream.h"
#include "Xml_ns0_environment.h"
#include <cpprest/details/basic_types.h>
#include "Xml_ns0_process.h"
#include "Object.h"
#include "Xml_ns0_enclavePort.h"
#include <vector>
#include "Xml_ns0_kubernetesEnclave.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Xml_ns0_enclaveProcess_allOf
    : public ModelBase
{
public:
    Xml_ns0_enclaveProcess_allOf();
    virtual ~Xml_ns0_enclaveProcess_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Xml_ns0_enclaveProcess_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAttestationServer() const;
    bool attestationServerIsSet() const;
    void unsetAttestationServer();

    void setAttestationServer(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConsoleOutput() const;
    bool consoleOutputIsSet() const;
    void unsetConsoleOutput();

    void setConsoleOutput(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnclaveIdent() const;
    bool enclaveIdentIsSet() const;
    void unsetEnclaveIdent();

    void setEnclaveIdent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_inputStream> getEnclaveInputstream() const;
    bool enclaveInputstreamIsSet() const;
    void unsetEnclaveInputstream();

    void setEnclaveInputstream(const std::shared_ptr<Xml_ns0_inputStream>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEndingTime() const;
    bool endingTimeIsSet() const;
    void unsetEndingTime();

    void setEndingTime(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_environment> getEnvironment() const;
    bool environmentIsSet() const;
    void unsetEnvironment();

    void setEnvironment(const std::shared_ptr<Xml_ns0_environment>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInternalAttesationServer() const;
    bool internalAttesationServerIsSet() const;
    void unsetInternalAttesationServer();

    void setInternalAttesationServer(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInternalIdent() const;
    bool internalIdentIsSet() const;
    void unsetInternalIdent();

    void setInternalIdent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInternalRemoteControlServer() const;
    bool internalRemoteControlServerIsSet() const;
    void unsetInternalRemoteControlServer();

    void setInternalRemoteControlServer(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getInternalWireguardServer() const;
    bool internalWireguardServerIsSet() const;
    void unsetInternalWireguardServer();

    void setInternalWireguardServer(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_kubernetesEnclave> getKubernetesEnclave() const;
    bool kubernetesEnclaveIsSet() const;
    void unsetKubernetesEnclave();

    void setKubernetesEnclave(const std::shared_ptr<Xml_ns0_kubernetesEnclave>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Object> getPortMapping() const;
    bool portMappingIsSet() const;
    void unsetPortMapping();

    void setPortMapping(const std::shared_ptr<Object>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Xml_ns0_enclavePort>>& getPorts();
    bool portsIsSet() const;
    void unsetPorts();

    void setPorts(const std::vector<std::shared_ptr<Xml_ns0_enclavePort>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_process> getProcess() const;
    bool processIsSet() const;
    void unsetProcess();

    void setProcess(const std::shared_ptr<Xml_ns0_process>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPublicIdent() const;
    bool publicIdentIsSet() const;
    void unsetPublicIdent();

    void setPublicIdent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRemoteControlServer() const;
    bool remoteControlServerIsSet() const;
    void unsetRemoteControlServer();

    void setRemoteControlServer(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSignerIdent() const;
    bool signerIdentIsSet() const;
    void unsetSignerIdent();

    void setSignerIdent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStartupCMD() const;
    bool startupCMDIsSet() const;
    void unsetStartupCMD();

    void setStartupCMD(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStartupTime() const;
    bool startupTimeIsSet() const;
    void unsetStartupTime();

    void setStartupTime(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_wireguardInterface> getWgInterface() const;
    bool wgInterfaceIsSet() const;
    void unsetWgInterface();

    void setWgInterface(const std::shared_ptr<Xml_ns0_wireguardInterface>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWireguardPublicKey() const;
    bool wireguardPublicKeyIsSet() const;
    void unsetWireguardPublicKey();

    void setWireguardPublicKey(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWireguardServer() const;
    bool wireguardServerIsSet() const;
    void unsetWireguardServer();

    void setWireguardServer(const utility::string_t& value);


protected:
    utility::string_t m_AttestationServer;
    bool m_AttestationServerIsSet;
    utility::string_t m_ConsoleOutput;
    bool m_ConsoleOutputIsSet;
    utility::string_t m_EnclaveIdent;
    bool m_EnclaveIdentIsSet;
    std::shared_ptr<Xml_ns0_inputStream> m_EnclaveInputstream;
    bool m_EnclaveInputstreamIsSet;
    utility::string_t m_EndingTime;
    bool m_EndingTimeIsSet;
    std::shared_ptr<Xml_ns0_environment> m_Environment;
    bool m_EnvironmentIsSet;
    utility::string_t m_InternalAttesationServer;
    bool m_InternalAttesationServerIsSet;
    utility::string_t m_InternalIdent;
    bool m_InternalIdentIsSet;
    utility::string_t m_InternalRemoteControlServer;
    bool m_InternalRemoteControlServerIsSet;
    utility::string_t m_InternalWireguardServer;
    bool m_InternalWireguardServerIsSet;
    std::shared_ptr<Xml_ns0_kubernetesEnclave> m_KubernetesEnclave;
    bool m_KubernetesEnclaveIsSet;
    std::shared_ptr<Object> m_PortMapping;
    bool m_PortMappingIsSet;
    std::vector<std::shared_ptr<Xml_ns0_enclavePort>> m_Ports;
    bool m_PortsIsSet;
    std::shared_ptr<Xml_ns0_process> m_Process;
    bool m_ProcessIsSet;
    utility::string_t m_PublicIdent;
    bool m_PublicIdentIsSet;
    utility::string_t m_RemoteControlServer;
    bool m_RemoteControlServerIsSet;
    utility::string_t m_SignerIdent;
    bool m_SignerIdentIsSet;
    utility::string_t m_StartupCMD;
    bool m_StartupCMDIsSet;
    utility::string_t m_StartupTime;
    bool m_StartupTimeIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    std::shared_ptr<Xml_ns0_wireguardInterface> m_WgInterface;
    bool m_WgInterfaceIsSet;
    utility::string_t m_WireguardPublicKey;
    bool m_WireguardPublicKeyIsSet;
    utility::string_t m_WireguardServer;
    bool m_WireguardServerIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Xml_ns0_enclaveProcess_allOf_H_ */
