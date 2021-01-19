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



#include "Json_V1ObjectMeta.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1ObjectMeta::Json_V1ObjectMeta()
{
    m_SelfLink = utility::conversions::to_string_t("");
    m_SelfLinkIsSet = false;
    m_GenerateName = utility::conversions::to_string_t("");
    m_GenerateNameIsSet = false;
    m_Uid = utility::conversions::to_string_t("");
    m_UidIsSet = false;
    m_LabelsIsSet = false;
    m_Generation = 0.0;
    m_GenerationIsSet = false;
    m_AnnotationsIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_DeletionGracePeriodSeconds = 0.0;
    m_DeletionGracePeriodSecondsIsSet = false;
    m_OwnerReferencesIsSet = false;
    m_FinalizersIsSet = false;
    m_ResourceVersion = utility::conversions::to_string_t("");
    m_ResourceVersionIsSet = false;
    m_DeletionTimestamp = 0.0;
    m_DeletionTimestampIsSet = false;
    m_r_namespace = utility::conversions::to_string_t("");
    m_r_namespaceIsSet = false;
    m_CreationTimestamp = 0.0;
    m_CreationTimestampIsSet = false;
    m_ManagedFieldsIsSet = false;
    m_ClusterName = utility::conversions::to_string_t("");
    m_ClusterNameIsSet = false;
}

Json_V1ObjectMeta::~Json_V1ObjectMeta()
{
}

void Json_V1ObjectMeta::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1ObjectMeta::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_SelfLinkIsSet)
    {
        val[utility::conversions::to_string_t("selfLink")] = ModelBase::toJson(m_SelfLink);
    }
    if(m_GenerateNameIsSet)
    {
        val[utility::conversions::to_string_t("generateName")] = ModelBase::toJson(m_GenerateName);
    }
    if(m_UidIsSet)
    {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(m_Uid);
    }
    if(m_LabelsIsSet)
    {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(m_Labels);
    }
    if(m_GenerationIsSet)
    {
        val[utility::conversions::to_string_t("generation")] = ModelBase::toJson(m_Generation);
    }
    if(m_AnnotationsIsSet)
    {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(m_Annotations);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_DeletionGracePeriodSecondsIsSet)
    {
        val[utility::conversions::to_string_t("deletionGracePeriodSeconds")] = ModelBase::toJson(m_DeletionGracePeriodSeconds);
    }
    if(m_OwnerReferencesIsSet)
    {
        val[utility::conversions::to_string_t("ownerReferences")] = ModelBase::toJson(m_OwnerReferences);
    }
    if(m_FinalizersIsSet)
    {
        val[utility::conversions::to_string_t("finalizers")] = ModelBase::toJson(m_Finalizers);
    }
    if(m_ResourceVersionIsSet)
    {
        val[utility::conversions::to_string_t("resourceVersion")] = ModelBase::toJson(m_ResourceVersion);
    }
    if(m_DeletionTimestampIsSet)
    {
        val[utility::conversions::to_string_t("deletionTimestamp")] = ModelBase::toJson(m_DeletionTimestamp);
    }
    if(m_r_namespaceIsSet)
    {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(m_r_namespace);
    }
    if(m_CreationTimestampIsSet)
    {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(m_CreationTimestamp);
    }
    if(m_ManagedFieldsIsSet)
    {
        val[utility::conversions::to_string_t("managedFields")] = ModelBase::toJson(m_ManagedFields);
    }
    if(m_ClusterNameIsSet)
    {
        val[utility::conversions::to_string_t("clusterName")] = ModelBase::toJson(m_ClusterName);
    }

    return val;
}

