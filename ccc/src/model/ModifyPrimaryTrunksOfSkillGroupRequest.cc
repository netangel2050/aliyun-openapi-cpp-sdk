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

#include <alibabacloud/ccc/model/ModifyPrimaryTrunksOfSkillGroupRequest.h>

using AlibabaCloud::CCC::Model::ModifyPrimaryTrunksOfSkillGroupRequest;

ModifyPrimaryTrunksOfSkillGroupRequest::ModifyPrimaryTrunksOfSkillGroupRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyPrimaryTrunksOfSkillGroup")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyPrimaryTrunksOfSkillGroupRequest::~ModifyPrimaryTrunksOfSkillGroupRequest()
{}

std::string ModifyPrimaryTrunksOfSkillGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyPrimaryTrunksOfSkillGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<std::string> ModifyPrimaryTrunksOfSkillGroupRequest::getPrimaryProviderName()const
{
	return primaryProviderName_;
}

void ModifyPrimaryTrunksOfSkillGroupRequest::setPrimaryProviderName(const std::vector<std::string>& primaryProviderName)
{
	primaryProviderName_ = primaryProviderName;
	for(int dep1 = 0; dep1!= primaryProviderName.size(); dep1++) {
		setParameter("PrimaryProviderName."+ std::to_string(dep1), primaryProviderName.at(dep1));
	}
}

std::string ModifyPrimaryTrunksOfSkillGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyPrimaryTrunksOfSkillGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyPrimaryTrunksOfSkillGroupRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifyPrimaryTrunksOfSkillGroupRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

