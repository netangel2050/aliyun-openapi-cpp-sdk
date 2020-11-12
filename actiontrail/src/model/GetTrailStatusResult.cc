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

#include <alibabacloud/actiontrail/model/GetTrailStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

GetTrailStatusResult::GetTrailStatusResult() :
	ServiceResult()
{}

GetTrailStatusResult::GetTrailStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTrailStatusResult::~GetTrailStatusResult()
{}

void GetTrailStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IsLogging"].isNull())
		isLogging_ = value["IsLogging"].asString() == "true";
	if(!value["LatestDeliveryError"].isNull())
		latestDeliveryError_ = value["LatestDeliveryError"].asString();
	if(!value["LatestDeliveryTime"].isNull())
		latestDeliveryTime_ = value["LatestDeliveryTime"].asString();
	if(!value["StartLoggingTime"].isNull())
		startLoggingTime_ = value["StartLoggingTime"].asString();
	if(!value["StopLoggingTime"].isNull())
		stopLoggingTime_ = value["StopLoggingTime"].asString();

}

std::string GetTrailStatusResult::getStartLoggingTime()const
{
	return startLoggingTime_;
}

std::string GetTrailStatusResult::getLatestDeliveryError()const
{
	return latestDeliveryError_;
}

std::string GetTrailStatusResult::getStopLoggingTime()const
{
	return stopLoggingTime_;
}

bool GetTrailStatusResult::getIsLogging()const
{
	return isLogging_;
}

std::string GetTrailStatusResult::getLatestDeliveryTime()const
{
	return latestDeliveryTime_;
}

