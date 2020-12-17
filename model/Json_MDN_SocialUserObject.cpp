/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.11
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_MDN_SocialUserObject.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_SocialUserObject::Json_MDN_SocialUserObject()
{
    m_Ident = utility::conversions::to_string_t("");
    m_IdentIsSet = false;
    m_Platform = utility::conversions::to_string_t("");
    m_PlatformIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
}

Json_MDN_SocialUserObject::~Json_MDN_SocialUserObject()
{
}

void Json_MDN_SocialUserObject::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_SocialUserObject::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdentIsSet)
    {
        val[utility::conversions::to_string_t("ident")] = ModelBase::toJson(m_Ident);
    }
    if(m_PlatformIsSet)
    {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(m_Platform);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }

    return val;
}

bool Json_MDN_SocialUserObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ident")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ident"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ident;
            ok &= ModelBase::fromJson(fieldValue, refVal_ident);
            setIdent(refVal_ident);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_platform;
            ok &= ModelBase::fromJson(fieldValue, refVal_platform);
            setPlatform(refVal_platform);
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

void Json_MDN_SocialUserObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ident"), m_Ident));
    }
    if(m_PlatformIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("platform"), m_Platform));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
}

bool Json_MDN_SocialUserObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("ident")))
    {
        utility::string_t refVal_ident;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ident")), refVal_ident );
        setIdent(refVal_ident);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("platform")))
    {
        utility::string_t refVal_platform;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("platform")), refVal_platform );
        setPlatform(refVal_platform);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        utility::string_t refVal_image;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("image")), refVal_image );
        setImage(refVal_image);
    }
    return ok;
}

utility::string_t Json_MDN_SocialUserObject::getIdent() const
{
    return m_Ident;
}

void Json_MDN_SocialUserObject::setIdent(const utility::string_t& value)
{
    m_Ident = value;
    m_IdentIsSet = true;
}

bool Json_MDN_SocialUserObject::identIsSet() const
{
    return m_IdentIsSet;
}

void Json_MDN_SocialUserObject::unsetIdent()
{
    m_IdentIsSet = false;
}
utility::string_t Json_MDN_SocialUserObject::getPlatform() const
{
    return m_Platform;
}

void Json_MDN_SocialUserObject::setPlatform(const utility::string_t& value)
{
    m_Platform = value;
    m_PlatformIsSet = true;
}

bool Json_MDN_SocialUserObject::platformIsSet() const
{
    return m_PlatformIsSet;
}

void Json_MDN_SocialUserObject::unsetPlatform()
{
    m_PlatformIsSet = false;
}
utility::string_t Json_MDN_SocialUserObject::getImage() const
{
    return m_Image;
}

void Json_MDN_SocialUserObject::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool Json_MDN_SocialUserObject::imageIsSet() const
{
    return m_ImageIsSet;
}

void Json_MDN_SocialUserObject::unsetImage()
{
    m_ImageIsSet = false;
}
}
}
}
}


