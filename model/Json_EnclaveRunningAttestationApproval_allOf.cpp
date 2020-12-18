/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.16
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_EnclaveRunningAttestationApproval_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_EnclaveRunningAttestationApproval_allOf::Json_EnclaveRunningAttestationApproval_allOf()
{
    m_Approved = utility::conversions::to_string_t("");
    m_ApprovedIsSet = false;
}

Json_EnclaveRunningAttestationApproval_allOf::~Json_EnclaveRunningAttestationApproval_allOf()
{
}

void Json_EnclaveRunningAttestationApproval_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Json_EnclaveRunningAttestationApproval_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ApprovedIsSet)
    {
        val[utility::conversions::to_string_t("approved")] = ModelBase::toJson(m_Approved);
    }

    return val;
}

bool Json_EnclaveRunningAttestationApproval_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

void Json_EnclaveRunningAttestationApproval_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ApprovedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("approved"), m_Approved));
    }
}

bool Json_EnclaveRunningAttestationApproval_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("approved")))
    {
        utility::string_t refVal_approved;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("approved")), refVal_approved );
        setApproved(refVal_approved);
    }
    return ok;
}

utility::string_t Json_EnclaveRunningAttestationApproval_allOf::getApproved() const
{
    return m_Approved;
}

void Json_EnclaveRunningAttestationApproval_allOf::setApproved(const utility::string_t& value)
{
    m_Approved = value;
    m_ApprovedIsSet = true;
}

bool Json_EnclaveRunningAttestationApproval_allOf::approvedIsSet() const
{
    return m_ApprovedIsSet;
}

void Json_EnclaveRunningAttestationApproval_allOf::unsetApproved()
{
    m_ApprovedIsSet = false;
}
}
}
}
}


