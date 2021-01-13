/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.24
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * EnvironmentServiceApi.h
 *
 * 
 */

#ifndef   COM_MADANA_APICLIENT_API_EnvironmentServiceApi_H_
#define   COM_MADANA_APICLIENT_API_EnvironmentServiceApi_H_


#include "../ApiClient.h"

#include "HttpContent.h"
#include "Json_Environment.h"
#include "Json_EnvironmentPublishingRequest.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace   com {
namespace madana {
namespace apiclient {
namespace api {

using namespace com::madana::apiclient::model;



class  EnvironmentServiceApi 
{
public:

    explicit EnvironmentServiceApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~EnvironmentServiceApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uuid"></param>
    pplx::task<std::shared_ptr<HttpContent>> deleteEnvironment(
        utility::string_t uuid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uuid"></param>
    pplx::task<std::shared_ptr<HttpContent>> deleteEnvironmentSubscription(
        utility::string_t uuid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uuid"></param>
    pplx::task<std::shared_ptr<HttpContent>> getEnvironment(
        utility::string_t uuid
    ) const;
    /// <summary>
    /// Returns UUIDs of existing analyses.
    /// </summary>
    /// <remarks>
    /// Returns UUIDs of existing analyses.
    /// </remarks>
    /// <param name="authorization">Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJzdWIiOiIxMjM0NTY3ODkwIiwibmFtZSI6IkpvaG4gRG9lIiwiaWF0IjoxNTE2MjM5MDIyfQ.SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="created">- if Queryparam \&quot;created&#x3D;true\&quot; only the UUIDs of own Requests are shown (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="limit">Used for offset pagination. Limit/Offset Paging would look like GET /request?limit&#x3D;20&amp;offset&#x3D;100. This query would return the 20 rows starting with the 100th row (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="name"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="offset">Used for offset pagination. Limit/Offset Paging would look like GET /request?limit&#x3D;20&amp;offset&#x3D;100. This query would return the 20 rows starting with the 100th row (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getEnvironments(
        boost::optional<utility::string_t> authorization,
        boost::optional<utility::string_t> created,
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> name,
        boost::optional<utility::string_t> offset
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="limit"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="name"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="offset"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getPublishedEnvironments(
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> name,
        boost::optional<utility::string_t> offset
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="limit"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="offset"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getSubscribedEnvironments(
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> offset
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> publishEnvironment(
        boost::optional<std::shared_ptr<Json_EnvironmentPublishingRequest>> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uuid"></param>
    pplx::task<std::shared_ptr<HttpContent>> subscribeEnvironment(
        utility::string_t uuid
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="uuid"></param>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> updateEnvironment(
        utility::string_t uuid,
        boost::optional<std::shared_ptr<Json_Environment>> body
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /*   COM_MADANA_APICLIENT_API_EnvironmentServiceApi_H_ */

