/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.33
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_enclaveProcess.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_enclaveProcess::Xml_ns0_enclaveProcess()
{
    m_AttestationServer = utility::conversions::to_string_t("");
    m_AttestationServerIsSet = false;
    m_ConsoleOutput = utility::conversions::to_string_t("");
    m_ConsoleOutputIsSet = false;
    m_EnclaveIdent = utility::conversions::to_string_t("");
    m_EnclaveIdentIsSet = false;
    m_EnclaveInputstreamIsSet = false;
    m_EndingTime = utility::conversions::to_string_t("");
    m_EndingTimeIsSet = false;
    m_EnvironmentIsSet = false;
    m_InternalAttesationServer = utility::conversions::to_string_t("");
    m_InternalAttesationServerIsSet = false;
    m_InternalIdent = utility::conversions::to_string_t("");
    m_InternalIdentIsSet = false;
    m_InternalRemoteControlServer = utility::conversions::to_string_t("");
    m_InternalRemoteControlServerIsSet = false;
    m_InternalWireguardServer = utility::conversions::to_string_t("");
    m_InternalWireguardServerIsSet = false;
    m_KubernetesEnclaveIsSet = false;
    m_PortMappingIsSet = false;
    m_PortsIsSet = false;
    m_ProcessIsSet = false;
    m_PublicIdent = utility::conversions::to_string_t("");
    m_PublicIdentIsSet = false;
    m_RemoteControlServer = utility::conversions::to_string_t("");
    m_RemoteControlServerIsSet = false;
    m_SignerIdent = utility::conversions::to_string_t("");
    m_SignerIdentIsSet = false;
    m_StartupCMD = utility::conversions::to_string_t("");
    m_StartupCMDIsSet = false;
    m_StartupTime = utility::conversions::to_string_t("");
    m_StartupTimeIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_WgInterfaceIsSet = false;
    m_WireguardPublicKey = utility::conversions::to_string_t("");
    m_WireguardPublicKeyIsSet = false;
    m_WireguardServer = utility::conversions::to_string_t("");
    m_WireguardServerIsSet = false;
}

Xml_ns0_enclaveProcess::~Xml_ns0_enclaveProcess()
{
}

