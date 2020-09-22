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

#include <alibabacloud/vs/model/DescribeStreamRequest.h>

using AlibabaCloud::Vs::Model::DescribeStreamRequest;

DescribeStreamRequest::DescribeStreamRequest() :
	RpcServiceRequest("vs", "2018-12-12", "DescribeStream")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStreamRequest::~DescribeStreamRequest()
{}

std::string DescribeStreamRequest::getId()const
{
	return id_;
}

void DescribeStreamRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeStreamRequest::getShowLog()const
{
	return showLog_;
}

void DescribeStreamRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

long DescribeStreamRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStreamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

