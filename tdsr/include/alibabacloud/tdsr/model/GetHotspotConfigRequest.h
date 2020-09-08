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

#ifndef ALIBABACLOUD_TDSR_MODEL_GETHOTSPOTCONFIGREQUEST_H_
#define ALIBABACLOUD_TDSR_MODEL_GETHOTSPOTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/tdsr/TdsrExport.h>

namespace AlibabaCloud
{
	namespace Tdsr
	{
		namespace Model
		{
			class ALIBABACLOUD_TDSR_EXPORT GetHotspotConfigRequest : public RpcServiceRequest
			{

			public:
				GetHotspotConfigRequest();
				~GetHotspotConfigRequest();

				std::string getPreviewToken()const;
				void setPreviewToken(const std::string& previewToken);

            private:
				std::string previewToken_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TDSR_MODEL_GETHOTSPOTCONFIGREQUEST_H_