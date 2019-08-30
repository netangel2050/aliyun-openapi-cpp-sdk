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

#include <alibabacloud/ros/model/ValidateTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

ValidateTemplateResult::ValidateTemplateResult() :
	ServiceResult()
{}

ValidateTemplateResult::ValidateTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ValidateTemplateResult::~ValidateTemplateResult()
{}

void ValidateTemplateResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allParameters = value["Parameters"]["Parameter"];
	for (const auto &item : allParameters)
		parameters_.push_back(item.asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();

}

std::vector<std::string> ValidateTemplateResult::getParameters()const
{
	return parameters_;
}

std::string ValidateTemplateResult::getDescription()const
{
	return description_;
}

