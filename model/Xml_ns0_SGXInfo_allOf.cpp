/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.43
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_SGXInfo_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_SGXInfo_allOf::Xml_ns0_SGXInfo_allOf()
{
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
    m_Version = utility::conversions::to_string_t("");
    m_VersionIsSet = false;
}

Xml_ns0_SGXInfo_allOf::~Xml_ns0_SGXInfo_allOf()
{
}

void Xml_ns0_SGXInfo_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_SGXInfo_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }
    if(m_VersionIsSet)
    {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(m_Version);
    }

    return val;
}

bool Xml_ns0_SGXInfo_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("version")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_version;
            ok &= ModelBase::fromJson(fieldValue, refVal_version);
            setVersion(refVal_version);
        }
    }
    return ok;
}

void Xml_ns0_SGXInfo_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
    if(m_VersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("version"), m_Version));
    }
}

bool Xml_ns0_SGXInfo_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("version")))
    {
        utility::string_t refVal_version;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("version")), refVal_version );
        setVersion(refVal_version);
    }
    return ok;
}

utility::string_t Xml_ns0_SGXInfo_allOf::getStatus() const
{
    return m_Status;
}

void Xml_ns0_SGXInfo_allOf::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Xml_ns0_SGXInfo_allOf::statusIsSet() const
{
    return m_StatusIsSet;
}

void Xml_ns0_SGXInfo_allOf::unsetStatus()
{
    m_StatusIsSet = false;
}
utility::string_t Xml_ns0_SGXInfo_allOf::getVersion() const
{
    return m_Version;
}

void Xml_ns0_SGXInfo_allOf::setVersion(const utility::string_t& value)
{
    m_Version = value;
    m_VersionIsSet = true;
}

bool Xml_ns0_SGXInfo_allOf::versionIsSet() const
{
    return m_VersionIsSet;
}

void Xml_ns0_SGXInfo_allOf::unsetVersion()
{
    m_VersionIsSet = false;
}
}
}
}
}


