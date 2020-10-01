/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.4
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_MDN_UserProfileImage_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_MDN_UserProfileImage_allOf::Xml_ns0_MDN_UserProfileImage_allOf()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
}

Xml_ns0_MDN_UserProfileImage_allOf::~Xml_ns0_MDN_UserProfileImage_allOf()
{
}

void Xml_ns0_MDN_UserProfileImage_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_MDN_UserProfileImage_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }

    return val;
}

bool Xml_ns0_MDN_UserProfileImage_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("image")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_image;
            ok &= ModelBase::fromJson(fieldValue, refVal_image);
            setImage(refVal_image);
        }
    }
    return ok;
}

void Xml_ns0_MDN_UserProfileImage_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
}

bool Xml_ns0_MDN_UserProfileImage_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        utility::string_t refVal_image;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("image")), refVal_image );
        setImage(refVal_image);
    }
    return ok;
}

utility::string_t Xml_ns0_MDN_UserProfileImage_allOf::getId() const
{
    return m_Id;
}

void Xml_ns0_MDN_UserProfileImage_allOf::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool Xml_ns0_MDN_UserProfileImage_allOf::idIsSet() const
{
    return m_IdIsSet;
}

void Xml_ns0_MDN_UserProfileImage_allOf::unsetId()
{
    m_IdIsSet = false;
}
utility::string_t Xml_ns0_MDN_UserProfileImage_allOf::getImage() const
{
    return m_Image;
}

void Xml_ns0_MDN_UserProfileImage_allOf::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool Xml_ns0_MDN_UserProfileImage_allOf::imageIsSet() const
{
    return m_ImageIsSet;
}

void Xml_ns0_MDN_UserProfileImage_allOf::unsetImage()
{
    m_ImageIsSet = false;
}
}
}
}
}


