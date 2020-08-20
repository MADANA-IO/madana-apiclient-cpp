/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.14-master.20
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_MDN_Certificate.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_MDN_Certificate::Json_MDN_Certificate()
{
    m_Pem = utility::conversions::to_string_t("");
    m_PemIsSet = false;
}

Json_MDN_Certificate::~Json_MDN_Certificate()
{
}

void Json_MDN_Certificate::validate()
{
    // TODO: implement validation
}

web::json::value Json_MDN_Certificate::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_PemIsSet)
    {
        val[utility::conversions::to_string_t("pem")] = ModelBase::toJson(m_Pem);
    }

    return val;
}

bool Json_MDN_Certificate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pem")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pem"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_pem;
            ok &= ModelBase::fromJson(fieldValue, refVal_pem);
            setPem(refVal_pem);
        }
    }
    return ok;
}

void Json_MDN_Certificate::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_PemIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("pem"), m_Pem));
    }
}

bool Json_MDN_Certificate::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("pem")))
    {
        utility::string_t refVal_pem;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("pem")), refVal_pem );
        setPem(refVal_pem);
    }
    return ok;
}

utility::string_t Json_MDN_Certificate::getPem() const
{
    return m_Pem;
}

void Json_MDN_Certificate::setPem(const utility::string_t& value)
{
    m_Pem = value;
    m_PemIsSet = true;
}

bool Json_MDN_Certificate::pemIsSet() const
{
    return m_PemIsSet;
}

void Json_MDN_Certificate::unsetPem()
{
    m_PemIsSet = false;
}
}
}
}
}


