/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.37
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_SignedData.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_SignedData::Json_SignedData()
{
    m_Signature = utility::conversions::to_string_t("");
    m_SignatureIsSet = false;
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
    m_Fingerpint = utility::conversions::to_string_t("");
    m_FingerpintIsSet = false;
}

Json_SignedData::~Json_SignedData()
{
}

void Json_SignedData::validate()
{
    // TODO: implement validation
}

web::json::value Json_SignedData::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SignatureIsSet)
    {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(m_Signature);
    }
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }
    if(m_FingerpintIsSet)
    {
        val[utility::conversions::to_string_t("fingerpint")] = ModelBase::toJson(m_Fingerpint);
    }

    return val;
}

bool Json_SignedData::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("signature")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signature"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_signature;
            ok &= ModelBase::fromJson(fieldValue, refVal_signature);
            setSignature(refVal_signature);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_data;
            ok &= ModelBase::fromJson(fieldValue, refVal_data);
            setData(refVal_data);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerpint")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerpint"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fingerpint;
            ok &= ModelBase::fromJson(fieldValue, refVal_fingerpint);
            setFingerpint(refVal_fingerpint);
        }
    }
    return ok;
}

void Json_SignedData::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SignatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signature"), m_Signature));
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
    if(m_FingerpintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fingerpint"), m_Fingerpint));
    }
}

bool Json_SignedData::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("signature")))
    {
        utility::string_t refVal_signature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("signature")), refVal_signature );
        setSignature(refVal_signature);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("data")))
    {
        utility::string_t refVal_data;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("data")), refVal_data );
        setData(refVal_data);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fingerpint")))
    {
        utility::string_t refVal_fingerpint;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fingerpint")), refVal_fingerpint );
        setFingerpint(refVal_fingerpint);
    }
    return ok;
}

utility::string_t Json_SignedData::getSignature() const
{
    return m_Signature;
}

void Json_SignedData::setSignature(const utility::string_t& value)
{
    m_Signature = value;
    m_SignatureIsSet = true;
}

bool Json_SignedData::signatureIsSet() const
{
    return m_SignatureIsSet;
}

void Json_SignedData::unsetSignature()
{
    m_SignatureIsSet = false;
}
utility::string_t Json_SignedData::getData() const
{
    return m_Data;
}

void Json_SignedData::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool Json_SignedData::dataIsSet() const
{
    return m_DataIsSet;
}

void Json_SignedData::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t Json_SignedData::getFingerpint() const
{
    return m_Fingerpint;
}

void Json_SignedData::setFingerpint(const utility::string_t& value)
{
    m_Fingerpint = value;
    m_FingerpintIsSet = true;
}

bool Json_SignedData::fingerpintIsSet() const
{
    return m_FingerpintIsSet;
}

void Json_SignedData::unsetFingerpint()
{
    m_FingerpintIsSet = false;
}
}
}
}
}


