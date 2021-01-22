/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.43
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_V1ObjectMeta.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_V1ObjectMeta_H_
#define COM_MADANA_APICLIENT_MODEL_Json_V1ObjectMeta_H_


#include "../ModelBase.h"

#include "Json_V1OwnerReference.h"
#include "Json_V1ManagedFieldsEntry.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_V1ObjectMeta
    : public ModelBase
{
public:
    Json_V1ObjectMeta();
    virtual ~Json_V1ObjectMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_V1ObjectMeta members

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getLabels();
    bool labelsIsSet() const;
    void unsetLabels();

    void setLabels(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRNamespace() const;
    bool rNamespaceIsSet() const;
    void unsetr_namespace();

    void setRNamespace(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getResourceVersion() const;
    bool resourceVersionIsSet() const;
    void unsetResourceVersion();

    void setResourceVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getDeletionTimestamp() const;
    bool deletionTimestampIsSet() const;
    void unsetDeletionTimestamp();

    void setDeletionTimestamp(double value);

    /// <summary>
    /// 
    /// </summary>
    double getDeletionGracePeriodSeconds() const;
    bool deletionGracePeriodSecondsIsSet() const;
    void unsetDeletionGracePeriodSeconds();

    void setDeletionGracePeriodSeconds(double value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_V1ManagedFieldsEntry>>& getManagedFields();
    bool managedFieldsIsSet() const;
    void unsetManagedFields();

    void setManagedFields(const std::vector<std::shared_ptr<Json_V1ManagedFieldsEntry>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_V1OwnerReference>>& getOwnerReferences();
    bool ownerReferencesIsSet() const;
    void unsetOwnerReferences();

    void setOwnerReferences(const std::vector<std::shared_ptr<Json_V1OwnerReference>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUid() const;
    bool uidIsSet() const;
    void unsetUid();

    void setUid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getGenerateName() const;
    bool generateNameIsSet() const;
    void unsetGenerateName();

    void setGenerateName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetAnnotations();

    void setAnnotations(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    double getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetCreationTimestamp();

    void setCreationTimestamp(double value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getFinalizers();
    bool finalizersIsSet() const;
    void unsetFinalizers();

    void setFinalizers(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetClusterName();

    void setClusterName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    double getGeneration() const;
    bool generationIsSet() const;
    void unsetGeneration();

    void setGeneration(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSelfLink() const;
    bool selfLinkIsSet() const;
    void unsetSelfLink();

    void setSelfLink(const utility::string_t& value);


protected:
    std::map<utility::string_t, utility::string_t> m_Labels;
    bool m_LabelsIsSet;
    utility::string_t m_r_namespace;
    bool m_r_namespaceIsSet;
    utility::string_t m_ResourceVersion;
    bool m_ResourceVersionIsSet;
    double m_DeletionTimestamp;
    bool m_DeletionTimestampIsSet;
    double m_DeletionGracePeriodSeconds;
    bool m_DeletionGracePeriodSecondsIsSet;
    std::vector<std::shared_ptr<Json_V1ManagedFieldsEntry>> m_ManagedFields;
    bool m_ManagedFieldsIsSet;
    std::vector<std::shared_ptr<Json_V1OwnerReference>> m_OwnerReferences;
    bool m_OwnerReferencesIsSet;
    utility::string_t m_Uid;
    bool m_UidIsSet;
    utility::string_t m_GenerateName;
    bool m_GenerateNameIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::map<utility::string_t, utility::string_t> m_Annotations;
    bool m_AnnotationsIsSet;
    double m_CreationTimestamp;
    bool m_CreationTimestampIsSet;
    std::vector<utility::string_t> m_Finalizers;
    bool m_FinalizersIsSet;
    utility::string_t m_ClusterName;
    bool m_ClusterNameIsSet;
    double m_Generation;
    bool m_GenerationIsSet;
    utility::string_t m_SelfLink;
    bool m_SelfLinkIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_V1ObjectMeta_H_ */
