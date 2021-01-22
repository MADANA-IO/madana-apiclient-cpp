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



#include "Xml_ns0_enclavePort_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_enclavePort_allOf::Xml_ns0_enclavePort_allOf()
{
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Port = utility::conversions::to_string_t("");
    m_PortIsSet = false;
    m_Protocol = utility::conversions::to_string_t("");
    m_ProtocolIsSet = false;
}

Xml_ns0_enclavePort_allOf::~Xml_ns0_enclavePort_allOf()
{
}

void Xml_ns0_enclavePort_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_enclavePort_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_PortIsSet)
    {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(m_Port);
    }
    if(m_ProtocolIsSet)
    {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(m_Protocol);
    }

    return val;
}

bool Xml_ns0_enclavePort_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_port;
            ok &= ModelBase::fromJson(fieldValue, refVal_port);
            setPort(refVal_port);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_protocol;
            ok &= ModelBase::fromJson(fieldValue, refVal_protocol);
            setProtocol(refVal_protocol);
        }
    }
    return ok;
}

void Xml_ns0_enclavePort_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_PortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("port"), m_Port));
    }
    if(m_ProtocolIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("protocol"), m_Protocol));
    }
}

bool Xml_ns0_enclavePort_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("port")))
    {
        utility::string_t refVal_port;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("port")), refVal_port );
        setPort(refVal_port);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("protocol")))
    {
        utility::string_t refVal_protocol;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("protocol")), refVal_protocol );
        setProtocol(refVal_protocol);
    }
    return ok;
}

utility::string_t Xml_ns0_enclavePort_allOf::getName() const
{
    return m_Name;
}

void Xml_ns0_enclavePort_allOf::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Xml_ns0_enclavePort_allOf::nameIsSet() const
{
    return m_NameIsSet;
}

void Xml_ns0_enclavePort_allOf::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Xml_ns0_enclavePort_allOf::getPort() const
{
    return m_Port;
}

void Xml_ns0_enclavePort_allOf::setPort(const utility::string_t& value)
{
    m_Port = value;
    m_PortIsSet = true;
}

bool Xml_ns0_enclavePort_allOf::portIsSet() const
{
    return m_PortIsSet;
}

void Xml_ns0_enclavePort_allOf::unsetPort()
{
    m_PortIsSet = false;
}
utility::string_t Xml_ns0_enclavePort_allOf::getProtocol() const
{
    return m_Protocol;
}

void Xml_ns0_enclavePort_allOf::setProtocol(const utility::string_t& value)
{
    m_Protocol = value;
    m_ProtocolIsSet = true;
}

bool Xml_ns0_enclavePort_allOf::protocolIsSet() const
{
    return m_ProtocolIsSet;
}

void Xml_ns0_enclavePort_allOf::unsetProtocol()
{
    m_ProtocolIsSet = false;
}
}
}
}
}


