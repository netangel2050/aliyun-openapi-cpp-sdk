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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeScalingRulesResult : public ServiceResult
			{
			public:
				struct ScalingRule
				{
					struct Alarm
					{
						struct Dimension
						{
							std::string dimensionValue;
							std::string dimensionKey;
						};
						std::string metricName;
						std::string comparisonOperator;
						std::vector<Alarm::Dimension> dimensions;
						int evaluationCount;
						std::string alarmTaskName;
						std::string alarmTaskId;
						std::string statistics;
						float threshold;
					};
					struct StepAdjustment
					{
						float metricIntervalUpperBound;
						float metricIntervalLowerBound;
						int scalingAdjustment;
					};
					float targetValue;
					std::vector<ScalingRule::StepAdjustment> stepAdjustments;
					std::string scalingGroupId;
					int cooldown;
					std::string predictiveValueBehavior;
					std::vector<ScalingRule::Alarm> alarms;
					std::string scalingRuleId;
					int minAdjustmentMagnitude;
					bool disableScaleIn;
					int maxSize;
					std::string adjustmentType;
					std::string scalingRuleAri;
					int minSize;
					std::string metricName;
					std::string scalingRuleName;
					int adjustmentValue;
					int scaleOutEvaluationCount;
					int initialMaxSize;
					std::string scalingRuleType;
					int estimatedInstanceWarmup;
					int scaleInEvaluationCount;
					std::string predictiveScalingMode;
					int predictiveValueBuffer;
					int predictiveTaskBufferTime;
				};


				DescribeScalingRulesResult();
				explicit DescribeScalingRulesResult(const std::string &payload);
				~DescribeScalingRulesResult();
				std::vector<ScalingRule> getScalingRules()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ScalingRule> scalingRules_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBESCALINGRULESRESULT_H_