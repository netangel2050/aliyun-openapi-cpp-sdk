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

#include <alibabacloud/alidns/model/GetTxtRecordForVerifyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

GetTxtRecordForVerifyResult::GetTxtRecordForVerifyResult() :
	ServiceResult()
{}

GetTxtRecordForVerifyResult::GetTxtRecordForVerifyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetTxtRecordForVerifyResult::~GetTxtRecordForVerifyResult()
{}

void GetTxtRecordForVerifyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DomainName"].isNull())
		domainName_ = value["DomainName"].asString();
	if(!value["RR"].isNull())
		rR_ = value["RR"].asString();
	if(!value["Value"].isNull())
		value_ = value["Value"].asString();

}

std::string GetTxtRecordForVerifyResult::getRR()const
{
	return rR_;
}

std::string GetTxtRecordForVerifyResult::getDomainName()const
{
	return domainName_;
}

std::string GetTxtRecordForVerifyResult::getValue()const
{
	return value_;
}

