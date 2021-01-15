/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.30
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_MDN_A_UserObject.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_A_UserObject::Json_MDN_A_UserObject()
{
    m_Created = utility::conversions::to_string_t("");
    m_CreatedIsSet = false;
    m_Activated = utility::conversions::to_string_t("");
    m_ActivatedIsSet = false;
    m_LastActive = utility::conversions::to_string_t("");
    m_LastActiveIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
    m_UserName = utility::conversions::to_string_t("");
    m_UserNameIsSet = false;
}

Json_MDN_A_UserObject::~Json_MDN_A_UserObject()
{
}

void Json_MDN_A_UserObject::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_A_UserObject::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_CreatedIsSet)
    {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(m_Created);
    }
    if(m_ActivatedIsSet)
    {
        val[utility::conversions::to_string_t("activated")] = ModelBase::toJson(m_Activated);
    }
    if(m_LastActiveIsSet)
    {
        val[utility::conversions::to_string_t("lastActive")] = ModelBase::toJson(m_LastActive);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }
    if(m_UserNameIsSet)
    {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(m_UserName);
    }

    return val;
}

bool Json_MDN_A_UserObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_created;
            ok &= ModelBase::fromJson(fieldValue, refVal_created);
            setCreated(refVal_created);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activated")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activated"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_activated;
            ok &= ModelBase::fromJson(fieldValue, refVal_activated);
            setActivated(refVal_activated);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastActive")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastActive"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_lastActive;
            ok &= ModelBase::fromJson(fieldValue, refVal_lastActive);
            setLastActive(refVal_lastActive);
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
    if(val.has_field(utility::conversions::to_string_t("userName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_userName;
            ok &= ModelBase::fromJson(fieldValue, refVal_userName);
            setUserName(refVal_userName);
        }
    }
    return ok;
}

void Json_MDN_A_UserObject::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created"), m_Created));
    }
    if(m_ActivatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("activated"), m_Activated));
    }
    if(m_LastActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastActive"), m_LastActive));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
    if(m_UserNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userName"), m_UserName));
    }
}

bool Json_MDN_A_UserObject::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("created")))
    {
        utility::string_t refVal_created;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("created")), refVal_created );
        setCreated(refVal_created);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("activated")))
    {
        utility::string_t refVal_activated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("activated")), refVal_activated );
        setActivated(refVal_activated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastActive")))
    {
        utility::string_t refVal_lastActive;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastActive")), refVal_lastActive );
        setLastActive(refVal_lastActive);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        utility::string_t refVal_image;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("image")), refVal_image );
        setImage(refVal_image);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("userName")))
    {
        utility::string_t refVal_userName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userName")), refVal_userName );
        setUserName(refVal_userName);
    }
    return ok;
}

utility::string_t Json_MDN_A_UserObject::getCreated() const
{
    return m_Created;
}

void Json_MDN_A_UserObject::setCreated(const utility::string_t& value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}

bool Json_MDN_A_UserObject::createdIsSet() const
{
    return m_CreatedIsSet;
}

void Json_MDN_A_UserObject::unsetCreated()
{
    m_CreatedIsSet = false;
}
utility::string_t Json_MDN_A_UserObject::getActivated() const
{
    return m_Activated;
}

void Json_MDN_A_UserObject::setActivated(const utility::string_t& value)
{
    m_Activated = value;
    m_ActivatedIsSet = true;
}

bool Json_MDN_A_UserObject::activatedIsSet() const
{
    return m_ActivatedIsSet;
}

void Json_MDN_A_UserObject::unsetActivated()
{
    m_ActivatedIsSet = false;
}
utility::string_t Json_MDN_A_UserObject::getLastActive() const
{
    return m_LastActive;
}

void Json_MDN_A_UserObject::setLastActive(const utility::string_t& value)
{
    m_LastActive = value;
    m_LastActiveIsSet = true;
}

bool Json_MDN_A_UserObject::lastActiveIsSet() const
{
    return m_LastActiveIsSet;
}

void Json_MDN_A_UserObject::unsetLastActive()
{
    m_LastActiveIsSet = false;
}
utility::string_t Json_MDN_A_UserObject::getImage() const
{
    return m_Image;
}

void Json_MDN_A_UserObject::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool Json_MDN_A_UserObject::imageIsSet() const
{
    return m_ImageIsSet;
}

void Json_MDN_A_UserObject::unsetImage()
{
    m_ImageIsSet = false;
}
utility::string_t Json_MDN_A_UserObject::getUserName() const
{
    return m_UserName;
}

void Json_MDN_A_UserObject::setUserName(const utility::string_t& value)
{
    m_UserName = value;
    m_UserNameIsSet = true;
}

bool Json_MDN_A_UserObject::userNameIsSet() const
{
    return m_UserNameIsSet;
}

void Json_MDN_A_UserObject::unsetUserName()
{
    m_UserNameIsSet = false;
}
}
}
}
}


