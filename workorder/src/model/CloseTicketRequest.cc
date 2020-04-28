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

#include <alibabacloud/workorder/model/CloseTicketRequest.h>

using AlibabaCloud::Workorder::Model::CloseTicketRequest;

CloseTicketRequest::CloseTicketRequest() :
	RpcServiceRequest("workorder", "2020-03-26", "CloseTicket")
{
	setMethod(HttpRequest::Method::Post);
}

CloseTicketRequest::~CloseTicketRequest()
{}

std::string CloseTicketRequest::getLanguage()const
{
	return language_;
}

void CloseTicketRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setParameter("Language", language);
}

std::string CloseTicketRequest::getTicketId()const
{
	return ticketId_;
}

void CloseTicketRequest::setTicketId(const std::string& ticketId)
{
	ticketId_ = ticketId;
	setParameter("TicketId", ticketId);
}
