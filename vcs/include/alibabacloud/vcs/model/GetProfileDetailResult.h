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

#ifndef ALIBABACLOUD_VCS_MODEL_GETPROFILEDETAILRESULT_H_
#define ALIBABACLOUD_VCS_MODEL_GETPROFILEDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT GetProfileDetailResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string sceneType;
					int profileId;
					std::string idNumber;
					std::string isvSubId;
					std::string gender;
					int catalogId;
					std::string faceUrl;
					std::string name;
					std::string personId;
					std::string phoneNo;
					std::string plateNo;
					std::string bizId;
					std::string liveAddress;
				};


				GetProfileDetailResult();
				explicit GetProfileDetailResult(const std::string &payload);
				~GetProfileDetailResult();
				std::string getMessage()const;
				Data getData()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_GETPROFILEDETAILRESULT_H_