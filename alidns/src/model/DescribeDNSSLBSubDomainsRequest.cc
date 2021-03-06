/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/alidns/model/DescribeDNSSLBSubDomainsRequest.h>

using AlibabaCloud::Alidns::Model::DescribeDNSSLBSubDomainsRequest;

DescribeDNSSLBSubDomainsRequest::DescribeDNSSLBSubDomainsRequest() :
	RpcServiceRequest("alidns", "2015-01-09", "DescribeDNSSLBSubDomains")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDNSSLBSubDomainsRequest::~DescribeDNSSLBSubDomainsRequest()
{}

std::string DescribeDNSSLBSubDomainsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDNSSLBSubDomainsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long DescribeDNSSLBSubDomainsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDNSSLBSubDomainsRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDNSSLBSubDomainsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDNSSLBSubDomainsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDNSSLBSubDomainsRequest::getUserClientIp()const
{
	return userClientIp_;
}

void DescribeDNSSLBSubDomainsRequest::setUserClientIp(const std::string& userClientIp)
{
	userClientIp_ = userClientIp;
	setParameter("UserClientIp", userClientIp);
}

long DescribeDNSSLBSubDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDNSSLBSubDomainsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDNSSLBSubDomainsRequest::getLang()const
{
	return lang_;
}

void DescribeDNSSLBSubDomainsRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

