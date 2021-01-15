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



#include "Json_V1OwnerReference.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1OwnerReference::Json_V1OwnerReference()
{
    m_ApiVersion = utility::conversions::to_string_t("");
    m_ApiVersionIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Controller = false;
    m_ControllerIsSet = false;
    m_Uid = utility::conversions::to_string_t("");
    m_UidIsSet = false;
    m_BlockOwnerDeletion = false;
    m_BlockOwnerDeletionIsSet = false;
    m_Kind = utility::conversions::to_string_t("");
    m_KindIsSet = false;
}

Json_V1OwnerReference::~Json_V1OwnerReference()
{
}

void Json_V1OwnerReference::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1OwnerReference::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ApiVersionIsSet)
    {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(m_ApiVersion);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_ControllerIsSet)
    {
        val[utility::conversions::to_string_t("controller")] = ModelBase::toJson(m_Controller);
    }
    if(m_UidIsSet)
    {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(m_Uid);
    }
    if(m_BlockOwnerDeletionIsSet)
    {
        val[utility::conversions::to_string_t("blockOwnerDeletion")] = ModelBase::toJson(m_BlockOwnerDeletion);
    }
    if(m_KindIsSet)
    {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(m_Kind);
    }

    return val;
}

bool Json_V1OwnerReference::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("controller")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("controller"));
        if(!fieldValue.is_null())
        {
            bool refVal_controller;
            ok &= ModelBase::fromJson(fieldValue, refVal_controller);
            setController(refVal_controller);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("blockOwnerDeletion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blockOwnerDeletion"));
        if(!fieldValue.is_null())
        {
            bool refVal_blockOwnerDeletion;
            ok &= ModelBase::fromJson(fieldValue, refVal_blockOwnerDeletion);
            setBlockOwnerDeletion(refVal_blockOwnerDeletion);
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

void Json_V1OwnerReference::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ApiVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("apiVersion"), m_ApiVersion));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_ControllerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("controller"), m_Controller));
    }
    if(m_UidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uid"), m_Uid));
    }
    if(m_BlockOwnerDeletionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("blockOwnerDeletion"), m_BlockOwnerDeletion));
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("kind"), m_Kind));
    }
}

bool Json_V1OwnerReference::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("apiVersion")))
    {
        utility::string_t refVal_apiVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("apiVersion")), refVal_apiVersion );
        setApiVersion(refVal_apiVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("controller")))
    {
        bool refVal_controller;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("controller")), refVal_controller );
        setController(refVal_controller);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uid")))
    {
        utility::string_t refVal_uid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uid")), refVal_uid );
        setUid(refVal_uid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("blockOwnerDeletion")))
    {
        bool refVal_blockOwnerDeletion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("blockOwnerDeletion")), refVal_blockOwnerDeletion );
        setBlockOwnerDeletion(refVal_blockOwnerDeletion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("kind")))
    {
        utility::string_t refVal_kind;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("kind")), refVal_kind );
        setKind(refVal_kind);
    }
    return ok;
}

utility::string_t Json_V1OwnerReference::getApiVersion() const
{
    return m_ApiVersion;
}

void Json_V1OwnerReference::setApiVersion(const utility::string_t& value)
{
    m_ApiVersion = value;
    m_ApiVersionIsSet = true;
}

bool Json_V1OwnerReference::apiVersionIsSet() const
{
    return m_ApiVersionIsSet;
}

void Json_V1OwnerReference::unsetApiVersion()
{
    m_ApiVersionIsSet = false;
}
utility::string_t Json_V1OwnerReference::getName() const
{
    return m_Name;
}

void Json_V1OwnerReference::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Json_V1OwnerReference::nameIsSet() const
{
    return m_NameIsSet;
}

void Json_V1OwnerReference::unsetName()
{
    m_NameIsSet = false;
}
bool Json_V1OwnerReference::isController() const
{
    return m_Controller;
}

void Json_V1OwnerReference::setController(bool value)
{
    m_Controller = value;
    m_ControllerIsSet = true;
}

bool Json_V1OwnerReference::controllerIsSet() const
{
    return m_ControllerIsSet;
}

void Json_V1OwnerReference::unsetController()
{
    m_ControllerIsSet = false;
}
utility::string_t Json_V1OwnerReference::getUid() const
{
    return m_Uid;
}

void Json_V1OwnerReference::setUid(const utility::string_t& value)
{
    m_Uid = value;
    m_UidIsSet = true;
}

bool Json_V1OwnerReference::uidIsSet() const
{
    return m_UidIsSet;
}

void Json_V1OwnerReference::unsetUid()
{
    m_UidIsSet = false;
}
bool Json_V1OwnerReference::isBlockOwnerDeletion() const
{
    return m_BlockOwnerDeletion;
}

void Json_V1OwnerReference::setBlockOwnerDeletion(bool value)
{
    m_BlockOwnerDeletion = value;
    m_BlockOwnerDeletionIsSet = true;
}

bool Json_V1OwnerReference::blockOwnerDeletionIsSet() const
{
    return m_BlockOwnerDeletionIsSet;
}

void Json_V1OwnerReference::unsetBlockOwnerDeletion()
{
    m_BlockOwnerDeletionIsSet = false;
}
utility::string_t Json_V1OwnerReference::getKind() const
{
    return m_Kind;
}

void Json_V1OwnerReference::setKind(const utility::string_t& value)
{
    m_Kind = value;
    m_KindIsSet = true;
}

bool Json_V1OwnerReference::kindIsSet() const
{
    return m_KindIsSet;
}

void Json_V1OwnerReference::unsetKind()
{
    m_KindIsSet = false;
}
}
}
}
}


