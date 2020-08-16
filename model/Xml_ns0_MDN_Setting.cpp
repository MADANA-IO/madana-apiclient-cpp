/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.14-master.16
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_MDN_Setting.h"

namespace com {
namespace madana {
namespace client {
namespace model {




Xml_ns0_MDN_Setting::Xml_ns0_MDN_Setting()
{
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
}

Xml_ns0_MDN_Setting::~Xml_ns0_MDN_Setting()
{
}

void Xml_ns0_MDN_Setting::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_MDN_Setting::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }

    return val;
}

bool Xml_ns0_MDN_Setting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
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

void Xml_ns0_MDN_Setting::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
}

bool Xml_ns0_MDN_Setting::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    return ok;
}

utility::string_t Xml_ns0_MDN_Setting::getDescription() const
{
    return m_Description;
}

void Xml_ns0_MDN_Setting::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Xml_ns0_MDN_Setting::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Xml_ns0_MDN_Setting::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Xml_ns0_MDN_Setting::getId() const
{
    return m_Id;
}

void Xml_ns0_MDN_Setting::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Xml_ns0_MDN_Setting::idIsSet() const
{
    return m_IdIsSet;
}

void Xml_ns0_MDN_Setting::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Xml_ns0_MDN_Setting::getName() const
{
    return m_Name;
}

void Xml_ns0_MDN_Setting::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Xml_ns0_MDN_Setting::nameIsSet() const
{
    return m_NameIsSet;
}

void Xml_ns0_MDN_Setting::unsetName()
{
    m_NameIsSet = false;
}
}
}
}
}

