/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.27
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_MDN_UserCredentials.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_UserCredentials::Json_MDN_UserCredentials()
{
    m_Password = utility::conversions::to_string_t("");
    m_PasswordIsSet = false;
    m_Username = utility::conversions::to_string_t("");
    m_UsernameIsSet = false;
}

Json_MDN_UserCredentials::~Json_MDN_UserCredentials()
{
}

void Json_MDN_UserCredentials::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_UserCredentials::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PasswordIsSet)
    {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(m_Password);
    }
    if(m_UsernameIsSet)
    {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(m_Username);
    }

    return val;
}

bool Json_MDN_UserCredentials::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("username")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_username;
            ok &= ModelBase::fromJson(fieldValue, refVal_username);
            setUsername(refVal_username);
        }
    }
    return ok;
}

void Json_MDN_UserCredentials::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("password"), m_Password));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("username"), m_Username));
    }
}

bool Json_MDN_UserCredentials::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("password")))
    {
        utility::string_t refVal_password;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("password")), refVal_password );
        setPassword(refVal_password);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("username")))
    {
        utility::string_t refVal_username;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("username")), refVal_username );
        setUsername(refVal_username);
    }
    return ok;
}

utility::string_t Json_MDN_UserCredentials::getPassword() const
{
    return m_Password;
}

void Json_MDN_UserCredentials::setPassword(const utility::string_t& value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}

bool Json_MDN_UserCredentials::passwordIsSet() const
{
    return m_PasswordIsSet;
}

void Json_MDN_UserCredentials::unsetPassword()
{
    m_PasswordIsSet = false;
}
utility::string_t Json_MDN_UserCredentials::getUsername() const
{
    return m_Username;
}

void Json_MDN_UserCredentials::setUsername(const utility::string_t& value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}

bool Json_MDN_UserCredentials::usernameIsSet() const
{
    return m_UsernameIsSet;
}

void Json_MDN_UserCredentials::unsetUsername()
{
    m_UsernameIsSet = false;
}
}
}
}
}


