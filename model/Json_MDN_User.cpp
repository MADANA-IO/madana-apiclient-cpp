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



#include "Json_MDN_User.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_User::Json_MDN_User()
{
    m_UserName = utility::conversions::to_string_t("");
    m_UserNameIsSet = false;
    m_Activated = utility::conversions::to_string_t("");
    m_ActivatedIsSet = false;
    m_Image = utility::conversions::to_string_t("");
    m_ImageIsSet = false;
    m_Created = utility::conversions::to_string_t("");
    m_CreatedIsSet = false;
    m_LastActive = utility::conversions::to_string_t("");
    m_LastActiveIsSet = false;
    m_SocialAccountsIsSet = false;
    m_Mail = utility::conversions::to_string_t("");
    m_MailIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_SettingsIsSet = false;
    m_CredentialsIsSet = false;
    m_Guid = utility::conversions::to_string_t("");
    m_GuidIsSet = false;
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
}

Json_MDN_User::~Json_MDN_User()
{
}

void Json_MDN_User::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_User::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UserNameIsSet)
    {
        val[utility::conversions::to_string_t("userName")] = ModelBase::toJson(m_UserName);
    }
    if(m_ActivatedIsSet)
    {
        val[utility::conversions::to_string_t("activated")] = ModelBase::toJson(m_Activated);
    }
    if(m_ImageIsSet)
    {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(m_Image);
    }
    if(m_CreatedIsSet)
    {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(m_Created);
    }
    if(m_LastActiveIsSet)
    {
        val[utility::conversions::to_string_t("lastActive")] = ModelBase::toJson(m_LastActive);
    }
    if(m_SocialAccountsIsSet)
    {
        val[utility::conversions::to_string_t("socialAccounts")] = ModelBase::toJson(m_SocialAccounts);
    }
    if(m_MailIsSet)
    {
        val[utility::conversions::to_string_t("mail")] = ModelBase::toJson(m_Mail);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    }
    if(m_SettingsIsSet)
    {
        val[utility::conversions::to_string_t("settings")] = ModelBase::toJson(m_Settings);
    }
    if(m_CredentialsIsSet)
    {
        val[utility::conversions::to_string_t("credentials")] = ModelBase::toJson(m_Credentials);
    }
    if(m_GuidIsSet)
    {
        val[utility::conversions::to_string_t("guid")] = ModelBase::toJson(m_Guid);
    }
    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    }

    return val;
}

bool Json_MDN_User::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("socialAccounts")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("socialAccounts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Json_MDN_SocialUserObject>> refVal_socialAccounts;
            ok &= ModelBase::fromJson(fieldValue, refVal_socialAccounts);
            setSocialAccounts(refVal_socialAccounts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mail")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mail"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_mail;
            ok &= ModelBase::fromJson(fieldValue, refVal_mail);
            setMail(refVal_mail);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_lastName;
            ok &= ModelBase::fromJson(fieldValue, refVal_lastName);
            setLastName(refVal_lastName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("settings")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("settings"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Json_MDN_UserSetting>> refVal_settings;
            ok &= ModelBase::fromJson(fieldValue, refVal_settings);
            setSettings(refVal_settings);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("credentials")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("credentials"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_MDN_UserCredentials> refVal_credentials;
            ok &= ModelBase::fromJson(fieldValue, refVal_credentials);
            setCredentials(refVal_credentials);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guid"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_guid;
            ok &= ModelBase::fromJson(fieldValue, refVal_guid);
            setGuid(refVal_guid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("firstName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("firstName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_firstName;
            ok &= ModelBase::fromJson(fieldValue, refVal_firstName);
            setFirstName(refVal_firstName);
        }
    }
    return ok;
}

void Json_MDN_User::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_UserNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("userName"), m_UserName));
    }
    if(m_ActivatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("activated"), m_Activated));
    }
    if(m_ImageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("image"), m_Image));
    }
    if(m_CreatedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("created"), m_Created));
    }
    if(m_LastActiveIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastActive"), m_LastActive));
    }
    if(m_SocialAccountsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("socialAccounts"), m_SocialAccounts));
    }
    if(m_MailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mail"), m_Mail));
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    }
    if(m_SettingsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("settings"), m_Settings));
    }
    if(m_CredentialsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("credentials"), m_Credentials));
    }
    if(m_GuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("guid"), m_Guid));
    }
    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    }
}

bool Json_MDN_User::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("userName")))
    {
        utility::string_t refVal_userName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("userName")), refVal_userName );
        setUserName(refVal_userName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("activated")))
    {
        utility::string_t refVal_activated;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("activated")), refVal_activated );
        setActivated(refVal_activated);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("image")))
    {
        utility::string_t refVal_image;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("image")), refVal_image );
        setImage(refVal_image);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("created")))
    {
        utility::string_t refVal_created;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("created")), refVal_created );
        setCreated(refVal_created);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastActive")))
    {
        utility::string_t refVal_lastActive;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastActive")), refVal_lastActive );
        setLastActive(refVal_lastActive);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("socialAccounts")))
    {
        std::vector<std::shared_ptr<Json_MDN_SocialUserObject>> refVal_socialAccounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("socialAccounts")), refVal_socialAccounts );
        setSocialAccounts(refVal_socialAccounts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mail")))
    {
        utility::string_t refVal_mail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mail")), refVal_mail );
        setMail(refVal_mail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastName")))
    {
        utility::string_t refVal_lastName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName")), refVal_lastName );
        setLastName(refVal_lastName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("settings")))
    {
        std::vector<std::shared_ptr<Json_MDN_UserSetting>> refVal_settings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("settings")), refVal_settings );
        setSettings(refVal_settings);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("credentials")))
    {
        std::shared_ptr<Json_MDN_UserCredentials> refVal_credentials;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("credentials")), refVal_credentials );
        setCredentials(refVal_credentials);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("guid")))
    {
        utility::string_t refVal_guid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("guid")), refVal_guid );
        setGuid(refVal_guid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("firstName")))
    {
        utility::string_t refVal_firstName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName")), refVal_firstName );
        setFirstName(refVal_firstName);
    }
    return ok;
}

