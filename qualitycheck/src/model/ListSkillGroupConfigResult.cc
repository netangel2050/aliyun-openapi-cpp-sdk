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

#include <alibabacloud/qualitycheck/model/ListSkillGroupConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Qualitycheck;
using namespace AlibabaCloud::Qualitycheck::Model;

ListSkillGroupConfigResult::ListSkillGroupConfigResult() :
	ServiceResult()
{}

ListSkillGroupConfigResult::ListSkillGroupConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSkillGroupConfigResult::~ListSkillGroupConfigResult()
{}

void ListSkillGroupConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["SkillGroupConfig"];
	for (auto valueDataSkillGroupConfig : allDataNode)
	{
		SkillGroupConfig dataObject;
		if(!valueDataSkillGroupConfig["Id"].isNull())
			dataObject.id = std::stol(valueDataSkillGroupConfig["Id"].asString());
		if(!valueDataSkillGroupConfig["InstanceId"].isNull())
			dataObject.instanceId = valueDataSkillGroupConfig["InstanceId"].asString();
		if(!valueDataSkillGroupConfig["ModelId"].isNull())
			dataObject.modelId = std::stol(valueDataSkillGroupConfig["ModelId"].asString());
		if(!valueDataSkillGroupConfig["ModelName"].isNull())
			dataObject.modelName = valueDataSkillGroupConfig["ModelName"].asString();
		if(!valueDataSkillGroupConfig["Name"].isNull())
			dataObject.name = valueDataSkillGroupConfig["Name"].asString();
		if(!valueDataSkillGroupConfig["Rid"].isNull())
			dataObject.rid = valueDataSkillGroupConfig["Rid"].asString();
		if(!valueDataSkillGroupConfig["SkillGroupId"].isNull())
			dataObject.skillGroupId = valueDataSkillGroupConfig["SkillGroupId"].asString();
		if(!valueDataSkillGroupConfig["SkillGroupName"].isNull())
			dataObject.skillGroupName = valueDataSkillGroupConfig["SkillGroupName"].asString();
		if(!valueDataSkillGroupConfig["Status"].isNull())
			dataObject.status = std::stoi(valueDataSkillGroupConfig["Status"].asString());
		if(!valueDataSkillGroupConfig["Type"].isNull())
			dataObject.type = std::stoi(valueDataSkillGroupConfig["Type"].asString());
		if(!valueDataSkillGroupConfig["VocabId"].isNull())
			dataObject.vocabId = std::stol(valueDataSkillGroupConfig["VocabId"].asString());
		if(!valueDataSkillGroupConfig["VocabName"].isNull())
			dataObject.vocabName = valueDataSkillGroupConfig["VocabName"].asString();
		if(!valueDataSkillGroupConfig["CreateTime"].isNull())
			dataObject.createTime = valueDataSkillGroupConfig["CreateTime"].asString();
		if(!valueDataSkillGroupConfig["UpdateTime"].isNull())
			dataObject.updateTime = valueDataSkillGroupConfig["UpdateTime"].asString();
		if(!valueDataSkillGroupConfig["QualityCheckType"].isNull())
			dataObject.qualityCheckType = std::stoi(valueDataSkillGroupConfig["QualityCheckType"].asString());
		if(!valueDataSkillGroupConfig["AllContentQualityCheck"].isNull())
			dataObject.allContentQualityCheck = std::stoi(valueDataSkillGroupConfig["AllContentQualityCheck"].asString());
		if(!valueDataSkillGroupConfig["AllRids"].isNull())
			dataObject.allRids = valueDataSkillGroupConfig["AllRids"].asString();
		if(!valueDataSkillGroupConfig["SkillGroupFrom"].isNull())
			dataObject.skillGroupFrom = std::stoi(valueDataSkillGroupConfig["SkillGroupFrom"].asString());
		auto allRuleListNode = valueDataSkillGroupConfig["RuleList"]["RuleNameInfo"];
		for (auto valueDataSkillGroupConfigRuleListRuleNameInfo : allRuleListNode)
		{
			SkillGroupConfig::RuleNameInfo ruleListObject;
			if(!valueDataSkillGroupConfigRuleListRuleNameInfo["Rid"].isNull())
				ruleListObject.rid = std::stol(valueDataSkillGroupConfigRuleListRuleNameInfo["Rid"].asString());
			if(!valueDataSkillGroupConfigRuleListRuleNameInfo["RuleName"].isNull())
				ruleListObject.ruleName = valueDataSkillGroupConfigRuleListRuleNameInfo["RuleName"].asString();
			dataObject.ruleList.push_back(ruleListObject);
		}
		auto allAllRuleListNode = valueDataSkillGroupConfig["AllRuleList"]["RuleNameInfo"];
		for (auto valueDataSkillGroupConfigAllRuleListRuleNameInfo : allAllRuleListNode)
		{
			SkillGroupConfig::RuleNameInfo allRuleListObject;
			if(!valueDataSkillGroupConfigAllRuleListRuleNameInfo["Rid"].isNull())
				allRuleListObject.rid = std::stol(valueDataSkillGroupConfigAllRuleListRuleNameInfo["Rid"].asString());
			if(!valueDataSkillGroupConfigAllRuleListRuleNameInfo["RuleName"].isNull())
				allRuleListObject.ruleName = valueDataSkillGroupConfigAllRuleListRuleNameInfo["RuleName"].asString();
			dataObject.allRuleList.push_back(allRuleListObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string ListSkillGroupConfigResult::getMessage()const
{
	return message_;
}

std::vector<ListSkillGroupConfigResult::SkillGroupConfig> ListSkillGroupConfigResult::getData()const
{
	return data_;
}

std::string ListSkillGroupConfigResult::getCode()const
{
	return code_;
}

bool ListSkillGroupConfigResult::getSuccess()const
{
	return success_;
}

