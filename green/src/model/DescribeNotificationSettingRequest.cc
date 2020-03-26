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

#include <alibabacloud/green/model/DescribeNotificationSettingRequest.h>

using AlibabaCloud::Green::Model::DescribeNotificationSettingRequest;

DescribeNotificationSettingRequest::DescribeNotificationSettingRequest() :
	RpcServiceRequest("green", "2017-08-23", "DescribeNotificationSetting")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeNotificationSettingRequest::~DescribeNotificationSettingRequest()
{}

std::string DescribeNotificationSettingRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeNotificationSettingRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeNotificationSettingRequest::getLang()const
{
	return lang_;
}

void DescribeNotificationSettingRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