void Xml_ns0_enclaveProcess::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_enclaveProcess::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AttestationServerIsSet)
    {
        val[utility::conversions::to_string_t("attestationServer")] = ModelBase::toJson(m_AttestationServer);
    }
    if(m_ConsoleOutputIsSet)
    {
        val[utility::conversions::to_string_t("consoleOutput")] = ModelBase::toJson(m_ConsoleOutput);
    }
    if(m_EnclaveIdentIsSet)
    {
        val[utility::conversions::to_string_t("enclaveIdent")] = ModelBase::toJson(m_EnclaveIdent);
    }
    if(m_EnclaveInputstreamIsSet)
    {
        val[utility::conversions::to_string_t("enclaveInputstream")] = ModelBase::toJson(m_EnclaveInputstream);
    }
    if(m_EndingTimeIsSet)
    {
        val[utility::conversions::to_string_t("endingTime")] = ModelBase::toJson(m_EndingTime);
    }
    if(m_EnvironmentIsSet)
    {
        val[utility::conversions::to_string_t("environment")] = ModelBase::toJson(m_Environment);
    }
    if(m_InternalAttesationServerIsSet)
    {
        val[utility::conversions::to_string_t("internalAttesationServer")] = ModelBase::toJson(m_InternalAttesationServer);
    }
    if(m_InternalIdentIsSet)
    {
        val[utility::conversions::to_string_t("internalIdent")] = ModelBase::toJson(m_InternalIdent);
    }
    if(m_InternalRemoteControlServerIsSet)
    {
        val[utility::conversions::to_string_t("internalRemoteControlServer")] = ModelBase::toJson(m_InternalRemoteControlServer);
    }
    if(m_InternalWireguardServerIsSet)
    {
        val[utility::conversions::to_string_t("internalWireguardServer")] = ModelBase::toJson(m_InternalWireguardServer);
    }
    if(m_KubernetesEnclaveIsSet)
    {
        val[utility::conversions::to_string_t("kubernetesEnclave")] = ModelBase::toJson(m_KubernetesEnclave);
    }
    if(m_PortMappingIsSet)
    {
        val[utility::conversions::to_string_t("portMapping")] = ModelBase::toJson(m_PortMapping);
    }
    if(m_PortsIsSet)
    {
        val[utility::conversions::to_string_t("ports")] = ModelBase::toJson(m_Ports);
    }
    if(m_ProcessIsSet)
    {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(m_Process);
    }
    if(m_PublicIdentIsSet)
    {
        val[utility::conversions::to_string_t("publicIdent")] = ModelBase::toJson(m_PublicIdent);
    }
    if(m_RemoteControlServerIsSet)
    {
        val[utility::conversions::to_string_t("remoteControlServer")] = ModelBase::toJson(m_RemoteControlServer);
    }
    if(m_SignerIdentIsSet)
    {
        val[utility::conversions::to_string_t("signerIdent")] = ModelBase::toJson(m_SignerIdent);
    }
    if(m_StartupCMDIsSet)
    {
        val[utility::conversions::to_string_t("startupCMD")] = ModelBase::toJson(m_StartupCMD);
    }
    if(m_StartupTimeIsSet)
    {
        val[utility::conversions::to_string_t("startupTime")] = ModelBase::toJson(m_StartupTime);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_WgInterfaceIsSet)
    {
        val[utility::conversions::to_string_t("wgInterface")] = ModelBase::toJson(m_WgInterface);
    }
    if(m_WireguardPublicKeyIsSet)
    {
        val[utility::conversions::to_string_t("wireguardPublicKey")] = ModelBase::toJson(m_WireguardPublicKey);
    }
    if(m_WireguardServerIsSet)
    {
        val[utility::conversions::to_string_t("wireguardServer")] = ModelBase::toJson(m_WireguardServer);
    }

    return val;
}

bool Xml_ns0_enclaveProcess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attestationServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attestationServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_attestationServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_attestationServer);
            setAttestationServer(refVal_attestationServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consoleOutput")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consoleOutput"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_consoleOutput;
            ok &= ModelBase::fromJson(fieldValue, refVal_consoleOutput);
            setConsoleOutput(refVal_consoleOutput);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_enclaveIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveIdent);
            setEnclaveIdent(refVal_enclaveIdent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enclaveInputstream")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveInputstream"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_inputStream> refVal_enclaveInputstream;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveInputstream);
            setEnclaveInputstream(refVal_enclaveInputstream);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endingTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endingTime"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_endingTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_endingTime);
            setEndingTime(refVal_endingTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("environment")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("environment"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_environment> refVal_environment;
            ok &= ModelBase::fromJson(fieldValue, refVal_environment);
            setEnvironment(refVal_environment);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internalAttesationServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalAttesationServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalAttesationServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalAttesationServer);
            setInternalAttesationServer(refVal_internalAttesationServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internalIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalIdent);
            setInternalIdent(refVal_internalIdent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internalRemoteControlServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalRemoteControlServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalRemoteControlServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalRemoteControlServer);
            setInternalRemoteControlServer(refVal_internalRemoteControlServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internalWireguardServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internalWireguardServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_internalWireguardServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_internalWireguardServer);
            setInternalWireguardServer(refVal_internalWireguardServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kubernetesEnclave")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kubernetesEnclave"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_kubernetesEnclave> refVal_kubernetesEnclave;
            ok &= ModelBase::fromJson(fieldValue, refVal_kubernetesEnclave);
            setKubernetesEnclave(refVal_kubernetesEnclave);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portMapping")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portMapping"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> refVal_portMapping;
            ok &= ModelBase::fromJson(fieldValue, refVal_portMapping);
            setPortMapping(refVal_portMapping);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ports")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ports"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Xml_ns0_enclavePort>> refVal_ports;
            ok &= ModelBase::fromJson(fieldValue, refVal_ports);
            setPorts(refVal_ports);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_process> refVal_process;
            ok &= ModelBase::fromJson(fieldValue, refVal_process);
            setProcess(refVal_process);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_publicIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_publicIdent);
            setPublicIdent(refVal_publicIdent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remoteControlServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remoteControlServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_remoteControlServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_remoteControlServer);
            setRemoteControlServer(refVal_remoteControlServer);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signerIdent")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signerIdent"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_signerIdent;
            ok &= ModelBase::fromJson(fieldValue, refVal_signerIdent);
            setSignerIdent(refVal_signerIdent);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startupCMD")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startupCMD"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_startupCMD;
            ok &= ModelBase::fromJson(fieldValue, refVal_startupCMD);
            setStartupCMD(refVal_startupCMD);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startupTime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startupTime"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_startupTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_startupTime);
            setStartupTime(refVal_startupTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wgInterface")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wgInterface"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_wireguardInterface> refVal_wgInterface;
            ok &= ModelBase::fromJson(fieldValue, refVal_wgInterface);
            setWgInterface(refVal_wgInterface);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wireguardPublicKey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wireguardPublicKey"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wireguardPublicKey;
            ok &= ModelBase::fromJson(fieldValue, refVal_wireguardPublicKey);
            setWireguardPublicKey(refVal_wireguardPublicKey);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wireguardServer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wireguardServer"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_wireguardServer;
            ok &= ModelBase::fromJson(fieldValue, refVal_wireguardServer);
            setWireguardServer(refVal_wireguardServer);
        }
    }
    return ok;
}

