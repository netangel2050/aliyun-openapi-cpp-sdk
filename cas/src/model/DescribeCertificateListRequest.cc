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

#include <alibabacloud/cas/model/DescribeCertificateListRequest.h>

using AlibabaCloud::Cas::Model::DescribeCertificateListRequest;

DescribeCertificateListRequest::DescribeCertificateListRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeCertificateList")
{}

DescribeCertificateListRequest::~DescribeCertificateListRequest()
{}

std::string DescribeCertificateListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeCertificateListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribeCertificateListRequest::getShowSize()const
{
	return showSize_;
}

void DescribeCertificateListRequest::setShowSize(int showSize)
{
	showSize_ = showSize;
	setParameter("ShowSize", std::to_string(showSize));
}

int DescribeCertificateListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeCertificateListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribeCertificateListRequest::getKeyword()const
{
	return keyword_;
}

void DescribeCertificateListRequest::setKeyword(const std::string& keyword)
{
	keyword_ = keyword;
	setParameter("Keyword", keyword);
}

std::string DescribeCertificateListRequest::getLang()const
{
	return lang_;
}

void DescribeCertificateListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeCertificateListRequest::getStatus()const
{
	return status_;
}

void DescribeCertificateListRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

