//
// Created by max on 8/17/20.
//

#ifndef HTTPSERVER_ICONTEXTHANDLER_H
#define HTTPSERVER_ICONTEXTHANDLER_H

#include <utility>
#include <string>
#include <memory>
#include "IHandler.h"
#include "IHandlerContext.h"

namespace mabiphmo::httpServer::handler{
	class IContextHandler : public IHandler{
	public:
		std::shared_ptr<IHandlerContext> LoadContext(IRequestContext &requestContext){
			return requestContext.LoadLayerContext(Identity());
		}
	protected:
		virtual const std::string &Identity() const = 0;
		void StoreContext(IRequestContext &requestContext, std::shared_ptr<IHandlerContext> context){
			requestContext.StoreLayerContext(std::move(context), Identity());
		}
	};
}

#endif //HTTPSERVER_ICONTEXTHANDLER_H
