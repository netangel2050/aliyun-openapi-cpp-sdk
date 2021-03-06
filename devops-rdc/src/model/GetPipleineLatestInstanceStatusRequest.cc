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

#include <alibabacloud/devops-rdc/model/GetPipleineLatestInstanceStatusRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetPipleineLatestInstanceStatusRequest;

GetPipleineLatestInstanceStatusRequest::GetPipleineLatestInstanceStatusRequest() :
	RpcServiceRequest("devops-rdc", "2020-03-03", "GetPipleineLatestInstanceStatus")
{
	setMethod(HttpRequest::Method::Post);
}

GetPipleineLatestInstanceStatusRequest::~GetPipleineLatestInstanceStatusRequest()
{}

std::string GetPipleineLatestInstanceStatusRequest::getUserPk()const
{
	return userPk_;
}

void GetPipleineLatestInstanceStatusRequest::setUserPk(const std::string& userPk)
{
	userPk_ = userPk;
	setBodyParameter("UserPk", userPk);
}

std::string GetPipleineLatestInstanceStatusRequest::getOrgId()const
{
	return orgId_;
}

void GetPipleineLatestInstanceStatusRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setParameter("OrgId", orgId);
}

long GetPipleineLatestInstanceStatusRequest::getPipelineId()const
{
	return pipelineId_;
}

void GetPipleineLatestInstanceStatusRequest::setPipelineId(long pipelineId)
{
	pipelineId_ = pipelineId;
	setParameter("PipelineId", std::to_string(pipelineId));
}

