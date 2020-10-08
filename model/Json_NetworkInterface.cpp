/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_NetworkInterface.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_NetworkInterface::Json_NetworkInterface()
{
    m_Address = utility::conversions::to_string_t("");
    m_AddressIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

Json_NetworkInterface::~Json_NetworkInterface()
{
}

void Json_NetworkInterface::validate()
{
    // TODO: implement validation
}

web::json::value Json_NetworkInterface::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(m_Address);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }

    return val;
}

bool Json_NetworkInterface::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_address;
            ok &= ModelBase::fromJson(fieldValue, refVal_address);
            setAddress(refVal_address);
        }
    }
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
    return ok;
}

void Json_NetworkInterface::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("address"), m_Address));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
}

bool Json_NetworkInterface::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("address")))
    {
        utility::string_t refVal_address;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("address")), refVal_address );
        setAddress(refVal_address);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    return ok;
}

utility::string_t Json_NetworkInterface::getAddress() const
{
    return m_Address;
}

void Json_NetworkInterface::setAddress(const utility::string_t& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool Json_NetworkInterface::addressIsSet() const
{
    return m_AddressIsSet;
}

void Json_NetworkInterface::unsetAddress()
{
    m_AddressIsSet = false;
}
utility::string_t Json_NetworkInterface::getName() const
{
    return m_Name;
}

void Json_NetworkInterface::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Json_NetworkInterface::nameIsSet() const
{
    return m_NameIsSet;
}

void Json_NetworkInterface::unsetName()
{
    m_NameIsSet = false;
}
}
}
}
}


