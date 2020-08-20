/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.14-master.20
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_enclaveProcess_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_enclaveProcess_allOf::Xml_ns0_enclaveProcess_allOf()
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
    m_ProcessIsSet = false;
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
}

Xml_ns0_enclaveProcess_allOf::~Xml_ns0_enclaveProcess_allOf()
{
}

void Xml_ns0_enclaveProcess_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_enclaveProcess_allOf::toJson() const
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
    if(m_ProcessIsSet)
    {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(m_Process);
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

    return val;
}

bool Xml_ns0_enclaveProcess_allOf::fromJson(const web::json::value& val)
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
    return ok;
}

void Xml_ns0_enclaveProcess_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_ProcessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("process"), m_Process));
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
}

bool Xml_ns0_enclaveProcess_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("process")))
    {
        std::shared_ptr<Xml_ns0_process> refVal_process;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("process")), refVal_process );
        setProcess(refVal_process);
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
    return ok;
}

utility::string_t Xml_ns0_enclaveProcess_allOf::getAttestationServer() const
{
    return m_AttestationServer;
}

void Xml_ns0_enclaveProcess_allOf::setAttestationServer(const utility::string_t& value)
{
    m_AttestationServer = value;
    m_AttestationServerIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::attestationServerIsSet() const
{
    return m_AttestationServerIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetAttestationServer()
{
    m_AttestationServerIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getConsoleOutput() const
{
    return m_ConsoleOutput;
}

void Xml_ns0_enclaveProcess_allOf::setConsoleOutput(const utility::string_t& value)
{
    m_ConsoleOutput = value;
    m_ConsoleOutputIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::consoleOutputIsSet() const
{
    return m_ConsoleOutputIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetConsoleOutput()
{
    m_ConsoleOutputIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getEnclaveIdent() const
{
    return m_EnclaveIdent;
}

void Xml_ns0_enclaveProcess_allOf::setEnclaveIdent(const utility::string_t& value)
{
    m_EnclaveIdent = value;
    m_EnclaveIdentIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::enclaveIdentIsSet() const
{
    return m_EnclaveIdentIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetEnclaveIdent()
{
    m_EnclaveIdentIsSet = false;
}
std::shared_ptr<Xml_ns0_inputStream> Xml_ns0_enclaveProcess_allOf::getEnclaveInputstream() const
{
    return m_EnclaveInputstream;
}

void Xml_ns0_enclaveProcess_allOf::setEnclaveInputstream(const std::shared_ptr<Xml_ns0_inputStream>& value)
{
    m_EnclaveInputstream = value;
    m_EnclaveInputstreamIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::enclaveInputstreamIsSet() const
{
    return m_EnclaveInputstreamIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetEnclaveInputstream()
{
    m_EnclaveInputstreamIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getEndingTime() const
{
    return m_EndingTime;
}

void Xml_ns0_enclaveProcess_allOf::setEndingTime(const utility::string_t& value)
{
    m_EndingTime = value;
    m_EndingTimeIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::endingTimeIsSet() const
{
    return m_EndingTimeIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetEndingTime()
{
    m_EndingTimeIsSet = false;
}
std::shared_ptr<Xml_ns0_environment> Xml_ns0_enclaveProcess_allOf::getEnvironment() const
{
    return m_Environment;
}

void Xml_ns0_enclaveProcess_allOf::setEnvironment(const std::shared_ptr<Xml_ns0_environment>& value)
{
    m_Environment = value;
    m_EnvironmentIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::environmentIsSet() const
{
    return m_EnvironmentIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetEnvironment()
{
    m_EnvironmentIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getInternalAttesationServer() const
{
    return m_InternalAttesationServer;
}

void Xml_ns0_enclaveProcess_allOf::setInternalAttesationServer(const utility::string_t& value)
{
    m_InternalAttesationServer = value;
    m_InternalAttesationServerIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::internalAttesationServerIsSet() const
{
    return m_InternalAttesationServerIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetInternalAttesationServer()
{
    m_InternalAttesationServerIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getInternalIdent() const
{
    return m_InternalIdent;
}

void Xml_ns0_enclaveProcess_allOf::setInternalIdent(const utility::string_t& value)
{
    m_InternalIdent = value;
    m_InternalIdentIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::internalIdentIsSet() const
{
    return m_InternalIdentIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetInternalIdent()
{
    m_InternalIdentIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getInternalRemoteControlServer() const
{
    return m_InternalRemoteControlServer;
}

void Xml_ns0_enclaveProcess_allOf::setInternalRemoteControlServer(const utility::string_t& value)
{
    m_InternalRemoteControlServer = value;
    m_InternalRemoteControlServerIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::internalRemoteControlServerIsSet() const
{
    return m_InternalRemoteControlServerIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetInternalRemoteControlServer()
{
    m_InternalRemoteControlServerIsSet = false;
}
std::shared_ptr<Xml_ns0_process> Xml_ns0_enclaveProcess_allOf::getProcess() const
{
    return m_Process;
}

void Xml_ns0_enclaveProcess_allOf::setProcess(const std::shared_ptr<Xml_ns0_process>& value)
{
    m_Process = value;
    m_ProcessIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::processIsSet() const
{
    return m_ProcessIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetProcess()
{
    m_ProcessIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getRemoteControlServer() const
{
    return m_RemoteControlServer;
}

void Xml_ns0_enclaveProcess_allOf::setRemoteControlServer(const utility::string_t& value)
{
    m_RemoteControlServer = value;
    m_RemoteControlServerIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::remoteControlServerIsSet() const
{
    return m_RemoteControlServerIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetRemoteControlServer()
{
    m_RemoteControlServerIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getSignerIdent() const
{
    return m_SignerIdent;
}

void Xml_ns0_enclaveProcess_allOf::setSignerIdent(const utility::string_t& value)
{
    m_SignerIdent = value;
    m_SignerIdentIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::signerIdentIsSet() const
{
    return m_SignerIdentIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetSignerIdent()
{
    m_SignerIdentIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getStartupCMD() const
{
    return m_StartupCMD;
}

void Xml_ns0_enclaveProcess_allOf::setStartupCMD(const utility::string_t& value)
{
    m_StartupCMD = value;
    m_StartupCMDIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::startupCMDIsSet() const
{
    return m_StartupCMDIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetStartupCMD()
{
    m_StartupCMDIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getStartupTime() const
{
    return m_StartupTime;
}

void Xml_ns0_enclaveProcess_allOf::setStartupTime(const utility::string_t& value)
{
    m_StartupTime = value;
    m_StartupTimeIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::startupTimeIsSet() const
{
    return m_StartupTimeIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetStartupTime()
{
    m_StartupTimeIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getStatus() const
{
    return m_Status;
}

void Xml_ns0_enclaveProcess_allOf::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::statusIsSet() const
{
    return m_StatusIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetStatus()
{
    m_StatusIsSet = false;
}
std::shared_ptr<Xml_ns0_wireguardInterface> Xml_ns0_enclaveProcess_allOf::getWgInterface() const
{
    return m_WgInterface;
}

void Xml_ns0_enclaveProcess_allOf::setWgInterface(const std::shared_ptr<Xml_ns0_wireguardInterface>& value)
{
    m_WgInterface = value;
    m_WgInterfaceIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::wgInterfaceIsSet() const
{
    return m_WgInterfaceIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetWgInterface()
{
    m_WgInterfaceIsSet = false;
}
utility::string_t Xml_ns0_enclaveProcess_allOf::getWireguardPublicKey() const
{
    return m_WireguardPublicKey;
}

void Xml_ns0_enclaveProcess_allOf::setWireguardPublicKey(const utility::string_t& value)
{
    m_WireguardPublicKey = value;
    m_WireguardPublicKeyIsSet = true;
}

bool Xml_ns0_enclaveProcess_allOf::wireguardPublicKeyIsSet() const
{
    return m_WireguardPublicKeyIsSet;
}

void Xml_ns0_enclaveProcess_allOf::unsetWireguardPublicKey()
{
    m_WireguardPublicKeyIsSet = false;
}
}
}
}
}


