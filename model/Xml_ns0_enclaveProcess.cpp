/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.8
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
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
    web::json::value val = this->Xml_ns0_enclaveProcess_allOf::toJson();
    

    return val;
}

bool Xml_ns0_enclaveProcess::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->Xml_ns0_enclaveProcess_allOf::fromJson(val);
    
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

}
}
}
}