utility::string_t Json_MDN_User::getUserName() const
{
    return m_UserName;
}

void Json_MDN_User::setUserName(const utility::string_t& value)
{
    m_UserName = value;
    m_UserNameIsSet = true;
}

bool Json_MDN_User::userNameIsSet() const
{
    return m_UserNameIsSet;
}

void Json_MDN_User::unsetUserName()
{
    m_UserNameIsSet = false;
}
utility::string_t Json_MDN_User::getActivated() const
{
    return m_Activated;
}

void Json_MDN_User::setActivated(const utility::string_t& value)
{
    m_Activated = value;
    m_ActivatedIsSet = true;
}

bool Json_MDN_User::activatedIsSet() const
{
    return m_ActivatedIsSet;
}

void Json_MDN_User::unsetActivated()
{
    m_ActivatedIsSet = false;
}
utility::string_t Json_MDN_User::getImage() const
{
    return m_Image;
}

void Json_MDN_User::setImage(const utility::string_t& value)
{
    m_Image = value;
    m_ImageIsSet = true;
}

bool Json_MDN_User::imageIsSet() const
{
    return m_ImageIsSet;
}

void Json_MDN_User::unsetImage()
{
    m_ImageIsSet = false;
}
utility::string_t Json_MDN_User::getCreated() const
{
    return m_Created;
}

void Json_MDN_User::setCreated(const utility::string_t& value)
{
    m_Created = value;
    m_CreatedIsSet = true;
}

bool Json_MDN_User::createdIsSet() const
{
    return m_CreatedIsSet;
}

void Json_MDN_User::unsetCreated()
{
    m_CreatedIsSet = false;
}
utility::string_t Json_MDN_User::getLastActive() const
{
    return m_LastActive;
}

void Json_MDN_User::setLastActive(const utility::string_t& value)
{
    m_LastActive = value;
    m_LastActiveIsSet = true;
}

bool Json_MDN_User::lastActiveIsSet() const
{
    return m_LastActiveIsSet;
}

void Json_MDN_User::unsetLastActive()
{
    m_LastActiveIsSet = false;
}
std::vector<std::shared_ptr<Json_MDN_SocialUserObject>>& Json_MDN_User::getSocialAccounts()
{
    return m_SocialAccounts;
}

void Json_MDN_User::setSocialAccounts(const std::vector<std::shared_ptr<Json_MDN_SocialUserObject>>& value)
{
    m_SocialAccounts = value;
    m_SocialAccountsIsSet = true;
}

bool Json_MDN_User::socialAccountsIsSet() const
{
    return m_SocialAccountsIsSet;
}

void Json_MDN_User::unsetSocialAccounts()
{
    m_SocialAccountsIsSet = false;
}
utility::string_t Json_MDN_User::getMail() const
{
    return m_Mail;
}

void Json_MDN_User::setMail(const utility::string_t& value)
{
    m_Mail = value;
    m_MailIsSet = true;
}

bool Json_MDN_User::mailIsSet() const
{
    return m_MailIsSet;
}

void Json_MDN_User::unsetMail()
{
    m_MailIsSet = false;
}
utility::string_t Json_MDN_User::getLastName() const
{
    return m_LastName;
}

void Json_MDN_User::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}

bool Json_MDN_User::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void Json_MDN_User::unsetLastName()
{
    m_LastNameIsSet = false;
}
std::vector<std::shared_ptr<Json_MDN_UserSetting>>& Json_MDN_User::getSettings()
{
    return m_Settings;
}

void Json_MDN_User::setSettings(const std::vector<std::shared_ptr<Json_MDN_UserSetting>>& value)
{
    m_Settings = value;
    m_SettingsIsSet = true;
}

bool Json_MDN_User::settingsIsSet() const
{
    return m_SettingsIsSet;
}

void Json_MDN_User::unsetSettings()
{
    m_SettingsIsSet = false;
}
std::shared_ptr<Json_MDN_UserCredentials> Json_MDN_User::getCredentials() const
{
    return m_Credentials;
}

void Json_MDN_User::setCredentials(const std::shared_ptr<Json_MDN_UserCredentials>& value)
{
    m_Credentials = value;
    m_CredentialsIsSet = true;
}

bool Json_MDN_User::credentialsIsSet() const
{
    return m_CredentialsIsSet;
}

void Json_MDN_User::unsetCredentials()
{
    m_CredentialsIsSet = false;
}
utility::string_t Json_MDN_User::getGuid() const
{
    return m_Guid;
}

void Json_MDN_User::setGuid(const utility::string_t& value)
{
    m_Guid = value;
    m_GuidIsSet = true;
}

bool Json_MDN_User::guidIsSet() const
{
    return m_GuidIsSet;
}

void Json_MDN_User::unsetGuid()
{
    m_GuidIsSet = false;
}
utility::string_t Json_MDN_User::getFirstName() const
{
    return m_FirstName;
}

void Json_MDN_User::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}

bool Json_MDN_User::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void Json_MDN_User::unsetFirstName()
{
    m_FirstNameIsSet = false;
}
}
}
}
}


