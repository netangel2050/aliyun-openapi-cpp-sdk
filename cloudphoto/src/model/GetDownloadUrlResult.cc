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

#include <alibabacloud/cloudphoto/model/GetDownloadUrlResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

GetDownloadUrlResult::GetDownloadUrlResult() :
	ServiceResult()
{}

GetDownloadUrlResult::GetDownloadUrlResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDownloadUrlResult::~GetDownloadUrlResult()
{}

void GetDownloadUrlResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	code_ = value["Code"].asString();
	message_ = value["Message"].asString();
	downloadUrl_ = value["DownloadUrl"].asString();
	action_ = value["Action"].asString();

}

std::string GetDownloadUrlResult::getAction()const
{
	return action_;
}

void GetDownloadUrlResult::setAction(const std::string& action)
{
	action_ = action;
}

std::string GetDownloadUrlResult::getMessage()const
{
	return message_;
}

void GetDownloadUrlResult::setMessage(const std::string& message)
{
	message_ = message;
}

std::string GetDownloadUrlResult::getCode()const
{
	return code_;
}

void GetDownloadUrlResult::setCode(const std::string& code)
{
	code_ = code;
}

std::string GetDownloadUrlResult::getDownloadUrl()const
{
	return downloadUrl_;
}

void GetDownloadUrlResult::setDownloadUrl(const std::string& downloadUrl)
{
	downloadUrl_ = downloadUrl;
}
