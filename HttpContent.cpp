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

#include "HttpContent.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {

HttpContent::HttpContent()
{
}

HttpContent::~HttpContent()
{
}

utility::string_t HttpContent::getContentDisposition() const
{
    return m_ContentDisposition;
}

void HttpContent::setContentDisposition( const utility::string_t & value )
{
    m_ContentDisposition = value;
}

utility::string_t HttpContent::getName() const
{
    return m_Name;
}

void HttpContent::setName( const utility::string_t & value )
{
    m_Name = value;
}

utility::string_t HttpContent::getFileName() const
{
    return m_FileName;
}

void HttpContent::setFileName( const utility::string_t & value )
{
    m_FileName = value;
}

utility::string_t HttpContent::getContentType() const
{
    return m_ContentType;
}

void HttpContent::setContentType( const utility::string_t & value )
{
    m_ContentType = value;
}

std::shared_ptr<std::istream> HttpContent::getData() const
{
    return m_Data;
}

void HttpContent::setData( std::shared_ptr<std::istream> value )
{
    m_Data = value;
}

void HttpContent::writeTo( std::ostream& stream )
{
    m_Data->seekg( 0, m_Data->beg );
    stream << m_Data->rdbuf();
}

}
}
}
}