bool Json_V1ObjectMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("selfLink")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("selfLink"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_selfLink;
            ok &= ModelBase::fromJson(fieldValue, refVal_selfLink);
            setSelfLink(refVal_selfLink);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("generateName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generateName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_generateName;
            ok &= ModelBase::fromJson(fieldValue, refVal_generateName);
            setGenerateName(refVal_generateName);
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
    if(val.has_field(utility::conversions::to_string_t("labels")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_labels;
            ok &= ModelBase::fromJson(fieldValue, refVal_labels);
            setLabels(refVal_labels);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("generation")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generation"));
        if(!fieldValue.is_null())
        {
            double refVal_generation;
            ok &= ModelBase::fromJson(fieldValue, refVal_generation);
            setGeneration(refVal_generation);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("annotations")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            std::map<utility::string_t, utility::string_t> refVal_annotations;
            ok &= ModelBase::fromJson(fieldValue, refVal_annotations);
            setAnnotations(refVal_annotations);
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
    if(val.has_field(utility::conversions::to_string_t("deletionGracePeriodSeconds")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletionGracePeriodSeconds"));
        if(!fieldValue.is_null())
        {
            double refVal_deletionGracePeriodSeconds;
            ok &= ModelBase::fromJson(fieldValue, refVal_deletionGracePeriodSeconds);
            setDeletionGracePeriodSeconds(refVal_deletionGracePeriodSeconds);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerReferences")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerReferences"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Json_V1OwnerReference>> refVal_ownerReferences;
            ok &= ModelBase::fromJson(fieldValue, refVal_ownerReferences);
            setOwnerReferences(refVal_ownerReferences);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finalizers")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finalizers"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_finalizers;
            ok &= ModelBase::fromJson(fieldValue, refVal_finalizers);
            setFinalizers(refVal_finalizers);
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
    if(val.has_field(utility::conversions::to_string_t("deletionTimestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletionTimestamp"));
        if(!fieldValue.is_null())
        {
            double refVal_deletionTimestamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_deletionTimestamp);
            setDeletionTimestamp(refVal_deletionTimestamp);
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
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            double refVal_creationTimestamp;
            ok &= ModelBase::fromJson(fieldValue, refVal_creationTimestamp);
            setCreationTimestamp(refVal_creationTimestamp);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("managedFields")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("managedFields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Json_V1ManagedFieldsEntry>> refVal_managedFields;
            ok &= ModelBase::fromJson(fieldValue, refVal_managedFields);
            setManagedFields(refVal_managedFields);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterName")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterName"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_clusterName;
            ok &= ModelBase::fromJson(fieldValue, refVal_clusterName);
            setClusterName(refVal_clusterName);
        }
    }
    return ok;
}

void Json_V1ObjectMeta::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_SelfLinkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("selfLink"), m_SelfLink));
    }
    if(m_GenerateNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("generateName"), m_GenerateName));
    }
    if(m_UidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uid"), m_Uid));
    }
    if(m_LabelsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("labels"), m_Labels));
    }
    if(m_GenerationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("generation"), m_Generation));
    }
    if(m_AnnotationsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("annotations"), m_Annotations));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_DeletionGracePeriodSecondsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deletionGracePeriodSeconds"), m_DeletionGracePeriodSeconds));
    }
    if(m_OwnerReferencesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ownerReferences"), m_OwnerReferences));
    }
    if(m_FinalizersIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("finalizers"), m_Finalizers));
    }
    if(m_ResourceVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("resourceVersion"), m_ResourceVersion));
    }
    if(m_DeletionTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("deletionTimestamp"), m_DeletionTimestamp));
    }
    if(m_r_namespaceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("namespace"), m_r_namespace));
    }
    if(m_CreationTimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("creationTimestamp"), m_CreationTimestamp));
    }
    if(m_ManagedFieldsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("managedFields"), m_ManagedFields));
    }
    if(m_ClusterNameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("clusterName"), m_ClusterName));
    }
}

bool Json_V1ObjectMeta::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("selfLink")))
    {
        utility::string_t refVal_selfLink;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("selfLink")), refVal_selfLink );
        setSelfLink(refVal_selfLink);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("generateName")))
    {
        utility::string_t refVal_generateName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("generateName")), refVal_generateName );
        setGenerateName(refVal_generateName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uid")))
    {
        utility::string_t refVal_uid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uid")), refVal_uid );
        setUid(refVal_uid);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("labels")))
    {
        std::map<utility::string_t, utility::string_t> refVal_labels;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("labels")), refVal_labels );
        setLabels(refVal_labels);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("generation")))
    {
        double refVal_generation;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("generation")), refVal_generation );
        setGeneration(refVal_generation);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("annotations")))
    {
        std::map<utility::string_t, utility::string_t> refVal_annotations;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("annotations")), refVal_annotations );
        setAnnotations(refVal_annotations);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deletionGracePeriodSeconds")))
    {
        double refVal_deletionGracePeriodSeconds;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deletionGracePeriodSeconds")), refVal_deletionGracePeriodSeconds );
        setDeletionGracePeriodSeconds(refVal_deletionGracePeriodSeconds);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ownerReferences")))
    {
        std::vector<std::shared_ptr<Json_V1OwnerReference>> refVal_ownerReferences;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ownerReferences")), refVal_ownerReferences );
        setOwnerReferences(refVal_ownerReferences);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("finalizers")))
    {
        std::vector<utility::string_t> refVal_finalizers;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("finalizers")), refVal_finalizers );
        setFinalizers(refVal_finalizers);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("resourceVersion")))
    {
        utility::string_t refVal_resourceVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("resourceVersion")), refVal_resourceVersion );
        setResourceVersion(refVal_resourceVersion);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("deletionTimestamp")))
    {
        double refVal_deletionTimestamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("deletionTimestamp")), refVal_deletionTimestamp );
        setDeletionTimestamp(refVal_deletionTimestamp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("namespace")))
    {
        utility::string_t refVal_namespace;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("namespace")), refVal_namespace );
        setRNamespace(refVal_namespace);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("creationTimestamp")))
    {
        double refVal_creationTimestamp;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("creationTimestamp")), refVal_creationTimestamp );
        setCreationTimestamp(refVal_creationTimestamp);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("managedFields")))
    {
        std::vector<std::shared_ptr<Json_V1ManagedFieldsEntry>> refVal_managedFields;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("managedFields")), refVal_managedFields );
        setManagedFields(refVal_managedFields);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("clusterName")))
    {
        utility::string_t refVal_clusterName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("clusterName")), refVal_clusterName );
        setClusterName(refVal_clusterName);
    }
    return ok;
}

