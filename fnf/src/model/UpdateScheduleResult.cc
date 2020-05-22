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

#include <alibabacloud/fnf/model/UpdateScheduleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

UpdateScheduleResult::UpdateScheduleResult() :
	ServiceResult()
{}

UpdateScheduleResult::UpdateScheduleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateScheduleResult::~UpdateScheduleResult()
{}

void UpdateScheduleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ScheduleName"].isNull())
		scheduleName_ = value["ScheduleName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["ScheduleId"].isNull())
		scheduleId_ = value["ScheduleId"].asString();
	if(!value["Payload"].isNull())
		payload_ = value["Payload"].asString();
	if(!value["CronExpression"].isNull())
		cronExpression_ = value["CronExpression"].asString();
	if(!value["Enable"].isNull())
		enable_ = value["Enable"].asString() == "true";
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["LastModifiedTime"].isNull())
		lastModifiedTime_ = value["LastModifiedTime"].asString();

}

std::string UpdateScheduleResult::getDescription()const
{
	return description_;
}

std::string UpdateScheduleResult::getCreatedTime()const
{
	return createdTime_;
}

std::string UpdateScheduleResult::getLastModifiedTime()const
{
	return lastModifiedTime_;
}

bool UpdateScheduleResult::getEnable()const
{
	return enable_;
}

std::string UpdateScheduleResult::getPayload()const
{
	return payload_;
}

std::string UpdateScheduleResult::getCronExpression()const
{
	return cronExpression_;
}

std::string UpdateScheduleResult::getScheduleId()const
{
	return scheduleId_;
}

std::string UpdateScheduleResult::getScheduleName()const
{
	return scheduleName_;
}

