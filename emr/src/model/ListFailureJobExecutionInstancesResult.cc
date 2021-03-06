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

#include <alibabacloud/emr/model/ListFailureJobExecutionInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListFailureJobExecutionInstancesResult::ListFailureJobExecutionInstancesResult() :
	ServiceResult()
{}

ListFailureJobExecutionInstancesResult::ListFailureJobExecutionInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFailureJobExecutionInstancesResult::~ListFailureJobExecutionInstancesResult()
{}

void ListFailureJobExecutionInstancesResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allJobInstances = value["JobInstances"]["JobInstance"];
	for (auto value : allJobInstances)
	{
		JobInstance jobInstancesObject;
		if(!value["Id"].isNull())
			jobInstancesObject.id = value["Id"].asString();
		if(!value["JobName"].isNull())
			jobInstancesObject.jobName = value["JobName"].asString();
		if(!value["StartTime"].isNull())
			jobInstancesObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["RunTime"].isNull())
			jobInstancesObject.runTime = std::stoi(value["RunTime"].asString());
		if(!value["JobType"].isNull())
			jobInstancesObject.jobType = value["JobType"].asString();
		if(!value["JobId"].isNull())
			jobInstancesObject.jobId = value["JobId"].asString();
		if(!value["ClusterId"].isNull())
			jobInstancesObject.clusterId = value["ClusterId"].asString();
		if(!value["Status"].isNull())
			jobInstancesObject.status = value["Status"].asString();
		if(!value["RetryInfo"].isNull())
			jobInstancesObject.retryInfo = value["RetryInfo"].asString();
		jobInstances_.push_back(jobInstancesObject);
	}

}

std::vector<ListFailureJobExecutionInstancesResult::JobInstance> ListFailureJobExecutionInstancesResult::getJobInstances()const
{
	return jobInstances_;
}