void Xml_ns0_enclaveProcess::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AttestationServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("attestationServer"), m_AttestationServer));
    }
    if(m_ConsoleOutputIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("consoleOutput"), m_ConsoleOutput));
    }
    if(m_EnclaveIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveIdent"), m_EnclaveIdent));
    }
    if(m_EnclaveInputstreamIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveInputstream"), m_EnclaveInputstream));
    }
    if(m_EndingTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("endingTime"), m_EndingTime));
    }
    if(m_EnvironmentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("environment"), m_Environment));
    }
    if(m_InternalAttesationServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalAttesationServer"), m_InternalAttesationServer));
    }
    if(m_InternalIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalIdent"), m_InternalIdent));
    }
    if(m_InternalRemoteControlServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalRemoteControlServer"), m_InternalRemoteControlServer));
    }
    if(m_InternalWireguardServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("internalWireguardServer"), m_InternalWireguardServer));
    }
    if(m_KubernetesEnclaveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("kubernetesEnclave"), m_KubernetesEnclave));
    }
    if(m_PortMappingIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("portMapping"), m_PortMapping));
    }
    if(m_PortsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ports"), m_Ports));
    }
    if(m_ProcessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("process"), m_Process));
    }
    if(m_PublicIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("publicIdent"), m_PublicIdent));
    }
    if(m_RemoteControlServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("remoteControlServer"), m_RemoteControlServer));
    }
    if(m_SignerIdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signerIdent"), m_SignerIdent));
    }
    if(m_StartupCMDIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startupCMD"), m_StartupCMD));
    }
    if(m_StartupTimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("startupTime"), m_StartupTime));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_WgInterfaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wgInterface"), m_WgInterface));
    }
    if(m_WireguardPublicKeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wireguardPublicKey"), m_WireguardPublicKey));
    }
    if(m_WireguardServerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wireguardServer"), m_WireguardServer));
    }
}

