/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.25
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_enclaveRunningAttestationApproval.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_enclaveRunningAttestationApproval::Xml_ns0_enclaveRunningAttestationApproval()
{
    m_EnclaveProcessIsSet = false;
    m_NodeInfoIsSet = false;
    m_Approved = utility::conversions::to_string_t("");
    m_ApprovedIsSet = false;
}

Xml_ns0_enclaveRunningAttestationApproval::~Xml_ns0_enclaveRunningAttestationApproval()
{
}

void Xml_ns0_enclaveRunningAttestationApproval::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_enclaveRunningAttestationApproval::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_EnclaveProcessIsSet)
    {
        val[utility::conversions::to_string_t("enclaveProcess")] = ModelBase::toJson(m_EnclaveProcess);
    }
    if(m_NodeInfoIsSet)
    {
        val[utility::conversions::to_string_t("nodeInfo")] = ModelBase::toJson(m_NodeInfo);
    }
    if(m_ApprovedIsSet)
    {
        val[utility::conversions::to_string_t("approved")] = ModelBase::toJson(m_Approved);
    }

    return val;
}

bool Xml_ns0_enclaveRunningAttestationApproval::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enclaveProcess")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enclaveProcess"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_enclaveProcess> refVal_enclaveProcess;
            ok &= ModelBase::fromJson(fieldValue, refVal_enclaveProcess);
            setEnclaveProcess(refVal_enclaveProcess);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeInfo"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_nodeInfo> refVal_nodeInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_nodeInfo);
            setNodeInfo(refVal_nodeInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approved")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approved"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_approved;
            ok &= ModelBase::fromJson(fieldValue, refVal_approved);
            setApproved(refVal_approved);
        }
    }
    return ok;
}

void Xml_ns0_enclaveRunningAttestationApproval::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_EnclaveProcessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enclaveProcess"), m_EnclaveProcess));
    }
    if(m_NodeInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("nodeInfo"), m_NodeInfo));
    }
    if(m_ApprovedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("approved"), m_Approved));
    }
}

bool Xml_ns0_enclaveRunningAttestationApproval::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("enclaveProcess")))
    {
        std::shared_ptr<Xml_ns0_enclaveProcess> refVal_enclaveProcess;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("enclaveProcess")), refVal_enclaveProcess );
        setEnclaveProcess(refVal_enclaveProcess);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("nodeInfo")))
    {
        std::shared_ptr<Xml_ns0_nodeInfo> refVal_nodeInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("nodeInfo")), refVal_nodeInfo );
        setNodeInfo(refVal_nodeInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("approved")))
    {
        utility::string_t refVal_approved;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("approved")), refVal_approved );
        setApproved(refVal_approved);
    }
    return ok;
}

std::shared_ptr<Xml_ns0_enclaveProcess> Xml_ns0_enclaveRunningAttestationApproval::getEnclaveProcess() const
{
    return m_EnclaveProcess;
}

void Xml_ns0_enclaveRunningAttestationApproval::setEnclaveProcess(const std::shared_ptr<Xml_ns0_enclaveProcess>& value)
{
    m_EnclaveProcess = value;
    m_EnclaveProcessIsSet = true;
}

bool Xml_ns0_enclaveRunningAttestationApproval::enclaveProcessIsSet() const
{
    return m_EnclaveProcessIsSet;
}

void Xml_ns0_enclaveRunningAttestationApproval::unsetEnclaveProcess()
{
    m_EnclaveProcessIsSet = false;
}
std::shared_ptr<Xml_ns0_nodeInfo> Xml_ns0_enclaveRunningAttestationApproval::getNodeInfo() const
{
    return m_NodeInfo;
}

void Xml_ns0_enclaveRunningAttestationApproval::setNodeInfo(const std::shared_ptr<Xml_ns0_nodeInfo>& value)
{
    m_NodeInfo = value;
    m_NodeInfoIsSet = true;
}

bool Xml_ns0_enclaveRunningAttestationApproval::nodeInfoIsSet() const
{
    return m_NodeInfoIsSet;
}

void Xml_ns0_enclaveRunningAttestationApproval::unsetNodeInfo()
{
    m_NodeInfoIsSet = false;
}
utility::string_t Xml_ns0_enclaveRunningAttestationApproval::getApproved() const
{
    return m_Approved;
}

void Xml_ns0_enclaveRunningAttestationApproval::setApproved(const utility::string_t& value)
{
    m_Approved = value;
    m_ApprovedIsSet = true;
}

bool Xml_ns0_enclaveRunningAttestationApproval::approvedIsSet() const
{
    return m_ApprovedIsSet;
}

void Xml_ns0_enclaveRunningAttestationApproval::unsetApproved()
{
    m_ApprovedIsSet = false;
}
}
}
}
}


