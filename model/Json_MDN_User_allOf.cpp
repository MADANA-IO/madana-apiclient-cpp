/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.46
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_MDN_User_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_User_allOf::Json_MDN_User_allOf()
{
    m_FirstName = utility::conversions::to_string_t("");
    m_FirstNameIsSet = false;
    m_Guid = utility::conversions::to_string_t("");
    m_GuidIsSet = false;
    m_SettingsIsSet = false;
    m_SocialAccountsIsSet = false;
    m_LastName = utility::conversions::to_string_t("");
    m_LastNameIsSet = false;
    m_CredentialsIsSet = false;
    m_Mail = utility::conversions::to_string_t("");
    m_MailIsSet = false;
}

Json_MDN_User_allOf::~Json_MDN_User_allOf()
{
}

void Json_MDN_User_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_User_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_FirstNameIsSet)
    {
        val[utility::conversions::to_string_t("firstName")] = ModelBase::toJson(m_FirstName);
    }
    if(m_GuidIsSet)
    {
        val[utility::conversions::to_string_t("guid")] = ModelBase::toJson(m_Guid);
    }
    if(m_SettingsIsSet)
    {
        val[utility::conversions::to_string_t("settings")] = ModelBase::toJson(m_Settings);
    }
    if(m_SocialAccountsIsSet)
    {
        val[utility::conversions::to_string_t("socialAccounts")] = ModelBase::toJson(m_SocialAccounts);
    }
    if(m_LastNameIsSet)
    {
        val[utility::conversions::to_string_t("lastName")] = ModelBase::toJson(m_LastName);
    }
    if(m_CredentialsIsSet)
    {
        val[utility::conversions::to_string_t("credentials")] = ModelBase::toJson(m_Credentials);
    }
    if(m_MailIsSet)
    {
        val[utility::conversions::to_string_t("mail")] = ModelBase::toJson(m_Mail);
    }

    return val;
}

bool Json_MDN_User_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void Json_MDN_User_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_FirstNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("firstName"), m_FirstName));
    }
    if(m_GuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("guid"), m_Guid));
    }
    if(m_SettingsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("settings"), m_Settings));
    }
    if(m_SocialAccountsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("socialAccounts"), m_SocialAccounts));
    }
    if(m_LastNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("lastName"), m_LastName));
    }
    if(m_CredentialsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("credentials"), m_Credentials));
    }
    if(m_MailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mail"), m_Mail));
    }
}

bool Json_MDN_User_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("firstName")))
    {
        utility::string_t refVal_firstName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("firstName")), refVal_firstName );
        setFirstName(refVal_firstName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("guid")))
    {
        utility::string_t refVal_guid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("guid")), refVal_guid );
        setGuid(refVal_guid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("settings")))
    {
        std::vector<std::shared_ptr<Json_MDN_UserSetting>> refVal_settings;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("settings")), refVal_settings );
        setSettings(refVal_settings);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("socialAccounts")))
    {
        std::vector<std::shared_ptr<Json_MDN_SocialUserObject>> refVal_socialAccounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("socialAccounts")), refVal_socialAccounts );
        setSocialAccounts(refVal_socialAccounts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("lastName")))
    {
        utility::string_t refVal_lastName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("lastName")), refVal_lastName );
        setLastName(refVal_lastName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("credentials")))
    {
        std::shared_ptr<Json_MDN_UserCredentials> refVal_credentials;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("credentials")), refVal_credentials );
        setCredentials(refVal_credentials);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mail")))
    {
        utility::string_t refVal_mail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mail")), refVal_mail );
        setMail(refVal_mail);
    }
    return ok;
}

utility::string_t Json_MDN_User_allOf::getFirstName() const
{
    return m_FirstName;
}

void Json_MDN_User_allOf::setFirstName(const utility::string_t& value)
{
    m_FirstName = value;
    m_FirstNameIsSet = true;
}

bool Json_MDN_User_allOf::firstNameIsSet() const
{
    return m_FirstNameIsSet;
}

void Json_MDN_User_allOf::unsetFirstName()
{
    m_FirstNameIsSet = false;
}
utility::string_t Json_MDN_User_allOf::getGuid() const
{
    return m_Guid;
}

void Json_MDN_User_allOf::setGuid(const utility::string_t& value)
{
    m_Guid = value;
    m_GuidIsSet = true;
}

bool Json_MDN_User_allOf::guidIsSet() const
{
    return m_GuidIsSet;
}

void Json_MDN_User_allOf::unsetGuid()
{
    m_GuidIsSet = false;
}
std::vector<std::shared_ptr<Json_MDN_UserSetting>>& Json_MDN_User_allOf::getSettings()
{
    return m_Settings;
}

void Json_MDN_User_allOf::setSettings(const std::vector<std::shared_ptr<Json_MDN_UserSetting>>& value)
{
    m_Settings = value;
    m_SettingsIsSet = true;
}

bool Json_MDN_User_allOf::settingsIsSet() const
{
    return m_SettingsIsSet;
}

void Json_MDN_User_allOf::unsetSettings()
{
    m_SettingsIsSet = false;
}
std::vector<std::shared_ptr<Json_MDN_SocialUserObject>>& Json_MDN_User_allOf::getSocialAccounts()
{
    return m_SocialAccounts;
}

void Json_MDN_User_allOf::setSocialAccounts(const std::vector<std::shared_ptr<Json_MDN_SocialUserObject>>& value)
{
    m_SocialAccounts = value;
    m_SocialAccountsIsSet = true;
}

bool Json_MDN_User_allOf::socialAccountsIsSet() const
{
    return m_SocialAccountsIsSet;
}

void Json_MDN_User_allOf::unsetSocialAccounts()
{
    m_SocialAccountsIsSet = false;
}
utility::string_t Json_MDN_User_allOf::getLastName() const
{
    return m_LastName;
}

void Json_MDN_User_allOf::setLastName(const utility::string_t& value)
{
    m_LastName = value;
    m_LastNameIsSet = true;
}

bool Json_MDN_User_allOf::lastNameIsSet() const
{
    return m_LastNameIsSet;
}

void Json_MDN_User_allOf::unsetLastName()
{
    m_LastNameIsSet = false;
}
std::shared_ptr<Json_MDN_UserCredentials> Json_MDN_User_allOf::getCredentials() const
{
    return m_Credentials;
}

void Json_MDN_User_allOf::setCredentials(const std::shared_ptr<Json_MDN_UserCredentials>& value)
{
    m_Credentials = value;
    m_CredentialsIsSet = true;
}

bool Json_MDN_User_allOf::credentialsIsSet() const
{
    return m_CredentialsIsSet;
}

void Json_MDN_User_allOf::unsetCredentials()
{
    m_CredentialsIsSet = false;
}
utility::string_t Json_MDN_User_allOf::getMail() const
{
    return m_Mail;
}

void Json_MDN_User_allOf::setMail(const utility::string_t& value)
{
    m_Mail = value;
    m_MailIsSet = true;
}

bool Json_MDN_User_allOf::mailIsSet() const
{
    return m_MailIsSet;
}

void Json_MDN_User_allOf::unsetMail()
{
    m_MailIsSet = false;
}
}
}
}
}


