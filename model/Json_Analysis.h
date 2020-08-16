/**
 * madana-api
 * <h1>API Quickstart Guide</h1>        <p>This documentation contains a Quickstart Guide, a few <a href=\"downloads.html\">sample clients</a>  for download and information about the available  <a href=\"resources.html\">endpoints</a>  and  <a href=\"data.html\">DataTypes</a>  </p>     <p>The <a target=\"_blank\" href=\"http://madana-explorer-staging.eu-central-1.elasticbeanstalk.com/login\">  MADANA Explorer</a> can be used to verify the interactions with the API</p>           <p>Internal use only. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a></p>         <br> <br>
 *
 * The version of the OpenAPI document: 0.4.12
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_Analysis.h
 *
 * 
 */

#ifndef COM_MADANA_CLIENT_MODEL_Json_Analysis_H_
#define COM_MADANA_CLIENT_MODEL_Json_Analysis_H_


#include "Json_AnalysisRequest.h"
#include "Json_DatasetInfo.h"
#include "Json_AnalysisRequestAction.h"
#include <cpprest/details/basic_types.h>
#include "Json_Analysis_allOf.h"
#include <vector>

namespace com {
namespace madana {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_Analysis
    : public Json_AnalysisRequest
{
public:
    Json_Analysis();
    virtual ~Json_Analysis();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_Analysis members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreated() const;
    bool createdIsSet() const;
    void unsetCreated();

    void setCreated(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();

    void setUuid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAgent() const;
    bool agentIsSet() const;
    void unsetAgent();

    void setAgent(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_DatasetInfo>>& getDatasets();
    bool datasetsIsSet() const;
    void unsetDatasets();

    void setDatasets(const std::vector<std::shared_ptr<Json_DatasetInfo>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getParticipants();
    bool participantsIsSet() const;
    void unsetParticipants();

    void setParticipants(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getViews() const;
    bool viewsIsSet() const;
    void unsetViews();

    void setViews(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_AnalysisRequestAction>>& getActions();
    bool actionsIsSet() const;
    void unsetActions();

    void setActions(const std::vector<std::shared_ptr<Json_AnalysisRequestAction>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCreator() const;
    bool creatorIsSet() const;
    void unsetCreator();

    void setCreator(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDatasetCount() const;
    bool datasetCountIsSet() const;
    void unsetDatasetCount();

    void setDatasetCount(const utility::string_t& value);


protected:
    utility::string_t m_Created;
    bool m_CreatedIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
    utility::string_t m_Agent;
    bool m_AgentIsSet;
    std::vector<std::shared_ptr<Json_DatasetInfo>> m_Datasets;
    bool m_DatasetsIsSet;
    std::vector<utility::string_t> m_Participants;
    bool m_ParticipantsIsSet;
    utility::string_t m_Views;
    bool m_ViewsIsSet;
    std::vector<std::shared_ptr<Json_AnalysisRequestAction>> m_Actions;
    bool m_ActionsIsSet;
    utility::string_t m_Creator;
    bool m_CreatorIsSet;
    utility::string_t m_DatasetCount;
    bool m_DatasetCountIsSet;
};


}
}
}
}

#endif /* COM_MADANA_CLIENT_MODEL_Json_Analysis_H_ */