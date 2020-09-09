//
// Created by max on 8/17/20.
//

#ifndef HTTPSERVER_IHANDLER_H
#define HTTPSERVER_IHANDLER_H

#include <boost/beast/http/parser.hpp>
#include <boost/beast/http/empty_body.hpp>
#include <utility>
#include "IRequestContext.h"
#include "HandlerResult.h"

namespace mabiphmo::httpServer::handler{
	class IHandler{
		std::shared_ptr<IHandler> next_;
	protected:
		HandlerResult Next(boost::beast::http::request_parser<boost::beast::http::empty_body> &request,
		                   IRequestContext &layerContext)
        {
			return next_->Handle(request, layerContext);
        }
	public:
		virtual HandlerResult Handle(
				boost::beast::http::request_parser<boost::beast::http::empty_body> &request,
				IRequestContext &layerContext) = 0;
		explicit IHandler(std::shared_ptr<IHandler> next) : next_(std::move(next)) {}
	};
}

#endif //HTTPSERVER_IHANDLER_H
