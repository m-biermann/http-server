//
// Created by max on 9/7/20.
//

#ifndef MABIPHMO_HANDLERSTACK_H
#define MABIPHMO_HANDLERSTACK_H

#include <mabiphmo/httpServer/handler/IHandler.h>

namespace mabiphmo::httpServer::handler {
	class HandlerStack : public IHandler {
	public:
		HandlerResult Handle(
				boost::beast::http::request_parser<boost::beast::http::empty_body> &request,
				IRequestContext &layerContext) override;
	};
}

#endif //MABIPHMO_HANDLERSTACK_H
