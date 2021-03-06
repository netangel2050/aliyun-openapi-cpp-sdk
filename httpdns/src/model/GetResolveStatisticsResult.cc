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

#include <alibabacloud/httpdns/model/GetResolveStatisticsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Httpdns;
using namespace AlibabaCloud::Httpdns::Model;

GetResolveStatisticsResult::GetResolveStatisticsResult() :
	ServiceResult()
{}

GetResolveStatisticsResult::GetResolveStatisticsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetResolveStatisticsResult::~GetResolveStatisticsResult()
{}

void GetResolveStatisticsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataPointsNode = value["DataPoints"]["DataPoint"];
	for (auto valueDataPointsDataPoint : allDataPointsNode)
	{
		DataPoint dataPointsObject;
		if(!valueDataPointsDataPoint["Time"].isNull())
			dataPointsObject.time = std::stoi(valueDataPointsDataPoint["Time"].asString());
		if(!valueDataPointsDataPoint["Count"].isNull())
			dataPointsObject.count = std::stoi(valueDataPointsDataPoint["Count"].asString());
		dataPoints_.push_back(dataPointsObject);
	}

}

std::vector<GetResolveStatisticsResult::DataPoint> GetResolveStatisticsResult::getDataPoints()const
{
	return dataPoints_;
}

