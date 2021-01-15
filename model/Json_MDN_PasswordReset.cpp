/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.34
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_MDN_PasswordReset.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_PasswordReset::Json_MDN_PasswordReset()
{
    m_Token = utility::conversions::to_string_t("");
    m_TokenIsSet = false;
    m_Mail = utility::conversions::to_string_t("");
    m_MailIsSet = false;
    m_Password = utility::conversions::to_string_t("");
    m_PasswordIsSet = false;
}

Json_MDN_PasswordReset::~Json_MDN_PasswordReset()
{
}

void Json_MDN_PasswordReset::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_PasswordReset::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_TokenIsSet)
    {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(m_Token);
    }
    if(m_MailIsSet)
    {
        val[utility::conversions::to_string_t("mail")] = ModelBase::toJson(m_Mail);
    }
    if(m_PasswordIsSet)
    {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(m_Password);
    }

    return val;
}

bool Json_MDN_PasswordReset::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("token")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_token;
            ok &= ModelBase::fromJson(fieldValue, refVal_token);
            setToken(refVal_token);
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
    if(val.has_field(utility::conversions::to_string_t("password")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_password;
            ok &= ModelBase::fromJson(fieldValue, refVal_password);
            setPassword(refVal_password);
        }
    }
    return ok;
}

void Json_MDN_PasswordReset::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_TokenIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("token"), m_Token));
    }
    if(m_MailIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mail"), m_Mail));
    }
    if(m_PasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("password"), m_Password));
    }
}

bool Json_MDN_PasswordReset::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("token")))
    {
        utility::string_t refVal_token;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("token")), refVal_token );
        setToken(refVal_token);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("mail")))
    {
        utility::string_t refVal_mail;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mail")), refVal_mail );
        setMail(refVal_mail);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("password")))
    {
        utility::string_t refVal_password;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("password")), refVal_password );
        setPassword(refVal_password);
    }
    return ok;
}

utility::string_t Json_MDN_PasswordReset::getToken() const
{
    return m_Token;
}

void Json_MDN_PasswordReset::setToken(const utility::string_t& value)
{
    m_Token = value;
    m_TokenIsSet = true;
}

bool Json_MDN_PasswordReset::tokenIsSet() const
{
    return m_TokenIsSet;
}

void Json_MDN_PasswordReset::unsetToken()
{
    m_TokenIsSet = false;
}
utility::string_t Json_MDN_PasswordReset::getMail() const
{
    return m_Mail;
}

void Json_MDN_PasswordReset::setMail(const utility::string_t& value)
{
    m_Mail = value;
    m_MailIsSet = true;
}

bool Json_MDN_PasswordReset::mailIsSet() const
{
    return m_MailIsSet;
}

void Json_MDN_PasswordReset::unsetMail()
{
    m_MailIsSet = false;
}
utility::string_t Json_MDN_PasswordReset::getPassword() const
{
    return m_Password;
}

void Json_MDN_PasswordReset::setPassword(const utility::string_t& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}

bool Json_MDN_PasswordReset::passwordIsSet() const
{
    return m_PasswordIsSet;
}

void Json_MDN_PasswordReset::unsetPassword()
{
    m_PasswordIsSet = false;
}
}
}
}
}


