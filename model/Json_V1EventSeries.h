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

/*
 * Json_V1EventSeries.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_V1EventSeries_H_
#define COM_MADANA_APICLIENT_MODEL_Json_V1EventSeries_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_V1EventSeries
    : public ModelBase
{
public:
    Json_V1EventSeries();
    virtual ~Json_V1EventSeries();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_V1EventSeries members

    /// <summary>
    /// 
    /// </summary>
    double getLastObservedTime() const;
    bool lastObservedTimeIsSet() const;
    void unsetLastObservedTime();

    void setLastObservedTime(double value);

    /// <summary>
    /// 
    /// </summary>
    double getCount() const;
    bool countIsSet() const;
    void unsetCount();

    void setCount(double value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(const utility::string_t& value);


protected:
    double m_LastObservedTime;
    bool m_LastObservedTimeIsSet;
    double m_Count;
    bool m_CountIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_V1EventSeries_H_ */
