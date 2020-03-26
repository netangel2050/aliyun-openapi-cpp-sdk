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

#include <alibabacloud/cms/model/ModifyMetricRuleTemplateRequest.h>

using AlibabaCloud::Cms::Model::ModifyMetricRuleTemplateRequest;

ModifyMetricRuleTemplateRequest::ModifyMetricRuleTemplateRequest() :
	RpcServiceRequest("cms", "2019-01-01", "ModifyMetricRuleTemplate")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyMetricRuleTemplateRequest::~ModifyMetricRuleTemplateRequest()
{}

long ModifyMetricRuleTemplateRequest::getRestVersion()const
{
	return restVersion_;
}

void ModifyMetricRuleTemplateRequest::setRestVersion(long restVersion)
{
	restVersion_ = restVersion;
	setParameter("RestVersion", std::to_string(restVersion));
}

std::string ModifyMetricRuleTemplateRequest::getDescription()const
{
	return description_;
}

void ModifyMetricRuleTemplateRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long ModifyMetricRuleTemplateRequest::getTemplateId()const
{
	return templateId_;
}

void ModifyMetricRuleTemplateRequest::setTemplateId(long templateId)
{
	templateId_ = templateId;
	setParameter("TemplateId", std::to_string(templateId));
}

std::string ModifyMetricRuleTemplateRequest::getName()const
{
	return name_;
}

void ModifyMetricRuleTemplateRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::vector<ModifyMetricRuleTemplateRequest::AlertTemplates> ModifyMetricRuleTemplateRequest::getAlertTemplates()const
{
	return alertTemplates_;
}

void ModifyMetricRuleTemplateRequest::setAlertTemplates(const std::vector<AlertTemplates>& alertTemplates)
{
	alertTemplates_ = alertTemplates;
	for(int dep1 = 0; dep1!= alertTemplates.size(); dep1++) {
		auto alertTemplatesObj = alertTemplates.at(dep1);
		std::string alertTemplatesObjStr = "AlertTemplates." + std::to_string(dep1 + 1);
		setParameter(alertTemplatesObjStr + ".Period", std::to_string(alertTemplatesObj.period));
		setParameter(alertTemplatesObjStr + ".EscalationsWarnThreshold", alertTemplatesObj.escalationsWarnThreshold);
		setParameter(alertTemplatesObjStr + ".Webhook", alertTemplatesObj.webhook);
		setParameter(alertTemplatesObjStr + ".EscalationsWarnComparisonOperator", alertTemplatesObj.escalationsWarnComparisonOperator);
		setParameter(alertTemplatesObjStr + ".EscalationsCriticalStatistics", alertTemplatesObj.escalationsCriticalStatistics);
		setParameter(alertTemplatesObjStr + ".EscalationsInfoTimes", std::to_string(alertTemplatesObj.escalationsInfoTimes));
		setParameter(alertTemplatesObjStr + ".RuleName", alertTemplatesObj.ruleName);
		setParameter(alertTemplatesObjStr + ".EscalationsInfoStatistics", alertTemplatesObj.escalationsInfoStatistics);
		setParameter(alertTemplatesObjStr + ".EscalationsCriticalTimes", std::to_string(alertTemplatesObj.escalationsCriticalTimes));
		setParameter(alertTemplatesObjStr + ".EscalationsInfoComparisonOperator", alertTemplatesObj.escalationsInfoComparisonOperator);
		setParameter(alertTemplatesObjStr + ".EscalationsWarnStatistics", alertTemplatesObj.escalationsWarnStatistics);
		setParameter(alertTemplatesObjStr + ".EscalationsInfoThreshold", alertTemplatesObj.escalationsInfoThreshold);
		setParameter(alertTemplatesObjStr + "._Namespace", alertTemplatesObj._namespace);
		setParameter(alertTemplatesObjStr + ".Selector", alertTemplatesObj.selector);
		setParameter(alertTemplatesObjStr + ".MetricName", alertTemplatesObj.metricName);
		setParameter(alertTemplatesObjStr + ".Category", alertTemplatesObj.category);
		setParameter(alertTemplatesObjStr + ".EscalationsCriticalComparisonOperator", alertTemplatesObj.escalationsCriticalComparisonOperator);
		setParameter(alertTemplatesObjStr + ".EscalationsWarnTimes", std::to_string(alertTemplatesObj.escalationsWarnTimes));
		setParameter(alertTemplatesObjStr + ".EscalationsCriticalThreshold", alertTemplatesObj.escalationsCriticalThreshold);
	}
}

