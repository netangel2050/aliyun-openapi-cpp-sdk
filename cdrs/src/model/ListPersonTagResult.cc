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

#include <alibabacloud/cdrs/model/ListPersonTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CDRS;
using namespace AlibabaCloud::CDRS::Model;

ListPersonTagResult::ListPersonTagResult() :
	ServiceResult()
{}

ListPersonTagResult::ListPersonTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPersonTagResult::~ListPersonTagResult()
{}

void ListPersonTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Datas"];
	for (auto valueDataDatas : allDataNode)
	{
		Datas dataObject;
		if(!valueDataDatas["CorpId"].isNull())
			dataObject.corpId = valueDataDatas["CorpId"].asString();
		if(!valueDataDatas["TagValue"].isNull())
			dataObject.tagValue = valueDataDatas["TagValue"].asString();
		if(!valueDataDatas["Value"].isNull())
			dataObject.value = valueDataDatas["Value"].asString();
		data_.push_back(dataObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListPersonTagResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPersonTagResult::getMessage()const
{
	return message_;
}

long ListPersonTagResult::getPageSize()const
{
	return pageSize_;
}

long ListPersonTagResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListPersonTagResult::Datas> ListPersonTagResult::getData()const
{
	return data_;
}

std::string ListPersonTagResult::getCode()const
{
	return code_;
}

