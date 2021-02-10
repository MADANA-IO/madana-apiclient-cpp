/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.54
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_NodeRunRequest.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_NodeRunRequest::Json_NodeRunRequest()
{
    m_CpuCount = utility::conversions::to_string_t("");
    m_CpuCountIsSet = false;
    m_Subdomain = utility::conversions::to_string_t("");
    m_SubdomainIsSet = false;
}

Json_NodeRunRequest::~Json_NodeRunRequest()
{
}

void Json_NodeRunRequest::validate()
{
    // TODO: implement validation
}

web::json::value Json_NodeRunRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CpuCountIsSet)
    {
        val[utility::conversions::to_string_t("cpuCount")] = ModelBase::toJson(m_CpuCount);
    }
    if(m_SubdomainIsSet)
    {
        val[utility::conversions::to_string_t("subdomain")] = ModelBase::toJson(m_Subdomain);
    }

    return val;
}

bool Json_NodeRunRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cpuCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuCount"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cpuCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuCount);
            setCpuCount(refVal_cpuCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subdomain")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subdomain"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_subdomain;
            ok &= ModelBase::fromJson(fieldValue, refVal_subdomain);
            setSubdomain(refVal_subdomain);
        }
    }
    return ok;
}

void Json_NodeRunRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CpuCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuCount"), m_CpuCount));
    }
    if(m_SubdomainIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("subdomain"), m_Subdomain));
    }
}

bool Json_NodeRunRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("cpuCount")))
    {
        utility::string_t refVal_cpuCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuCount")), refVal_cpuCount );
        setCpuCount(refVal_cpuCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("subdomain")))
    {
        utility::string_t refVal_subdomain;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("subdomain")), refVal_subdomain );
        setSubdomain(refVal_subdomain);
    }
    return ok;
}

utility::string_t Json_NodeRunRequest::getCpuCount() const
{
    return m_CpuCount;
}

void Json_NodeRunRequest::setCpuCount(const utility::string_t& value)
{
    m_CpuCount = value;
    m_CpuCountIsSet = true;
}

bool Json_NodeRunRequest::cpuCountIsSet() const
{
    return m_CpuCountIsSet;
}

void Json_NodeRunRequest::unsetCpuCount()
{
    m_CpuCountIsSet = false;
}
utility::string_t Json_NodeRunRequest::getSubdomain() const
{
    return m_Subdomain;
}

void Json_NodeRunRequest::setSubdomain(const utility::string_t& value)
{
    m_Subdomain = value;
    m_SubdomainIsSet = true;
}

bool Json_NodeRunRequest::subdomainIsSet() const
{
    return m_SubdomainIsSet;
}

void Json_NodeRunRequest::unsetSubdomain()
{
    m_SubdomainIsSet = false;
}
}
}
}
}