utility::string_t Json_V1ObjectMeta::getSelfLink() const
{
    return m_SelfLink;
}

void Json_V1ObjectMeta::setSelfLink(const utility::string_t& value)
{
    m_SelfLink = value;
    m_SelfLinkIsSet = true;
}

bool Json_V1ObjectMeta::selfLinkIsSet() const
{
    return m_SelfLinkIsSet;
}

void Json_V1ObjectMeta::unsetSelfLink()
{
    m_SelfLinkIsSet = false;
}
utility::string_t Json_V1ObjectMeta::getGenerateName() const
{
    return m_GenerateName;
}

void Json_V1ObjectMeta::setGenerateName(const utility::string_t& value)
{
    m_GenerateName = value;
    m_GenerateNameIsSet = true;
}

bool Json_V1ObjectMeta::generateNameIsSet() const
{
    return m_GenerateNameIsSet;
}

void Json_V1ObjectMeta::unsetGenerateName()
{
    m_GenerateNameIsSet = false;
}
utility::string_t Json_V1ObjectMeta::getUid() const
{
    return m_Uid;
}

void Json_V1ObjectMeta::setUid(const utility::string_t& value)
{
    m_Uid = value;
    m_UidIsSet = true;
}

bool Json_V1ObjectMeta::uidIsSet() const
{
    return m_UidIsSet;
}

void Json_V1ObjectMeta::unsetUid()
{
    m_UidIsSet = false;
}
std::map<utility::string_t, utility::string_t>& Json_V1ObjectMeta::getLabels()
{
    return m_Labels;
}

void Json_V1ObjectMeta::setLabels(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Labels = value;
    m_LabelsIsSet = true;
}

bool Json_V1ObjectMeta::labelsIsSet() const
{
    return m_LabelsIsSet;
}

void Json_V1ObjectMeta::unsetLabels()
{
    m_LabelsIsSet = false;
}
double Json_V1ObjectMeta::getGeneration() const
{
    return m_Generation;
}

void Json_V1ObjectMeta::setGeneration(double value)
{
    m_Generation = value;
    m_GenerationIsSet = true;
}

bool Json_V1ObjectMeta::generationIsSet() const
{
    return m_GenerationIsSet;
}

void Json_V1ObjectMeta::unsetGeneration()
{
    m_GenerationIsSet = false;
}
std::map<utility::string_t, utility::string_t>& Json_V1ObjectMeta::getAnnotations()
{
    return m_Annotations;
}

void Json_V1ObjectMeta::setAnnotations(const std::map<utility::string_t, utility::string_t>& value)
{
    m_Annotations = value;
    m_AnnotationsIsSet = true;
}

bool Json_V1ObjectMeta::annotationsIsSet() const
{
    return m_AnnotationsIsSet;
}

void Json_V1ObjectMeta::unsetAnnotations()
{
    m_AnnotationsIsSet = false;
}
utility::string_t Json_V1ObjectMeta::getName() const
{
    return m_Name;
}

void Json_V1ObjectMeta::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Json_V1ObjectMeta::nameIsSet() const
{
    return m_NameIsSet;
}

void Json_V1ObjectMeta::unsetName()
{
    m_NameIsSet = false;
}
double Json_V1ObjectMeta::getDeletionGracePeriodSeconds() const
{
    return m_DeletionGracePeriodSeconds;
}

void Json_V1ObjectMeta::setDeletionGracePeriodSeconds(double value)
{
    m_DeletionGracePeriodSeconds = value;
    m_DeletionGracePeriodSecondsIsSet = true;
}

bool Json_V1ObjectMeta::deletionGracePeriodSecondsIsSet() const
{
    return m_DeletionGracePeriodSecondsIsSet;
}

