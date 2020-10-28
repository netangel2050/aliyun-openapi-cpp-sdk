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

#include <alibabacloud/oos/model/SearchInventoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

SearchInventoryResult::SearchInventoryResult() :
	ServiceResult()
{}

SearchInventoryResult::SearchInventoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchInventoryResult::~SearchInventoryResult()
{}

void SearchInventoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEntities = value["Entities"]["Entity"];
	for (const auto &item : allEntities)
		entities_.push_back(item.asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string SearchInventoryResult::getNextToken()const
{
	return nextToken_;
}

int SearchInventoryResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<std::string> SearchInventoryResult::getEntities()const
{
	return entities_;
}

