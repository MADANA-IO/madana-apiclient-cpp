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



#include "Json_V1EventSource.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1EventSource::Json_V1EventSource()
{
    m_Host = utility::conversions::to_string_t("");
    m_HostIsSet = false;
    m_Component = utility::conversions::to_string_t("");
    m_ComponentIsSet = false;
}

Json_V1EventSource::~Json_V1EventSource()
{
}

void Json_V1EventSource::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1EventSource::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_HostIsSet)
    {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(m_Host);
    }
    if(m_ComponentIsSet)
    {
        val[utility::conversions::to_string_t("component")] = ModelBase::toJson(m_Component);
    }

    return val;
}

bool Json_V1EventSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_host;
            ok &= ModelBase::fromJson(fieldValue, refVal_host);
            setHost(refVal_host);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_component;
            ok &= ModelBase::fromJson(fieldValue, refVal_component);
            setComponent(refVal_component);
        }
    }
    return ok;
}

void Json_V1EventSource::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_HostIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("host"), m_Host));
    }
    if(m_ComponentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("component"), m_Component));
    }
}

bool Json_V1EventSource::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("host")))
    {
        utility::string_t refVal_host;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("host")), refVal_host );
        setHost(refVal_host);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("component")))
    {
        utility::string_t refVal_component;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("component")), refVal_component );
        setComponent(refVal_component);
    }
    return ok;
}

utility::string_t Json_V1EventSource::getHost() const
{
    return m_Host;
}

void Json_V1EventSource::setHost(const utility::string_t& value)
{
    m_Host = value;
    m_HostIsSet = true;
}

bool Json_V1EventSource::hostIsSet() const
{
    return m_HostIsSet;
}

void Json_V1EventSource::unsetHost()
{
    m_HostIsSet = false;
}
utility::string_t Json_V1EventSource::getComponent() const
{
    return m_Component;
}

void Json_V1EventSource::setComponent(const utility::string_t& value)
{
    m_Component = value;
    m_ComponentIsSet = true;
}

bool Json_V1EventSource::componentIsSet() const
{
    return m_ComponentIsSet;
}

void Json_V1EventSource::unsetComponent()
{
    m_ComponentIsSet = false;
}
}
}
}
}


