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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEREGIONSRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEREGIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeRegionsResult : public ServiceResult
			{
			public:
				struct DdsRegion
				{
					struct Zone
					{
						bool vpcEnabled;
						std::string zoneId;
					};
					std::string regionId;
					std::string zoneIds;
					std::vector<DdsRegion::Zone> zones;
				};


				DescribeRegionsResult();
				explicit DescribeRegionsResult(const std::string &payload);
				~DescribeRegionsResult();
				std::vector<DdsRegion> getRegions()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DdsRegion> regions_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEREGIONSRESULT_H_