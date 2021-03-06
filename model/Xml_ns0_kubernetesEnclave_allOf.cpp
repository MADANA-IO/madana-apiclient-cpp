/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.56
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_kubernetesEnclave_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_kubernetesEnclave_allOf::Xml_ns0_kubernetesEnclave_allOf()
{
    m_IsUsingInitContainer = false;
    m_IsUsingInitContainerIsSet = false;
}

Xml_ns0_kubernetesEnclave_allOf::~Xml_ns0_kubernetesEnclave_allOf()
{
}

void Xml_ns0_kubernetesEnclave_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_kubernetesEnclave_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IsUsingInitContainerIsSet)
    {
        val[utility::conversions::to_string_t("isUsingInitContainer")] = ModelBase::toJson(m_IsUsingInitContainer);
    }

    return val;
}

bool Xml_ns0_kubernetesEnclave_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isUsingInitContainer")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isUsingInitContainer"));
        if(!fieldValue.is_null())
        {
            bool refVal_isUsingInitContainer;
            ok &= ModelBase::fromJson(fieldValue, refVal_isUsingInitContainer);
            setIsUsingInitContainer(refVal_isUsingInitContainer);
        }
    }
    return ok;
}

void Xml_ns0_kubernetesEnclave_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IsUsingInitContainerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("isUsingInitContainer"), m_IsUsingInitContainer));
    }
}

bool Xml_ns0_kubernetesEnclave_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("isUsingInitContainer")))
    {
        bool refVal_isUsingInitContainer;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("isUsingInitContainer")), refVal_isUsingInitContainer );
        setIsUsingInitContainer(refVal_isUsingInitContainer);
    }
    return ok;
}

bool Xml_ns0_kubernetesEnclave_allOf::isIsUsingInitContainer() const
{
    return m_IsUsingInitContainer;
}

void Xml_ns0_kubernetesEnclave_allOf::setIsUsingInitContainer(bool value)
{
    m_IsUsingInitContainer = value;
    m_IsUsingInitContainerIsSet = true;
}

bool Xml_ns0_kubernetesEnclave_allOf::isUsingInitContainerIsSet() const
{
    return m_IsUsingInitContainerIsSet;
}

void Xml_ns0_kubernetesEnclave_allOf::unsetIsUsingInitContainer()
{
    m_IsUsingInitContainerIsSet = false;
}
}
}
}
}


