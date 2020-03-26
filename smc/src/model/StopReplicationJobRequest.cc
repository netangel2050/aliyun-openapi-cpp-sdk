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

#include <alibabacloud/smc/model/StopReplicationJobRequest.h>

using AlibabaCloud::Smc::Model::StopReplicationJobRequest;

StopReplicationJobRequest::StopReplicationJobRequest() :
	RpcServiceRequest("smc", "2019-06-01", "StopReplicationJob")
{
	setMethod(HttpRequest::Method::Post);
}

StopReplicationJobRequest::~StopReplicationJobRequest()
{}

std::string StopReplicationJobRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StopReplicationJobRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long StopReplicationJobRequest::getOwnerId()const
{
	return ownerId_;
}

void StopReplicationJobRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StopReplicationJobRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopReplicationJobRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string StopReplicationJobRequest::getJobId()const
{
	return jobId_;
}

void StopReplicationJobRequest::setJobId(const std::string& jobId)
{
	jobId_ = jobId;
	setParameter("JobId", jobId);
}

