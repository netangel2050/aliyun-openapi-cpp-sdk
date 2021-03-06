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

#include <alibabacloud/cas/model/DescribeSignatureTradeListRequest.h>

using AlibabaCloud::Cas::Model::DescribeSignatureTradeListRequest;

DescribeSignatureTradeListRequest::DescribeSignatureTradeListRequest() :
	RpcServiceRequest("cas", "2018-08-13", "DescribeSignatureTradeList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSignatureTradeListRequest::~DescribeSignatureTradeListRequest()
{}

std::string DescribeSignatureTradeListRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeSignatureTradeListRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeSignatureTradeListRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeSignatureTradeListRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeSignatureTradeListRequest::getSearchType()const
{
	return searchType_;
}

void DescribeSignatureTradeListRequest::setSearchType(const std::string& searchType)
{
	searchType_ = searchType;
	setParameter("SearchType", searchType);
}

std::string DescribeSignatureTradeListRequest::getLang()const
{
	return lang_;
}

void DescribeSignatureTradeListRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DescribeSignatureTradeListRequest::getSearchValue()const
{
	return searchValue_;
}

void DescribeSignatureTradeListRequest::setSearchValue(const std::string& searchValue)
{
	searchValue_ = searchValue;
	setParameter("SearchValue", searchValue);
}

int DescribeSignatureTradeListRequest::getShowSize()const
{
	return showSize_;
}

void DescribeSignatureTradeListRequest::setShowSize(int showSize)
{
	showSize_ = showSize;
	setParameter("ShowSize", std::to_string(showSize));
}

int DescribeSignatureTradeListRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribeSignatureTradeListRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

