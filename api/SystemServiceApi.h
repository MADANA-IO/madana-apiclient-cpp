/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.28
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * SystemServiceApi.h
 *
 * 
 */

#ifndef   COM_MADANA_APICLIENT_API_SystemServiceApi_H_
#define   COM_MADANA_APICLIENT_API_SystemServiceApi_H_


#include "../ApiClient.h"

#include "HttpContent.h"
#include "../ModelBase.h"

#include <boost/optional.hpp>

namespace   com {
namespace madana {
namespace apiclient {
namespace api {

using namespace com::madana::apiclient::model;



class  SystemServiceApi 
{
public:

    explicit SystemServiceApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~SystemServiceApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    pplx::task<std::shared_ptr<HttpContent>> getAllObjects(
    ) const;
    /// <summary>
    /// Return the current application usage.
    /// </summary>
    /// <remarks>
    /// Return the current application usage
    /// </remarks>
    pplx::task<std::map<utility::string_t, std::shared_ptr<Object>>> getApplication2(
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /*   COM_MADANA_APICLIENT_API_SystemServiceApi_H_ */