void Json_V1ObjectMeta::unsetDeletionGracePeriodSeconds()
{
    m_DeletionGracePeriodSecondsIsSet = false;
}
std::vector<std::shared_ptr<Json_V1OwnerReference>>& Json_V1ObjectMeta::getOwnerReferences()
{
    return m_OwnerReferences;
}

void Json_V1ObjectMeta::setOwnerReferences(const std::vector<std::shared_ptr<Json_V1OwnerReference>>& value)
{
    m_OwnerReferences = value;
    m_OwnerReferencesIsSet = true;
}

bool Json_V1ObjectMeta::ownerReferencesIsSet() const
{
    return m_OwnerReferencesIsSet;
}

void Json_V1ObjectMeta::unsetOwnerReferences()
{
    m_OwnerReferencesIsSet = false;
}
std::vector<utility::string_t>& Json_V1ObjectMeta::getFinalizers()
{
    return m_Finalizers;
}

void Json_V1ObjectMeta::setFinalizers(const std::vector<utility::string_t>& value)
{
    m_Finalizers = value;
    m_FinalizersIsSet = true;
}

bool Json_V1ObjectMeta::finalizersIsSet() const
{
    return m_FinalizersIsSet;
}

void Json_V1ObjectMeta::unsetFinalizers()
{
    m_FinalizersIsSet = false;
}
utility::string_t Json_V1ObjectMeta::getResourceVersion() const
{
    return m_ResourceVersion;
}

void Json_V1ObjectMeta::setResourceVersion(const utility::string_t& value)
{
    m_ResourceVersion = value;
    m_ResourceVersionIsSet = true;
}

bool Json_V1ObjectMeta::resourceVersionIsSet() const
{
    return m_ResourceVersionIsSet;
}

void Json_V1ObjectMeta::unsetResourceVersion()
{
    m_ResourceVersionIsSet = false;
}
double Json_V1ObjectMeta::getDeletionTimestamp() const
{
    return m_DeletionTimestamp;
}

void Json_V1ObjectMeta::setDeletionTimestamp(double value)
{
    m_DeletionTimestamp = value;
    m_DeletionTimestampIsSet = true;
}

bool Json_V1ObjectMeta::deletionTimestampIsSet() const
{
    return m_DeletionTimestampIsSet;
}

void Json_V1ObjectMeta::unsetDeletionTimestamp()
{
    m_DeletionTimestampIsSet = false;
}
utility::string_t Json_V1ObjectMeta::getRNamespace() const
{
    return m_r_namespace;
}

void Json_V1ObjectMeta::setRNamespace(const utility::string_t& value)
{
    m_r_namespace = value;
    m_r_namespaceIsSet = true;
}

bool Json_V1ObjectMeta::rNamespaceIsSet() const
{
    return m_r_namespaceIsSet;
}

void Json_V1ObjectMeta::unsetr_namespace()
{
    m_r_namespaceIsSet = false;
}
double Json_V1ObjectMeta::getCreationTimestamp() const
{
    return m_CreationTimestamp;
}

void Json_V1ObjectMeta::setCreationTimestamp(double value)
{
    m_CreationTimestamp = value;
    m_CreationTimestampIsSet = true;
}

bool Json_V1ObjectMeta::creationTimestampIsSet() const
{
    return m_CreationTimestampIsSet;
}

void Json_V1ObjectMeta::unsetCreationTimestamp()
{
    m_CreationTimestampIsSet = false;
}
std::vector<std::shared_ptr<Json_V1ManagedFieldsEntry>>& Json_V1ObjectMeta::getManagedFields()
{
    return m_ManagedFields;
}

void Json_V1ObjectMeta::setManagedFields(const std::vector<std::shared_ptr<Json_V1ManagedFieldsEntry>>& value)
{
    m_ManagedFields = value;
    m_ManagedFieldsIsSet = true;
}

bool Json_V1ObjectMeta::managedFieldsIsSet() const
{
    return m_ManagedFieldsIsSet;
}

void Json_V1ObjectMeta::unsetManagedFields()
{
    m_ManagedFieldsIsSet = false;
}
utility::string_t Json_V1ObjectMeta::getClusterName() const
{
    return m_ClusterName;
}

void Json_V1ObjectMeta::setClusterName(const utility::string_t& value)
{
    m_ClusterName = value;
    m_ClusterNameIsSet = true;
}

bool Json_V1ObjectMeta::clusterNameIsSet() const
{
    return m_ClusterNameIsSet;
}

void Json_V1ObjectMeta::unsetClusterName()
{
    m_ClusterNameIsSet = false;
}
}
}
}
}


