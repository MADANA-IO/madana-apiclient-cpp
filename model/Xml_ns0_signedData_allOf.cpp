/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.1
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_signedData_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_signedData_allOf::Xml_ns0_signedData_allOf()
{
    m_Data = utility::conversions::to_string_t("");
    m_DataIsSet = false;
    m_Fingerpint = utility::conversions::to_string_t("");
    m_FingerpintIsSet = false;
    m_Signature = utility::conversions::to_string_t("");
    m_SignatureIsSet = false;
}

Xml_ns0_signedData_allOf::~Xml_ns0_signedData_allOf()
{
}

void Xml_ns0_signedData_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_signedData_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_DataIsSet)
    {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(m_Data);
    }
    if(m_FingerpintIsSet)
    {
        val[utility::conversions::to_string_t("fingerpint")] = ModelBase::toJson(m_Fingerpint);
    }
    if(m_SignatureIsSet)
    {
        val[utility::conversions::to_string_t("signature")] = ModelBase::toJson(m_Signature);
    }

    return val;
}

bool Xml_ns0_signedData_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}

void Xml_ns0_signedData_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_DataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("data"), m_Data));
    }
    if(m_FingerpintIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fingerpint"), m_Fingerpint));
    }
    if(m_SignatureIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("signature"), m_Signature));
    }
}

bool Xml_ns0_signedData_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
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
    if(multipart->hasContent(utility::conversions::to_string_t("signature")))
    {
        utility::string_t refVal_signature;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("signature")), refVal_signature );
        setSignature(refVal_signature);
    }
    return ok;
}

utility::string_t Xml_ns0_signedData_allOf::getData() const
{
    return m_Data;
}

void Xml_ns0_signedData_allOf::setData(const utility::string_t& value)
{
    m_Data = value;
    m_DataIsSet = true;
}

bool Xml_ns0_signedData_allOf::dataIsSet() const
{
    return m_DataIsSet;
}

void Xml_ns0_signedData_allOf::unsetData()
{
    m_DataIsSet = false;
}
utility::string_t Xml_ns0_signedData_allOf::getFingerpint() const
{
    return m_Fingerpint;
}

void Xml_ns0_signedData_allOf::setFingerpint(const utility::string_t& value)
{
    m_Fingerpint = value;
    m_FingerpintIsSet = true;
}

bool Xml_ns0_signedData_allOf::fingerpintIsSet() const
{
    return m_FingerpintIsSet;
}

void Xml_ns0_signedData_allOf::unsetFingerpint()
{
    m_FingerpintIsSet = false;
}
utility::string_t Xml_ns0_signedData_allOf::getSignature() const
{
    return m_Signature;
}

void Xml_ns0_signedData_allOf::setSignature(const utility::string_t& value)
{
    m_Signature = value;
    m_SignatureIsSet = true;
}

bool Xml_ns0_signedData_allOf::signatureIsSet() const
{
    return m_SignatureIsSet;
}

void Xml_ns0_signedData_allOf::unsetSignature()
{
    m_SignatureIsSet = false;
}
}
}
}
}


