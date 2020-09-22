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

#include <alibabacloud/vs/model/DescribeGroupRequest.h>

using AlibabaCloud::Vs::Model::DescribeGroupRequest;

DescribeGroupRequest::DescribeGroupRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeGroup")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGroupRequest::~DescribeGroupRequest()
{}

bool DescribeGroupRequest::getIncludeStats()const
{
	return includeStats_;
}

void DescribeGroupRequest::setIncludeStats(bool includeStats)
{
	includeStats_ = includeStats;
	setParameter("IncludeStats", includeStats ? "true" : "false");
}

std::string DescribeGroupRequest::getId()const
{
	return id_;
}

void DescribeGroupRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeGroupRequest::getShowLog()const
{
	return showLog_;
}

void DescribeGroupRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

