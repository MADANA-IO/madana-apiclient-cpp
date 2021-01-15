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



#include "Json_V1ObjectReference.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1ObjectReference::Json_V1ObjectReference()
{
    m_Uid = utility::conversions::to_string_t("");
    m_UidIsSet = false;
    m_ApiVersion = utility::conversions::to_string_t("");
    m_ApiVersionIsSet = false;
    m_r_namespace = utility::conversions::to_string_t("");
    m_r_namespaceIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_FieldPath = utility::conversions::to_string_t("");
    m_FieldPathIsSet = false;
    m_ResourceVersion = utility::conversions::to_string_t("");
    m_ResourceVersionIsSet = false;
    m_Kind = utility::conversions::to_string_t("");
    m_KindIsSet = false;
}

Json_V1ObjectReference::~Json_V1ObjectReference()
{
}

void Json_V1ObjectReference::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1ObjectReference::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_UidIsSet)
    {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(m_Uid);
    }
    if(m_ApiVersionIsSet)
    {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(m_ApiVersion);
    }
    if(m_r_namespaceIsSet)
    {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(m_r_namespace);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_FieldPathIsSet)
    {
        val[utility::conversions::to_string_t("fieldPath")] = ModelBase::toJson(m_FieldPath);
    }
    if(m_ResourceVersionIsSet)
    {
        val[utility::conversions::to_string_t("resourceVersion")] = ModelBase::toJson(m_ResourceVersion);
    }
    if(m_KindIsSet)
    {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(m_Kind);
    }

    return val;
}

bool Json_V1ObjectReference::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_uid;
            ok &= ModelBase::fromJson(fieldValue, refVal_uid);
            setUid(refVal_uid);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_apiVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_apiVersion);
            setApiVersion(refVal_apiVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_namespace;
            ok &= ModelBase::fromJson(fieldValue, refVal_namespace);
            setRNamespace(refVal_namespace);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fieldPath")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fieldPath"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_fieldPath;
            ok &= ModelBase::fromJson(fieldValue, refVal_fieldPath);
            setFieldPath(refVal_fieldPath);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_resourceVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_resourceVersion);
            setResourceVersion(refVal_resourceVersion);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_kind;
            ok &= ModelBase::fromJson(fieldValue, refVal_kind);
            setKind(refVal_kind);
        }
    }
    return ok;
}

void Json_V1ObjectReference::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_UidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uid"), m_Uid));
    }
    if(m_ApiVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("apiVersion"), m_ApiVersion));
    }
    if(m_r_namespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespace"), m_r_namespace));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_FieldPathIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("fieldPath"), m_FieldPath));
    }
    if(m_ResourceVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resourceVersion"), m_ResourceVersion));
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("kind"), m_Kind));
    }
}

bool Json_V1ObjectReference::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("uid")))
    {
        utility::string_t refVal_uid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uid")), refVal_uid );
        setUid(refVal_uid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("apiVersion")))
    {
        utility::string_t refVal_apiVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("apiVersion")), refVal_apiVersion );
        setApiVersion(refVal_apiVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("namespace")))
    {
        utility::string_t refVal_namespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespace")), refVal_namespace );
        setRNamespace(refVal_namespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fieldPath")))
    {
        utility::string_t refVal_fieldPath;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("fieldPath")), refVal_fieldPath );
        setFieldPath(refVal_fieldPath);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("resourceVersion")))
    {
        utility::string_t refVal_resourceVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("resourceVersion")), refVal_resourceVersion );
        setResourceVersion(refVal_resourceVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("kind")))
    {
        utility::string_t refVal_kind;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("kind")), refVal_kind );
        setKind(refVal_kind);
    }
    return ok;
}

utility::string_t Json_V1ObjectReference::getUid() const
{
    return m_Uid;
}

void Json_V1ObjectReference::setUid(const utility::string_t& value)
{
    m_Uid = value;
    m_UidIsSet = true;
}

bool Json_V1ObjectReference::uidIsSet() const
{
    return m_UidIsSet;
}

void Json_V1ObjectReference::unsetUid()
{
    m_UidIsSet = false;
}
utility::string_t Json_V1ObjectReference::getApiVersion() const
{
    return m_ApiVersion;
}

void Json_V1ObjectReference::setApiVersion(const utility::string_t& value)
{
    m_ApiVersion = value;
    m_ApiVersionIsSet = true;
}

bool Json_V1ObjectReference::apiVersionIsSet() const
{
    return m_ApiVersionIsSet;
}

void Json_V1ObjectReference::unsetApiVersion()
{
    m_ApiVersionIsSet = false;
}
utility::string_t Json_V1ObjectReference::getRNamespace() const
{
    return m_r_namespace;
}

void Json_V1ObjectReference::setRNamespace(const utility::string_t& value)
{
    m_r_namespace = value;
    m_r_namespaceIsSet = true;
}

bool Json_V1ObjectReference::rNamespaceIsSet() const
{
    return m_r_namespaceIsSet;
}

void Json_V1ObjectReference::unsetr_namespace()
{
    m_r_namespaceIsSet = false;
}
utility::string_t Json_V1ObjectReference::getName() const
{
    return m_Name;
}

void Json_V1ObjectReference::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Json_V1ObjectReference::nameIsSet() const
{
    return m_NameIsSet;
}

void Json_V1ObjectReference::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t Json_V1ObjectReference::getFieldPath() const
{
    return m_FieldPath;
}

void Json_V1ObjectReference::setFieldPath(const utility::string_t& value)
{
    m_FieldPath = value;
    m_FieldPathIsSet = true;
}

bool Json_V1ObjectReference::fieldPathIsSet() const
{
    return m_FieldPathIsSet;
}

void Json_V1ObjectReference::unsetFieldPath()
{
    m_FieldPathIsSet = false;
}
utility::string_t Json_V1ObjectReference::getResourceVersion() const
{
    return m_ResourceVersion;
}

void Json_V1ObjectReference::setResourceVersion(const utility::string_t& value)
{
    m_ResourceVersion = value;
    m_ResourceVersionIsSet = true;
}

bool Json_V1ObjectReference::resourceVersionIsSet() const
{
    return m_ResourceVersionIsSet;
}

void Json_V1ObjectReference::unsetResourceVersion()
{
    m_ResourceVersionIsSet = false;
}
utility::string_t Json_V1ObjectReference::getKind() const
{
    return m_Kind;
}

void Json_V1ObjectReference::setKind(const utility::string_t& value)
{
    m_Kind = value;
    m_KindIsSet = true;
}

bool Json_V1ObjectReference::kindIsSet() const
{
    return m_KindIsSet;
}

void Json_V1ObjectReference::unsetKind()
{
    m_KindIsSet = false;
}
}
}
}
}