bool Xml_ns0_enclaveProcess::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("attestationServer")))
    {
        utility::string_t refVal_attestationServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("attestationServer")), refVal_attestationServer );
        setAttestationServer(refVal_attestationServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("consoleOutput")))
    {
        utility::string_t refVal_consoleOutput;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("consoleOutput")), refVal_consoleOutput );
        setConsoleOutput(refVal_consoleOutput);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveIdent")))
    {
        utility::string_t refVal_enclaveIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveIdent")), refVal_enclaveIdent );
        setEnclaveIdent(refVal_enclaveIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("enclaveInputstream")))
    {
        std::shared_ptr<Xml_ns0_inputStream> refVal_enclaveInputstream;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveInputstream")), refVal_enclaveInputstream );
        setEnclaveInputstream(refVal_enclaveInputstream);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("endingTime")))
    {
        utility::string_t refVal_endingTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("endingTime")), refVal_endingTime );
        setEndingTime(refVal_endingTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("environment")))
    {
        std::shared_ptr<Xml_ns0_environment> refVal_environment;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("environment")), refVal_environment );
        setEnvironment(refVal_environment);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("internalAttesationServer")))
    {
        utility::string_t refVal_internalAttesationServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalAttesationServer")), refVal_internalAttesationServer );
        setInternalAttesationServer(refVal_internalAttesationServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("internalIdent")))
    {
        utility::string_t refVal_internalIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalIdent")), refVal_internalIdent );
        setInternalIdent(refVal_internalIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("internalRemoteControlServer")))
    {
        utility::string_t refVal_internalRemoteControlServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalRemoteControlServer")), refVal_internalRemoteControlServer );
        setInternalRemoteControlServer(refVal_internalRemoteControlServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("internalWireguardServer")))
    {
        utility::string_t refVal_internalWireguardServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("internalWireguardServer")), refVal_internalWireguardServer );
        setInternalWireguardServer(refVal_internalWireguardServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("kubernetesEnclave")))
    {
        std::shared_ptr<Xml_ns0_kubernetesEnclave> refVal_kubernetesEnclave;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("kubernetesEnclave")), refVal_kubernetesEnclave );
        setKubernetesEnclave(refVal_kubernetesEnclave);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("portMapping")))
    {
        std::shared_ptr<Object> refVal_portMapping;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("portMapping")), refVal_portMapping );
        setPortMapping(refVal_portMapping);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ports")))
    {
        std::vector<std::shared_ptr<Xml_ns0_enclavePort>> refVal_ports;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ports")), refVal_ports );
        setPorts(refVal_ports);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("process")))
    {
        std::shared_ptr<Xml_ns0_process> refVal_process;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("process")), refVal_process );
        setProcess(refVal_process);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("publicIdent")))
    {
        utility::string_t refVal_publicIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("publicIdent")), refVal_publicIdent );
        setPublicIdent(refVal_publicIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("remoteControlServer")))
    {
        utility::string_t refVal_remoteControlServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("remoteControlServer")), refVal_remoteControlServer );
        setRemoteControlServer(refVal_remoteControlServer);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("signerIdent")))
    {
        utility::string_t refVal_signerIdent;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("signerIdent")), refVal_signerIdent );
        setSignerIdent(refVal_signerIdent);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startupCMD")))
    {
        utility::string_t refVal_startupCMD;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startupCMD")), refVal_startupCMD );
        setStartupCMD(refVal_startupCMD);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("startupTime")))
    {
        utility::string_t refVal_startupTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("startupTime")), refVal_startupTime );
        setStartupTime(refVal_startupTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wgInterface")))
    {
        std::shared_ptr<Xml_ns0_wireguardInterface> refVal_wgInterface;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wgInterface")), refVal_wgInterface );
        setWgInterface(refVal_wgInterface);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wireguardPublicKey")))
    {
        utility::string_t refVal_wireguardPublicKey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wireguardPublicKey")), refVal_wireguardPublicKey );
        setWireguardPublicKey(refVal_wireguardPublicKey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wireguardServer")))
    {
        utility::string_t refVal_wireguardServer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("wireguardServer")), refVal_wireguardServer );
        setWireguardServer(refVal_wireguardServer);
    }
    return ok;
}

utility::string_t Xml_ns0_enclaveProcess::getAttestationServer() const
{
    return m_AttestationServer;
}

void Xml_ns0_enclaveProcess::setAttestationServer(const utility::string_t& value)
{
    m_AttestationServer = value;
    m_AttestationServerIsSet = true;
}

bool Xml_ns0_enclaveProcess::attestationServerIsSet() const
{
    return m_AttestationServerIsSet;
}

void Xml_ns0_enclaveProcess::unsetAttestationServer()
{
    m_AttestationServerIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getConsoleOutput() const
{
    return m_ConsoleOutput;
}

void Xml_ns0_enclaveProcess::setConsoleOutput(const utility::string_t& value)
{
    m_ConsoleOutput = value;
    m_ConsoleOutputIsSet = true;
}

bool Xml_ns0_enclaveProcess::consoleOutputIsSet() const
{
    return m_ConsoleOutputIsSet;
}

void Xml_ns0_enclaveProcess::unsetConsoleOutput()
{
    m_ConsoleOutputIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getEnclaveIdent() const
{
    return m_EnclaveIdent;
}

void Xml_ns0_enclaveProcess::setEnclaveIdent(const utility::string_t& value)
{
    m_EnclaveIdent = value;
    m_EnclaveIdentIsSet = true;
}

bool Xml_ns0_enclaveProcess::enclaveIdentIsSet() const
{
    return m_EnclaveIdentIsSet;
}

void Xml_ns0_enclaveProcess::unsetEnclaveIdent()
{
    m_EnclaveIdentIsSet = false;
}
std::shared_ptr<Xml_ns0_inputStream> Xml_ns0_enclaveProcess::getEnclaveInputstream() const
{
    return m_EnclaveInputstream;
}

void Xml_ns0_enclaveProcess::setEnclaveInputstream(const std::shared_ptr<Xml_ns0_inputStream>& value)
{
    m_EnclaveInputstream = value;
    m_EnclaveInputstreamIsSet = true;
}

bool Xml_ns0_enclaveProcess::enclaveInputstreamIsSet() const
{
    return m_EnclaveInputstreamIsSet;
}

void Xml_ns0_enclaveProcess::unsetEnclaveInputstream()
{
    m_EnclaveInputstreamIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getEndingTime() const
{
    return m_EndingTime;
}

void Xml_ns0_enclaveProcess::setEndingTime(const utility::string_t& value)
{
    m_EndingTime = value;
    m_EndingTimeIsSet = true;
}

bool Xml_ns0_enclaveProcess::endingTimeIsSet() const
{
    return m_EndingTimeIsSet;
}

void Xml_ns0_enclaveProcess::unsetEndingTime()
{
    m_EndingTimeIsSet = false;
}
std::shared_ptr<Xml_ns0_environment> Xml_ns0_enclaveProcess::getEnvironment() const
{
    return m_Environment;
}

void Xml_ns0_enclaveProcess::setEnvironment(const std::shared_ptr<Xml_ns0_environment>& value)
{
    m_Environment = value;
    m_EnvironmentIsSet = true;
}

bool Xml_ns0_enclaveProcess::environmentIsSet() const
{
    return m_EnvironmentIsSet;
}

void Xml_ns0_enclaveProcess::unsetEnvironment()
{
    m_EnvironmentIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getInternalAttesationServer() const
{
    return m_InternalAttesationServer;
}

void Xml_ns0_enclaveProcess::setInternalAttesationServer(const utility::string_t& value)
{
    m_InternalAttesationServer = value;
    m_InternalAttesationServerIsSet = true;
}

bool Xml_ns0_enclaveProcess::internalAttesationServerIsSet() const
{
    return m_InternalAttesationServerIsSet;
}

void Xml_ns0_enclaveProcess::unsetInternalAttesationServer()
{
    m_InternalAttesationServerIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getInternalIdent() const
{
    return m_InternalIdent;
}

void Xml_ns0_enclaveProcess::setInternalIdent(const utility::string_t& value)
{
    m_InternalIdent = value;
    m_InternalIdentIsSet = true;
}

bool Xml_ns0_enclaveProcess::internalIdentIsSet() const
{
    return m_InternalIdentIsSet;
}

void Xml_ns0_enclaveProcess::unsetInternalIdent()
{
    m_InternalIdentIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getInternalRemoteControlServer() const
{
    return m_InternalRemoteControlServer;
}

void Xml_ns0_enclaveProcess::setInternalRemoteControlServer(const utility::string_t& value)
{
    m_InternalRemoteControlServer = value;
    m_InternalRemoteControlServerIsSet = true;
}

bool Xml_ns0_enclaveProcess::internalRemoteControlServerIsSet() const
{
    return m_InternalRemoteControlServerIsSet;
}

void Xml_ns0_enclaveProcess::unsetInternalRemoteControlServer()
{
    m_InternalRemoteControlServerIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getInternalWireguardServer() const
{
    return m_InternalWireguardServer;
}

void Xml_ns0_enclaveProcess::setInternalWireguardServer(const utility::string_t& value)
{
    m_InternalWireguardServer = value;
    m_InternalWireguardServerIsSet = true;
}

bool Xml_ns0_enclaveProcess::internalWireguardServerIsSet() const
{
    return m_InternalWireguardServerIsSet;
}

void Xml_ns0_enclaveProcess::unsetInternalWireguardServer()
{
    m_InternalWireguardServerIsSet = false;
}
std::shared_ptr<Xml_ns0_kubernetesEnclave> Xml_ns0_enclaveProcess::getKubernetesEnclave() const
{
    return m_KubernetesEnclave;
}

void Xml_ns0_enclaveProcess::setKubernetesEnclave(const std::shared_ptr<Xml_ns0_kubernetesEnclave>& value)
{
    m_KubernetesEnclave = value;
    m_KubernetesEnclaveIsSet = true;
}

bool Xml_ns0_enclaveProcess::kubernetesEnclaveIsSet() const
{
    return m_KubernetesEnclaveIsSet;
}

void Xml_ns0_enclaveProcess::unsetKubernetesEnclave()
{
    m_KubernetesEnclaveIsSet = false;
}
std::shared_ptr<Object> Xml_ns0_enclaveProcess::getPortMapping() const
{
    return m_PortMapping;
}

void Xml_ns0_enclaveProcess::setPortMapping(const std::shared_ptr<Object>& value)
{
    m_PortMapping = value;
    m_PortMappingIsSet = true;
}

bool Xml_ns0_enclaveProcess::portMappingIsSet() const
{
    return m_PortMappingIsSet;
}

void Xml_ns0_enclaveProcess::unsetPortMapping()
{
    m_PortMappingIsSet = false;
}
std::vector<std::shared_ptr<Xml_ns0_enclavePort>>& Xml_ns0_enclaveProcess::getPorts()
{
    return m_Ports;
}

void Xml_ns0_enclaveProcess::setPorts(const std::vector<std::shared_ptr<Xml_ns0_enclavePort>>& value)
{
    m_Ports = value;
    m_PortsIsSet = true;
}

bool Xml_ns0_enclaveProcess::portsIsSet() const
{
    return m_PortsIsSet;
}

void Xml_ns0_enclaveProcess::unsetPorts()
{
    m_PortsIsSet = false;
}
std::shared_ptr<Xml_ns0_process> Xml_ns0_enclaveProcess::getProcess() const
{
    return m_Process;
}

void Xml_ns0_enclaveProcess::setProcess(const std::shared_ptr<Xml_ns0_process>& value)
{
    m_Process = value;
    m_ProcessIsSet = true;
}

bool Xml_ns0_enclaveProcess::processIsSet() const
{
    return m_ProcessIsSet;
}

void Xml_ns0_enclaveProcess::unsetProcess()
{
    m_ProcessIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getPublicIdent() const
{
    return m_PublicIdent;
}

void Xml_ns0_enclaveProcess::setPublicIdent(const utility::string_t& value)
{
    m_PublicIdent = value;
    m_PublicIdentIsSet = true;
}

bool Xml_ns0_enclaveProcess::publicIdentIsSet() const
{
    return m_PublicIdentIsSet;
}

void Xml_ns0_enclaveProcess::unsetPublicIdent()
{
    m_PublicIdentIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getRemoteControlServer() const
{
    return m_RemoteControlServer;
}

void Xml_ns0_enclaveProcess::setRemoteControlServer(const utility::string_t& value)
{
    m_RemoteControlServer = value;
    m_RemoteControlServerIsSet = true;
}

bool Xml_ns0_enclaveProcess::remoteControlServerIsSet() const
{
    return m_RemoteControlServerIsSet;
}

void Xml_ns0_enclaveProcess::unsetRemoteControlServer()
{
    m_RemoteControlServerIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getSignerIdent() const
{
    return m_SignerIdent;
}

void Xml_ns0_enclaveProcess::setSignerIdent(const utility::string_t& value)
{
    m_SignerIdent = value;
    m_SignerIdentIsSet = true;
}

bool Xml_ns0_enclaveProcess::signerIdentIsSet() const
{
    return m_SignerIdentIsSet;
}

void Xml_ns0_enclaveProcess::unsetSignerIdent()
{
    m_SignerIdentIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getStartupCMD() const
{
    return m_StartupCMD;
}

void Xml_ns0_enclaveProcess::setStartupCMD(const utility::string_t& value)
{
    m_StartupCMD = value;
    m_StartupCMDIsSet = true;
}

bool Xml_ns0_enclaveProcess::startupCMDIsSet() const
{
    return m_StartupCMDIsSet;
}

void Xml_ns0_enclaveProcess::unsetStartupCMD()
{
    m_StartupCMDIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getStartupTime() const
{
    return m_StartupTime;
}

void Xml_ns0_enclaveProcess::setStartupTime(const utility::string_t& value)
{
    m_StartupTime = value;
    m_StartupTimeIsSet = true;
}

bool Xml_ns0_enclaveProcess::startupTimeIsSet() const
{
    return m_StartupTimeIsSet;
}

void Xml_ns0_enclaveProcess::unsetStartupTime()
{
    m_StartupTimeIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getStatus() const
{
    return m_Status;
}

void Xml_ns0_enclaveProcess::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Xml_ns0_enclaveProcess::statusIsSet() const
{
    return m_StatusIsSet;
}

void Xml_ns0_enclaveProcess::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<Xml_ns0_wireguardInterface> Xml_ns0_enclaveProcess::getWgInterface() const
{
    return m_WgInterface;
}

void Xml_ns0_enclaveProcess::setWgInterface(const std::shared_ptr<Xml_ns0_wireguardInterface>& value)
{
    m_WgInterface = value;
    m_WgInterfaceIsSet = true;
}

bool Xml_ns0_enclaveProcess::wgInterfaceIsSet() const
{
    return m_WgInterfaceIsSet;
}

void Xml_ns0_enclaveProcess::unsetWgInterface()
{
    m_WgInterfaceIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getWireguardPublicKey() const
{
    return m_WireguardPublicKey;
}

void Xml_ns0_enclaveProcess::setWireguardPublicKey(const utility::string_t& value)
{
    m_WireguardPublicKey = value;
    m_WireguardPublicKeyIsSet = true;
}

bool Xml_ns0_enclaveProcess::wireguardPublicKeyIsSet() const
{
    return m_WireguardPublicKeyIsSet;
}

void Xml_ns0_enclaveProcess::unsetWireguardPublicKey()
{
    m_WireguardPublicKeyIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess::getWireguardServer() const
{
    return m_WireguardServer;
}

void Xml_ns0_enclaveProcess::setWireguardServer(const utility::string_t& value)
{
    m_WireguardServer = value;
    m_WireguardServerIsSet = true;
}

bool Xml_ns0_enclaveProcess::wireguardServerIsSet() const
{
    return m_WireguardServerIsSet;
}

void Xml_ns0_enclaveProcess::unsetWireguardServer()
{
    m_WireguardServerIsSet = false;
}
}
}
}
}


