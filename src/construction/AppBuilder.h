//
// Created by max on 8/17/20.
//

#ifndef HTTPSERVER_APPBUILDER_H
#define HTTPSERVER_APPBUILDER_H

#include <mabiphmo/httpServer/construction/IAppBuilder.h>
#include <mabiphmo/portServer/construction/IAppBuilder.h>

namespace mabiphmo::httpServer::construction{
	class AppBuilder : public IAppBuilder {
		portServer::construction::IAppBuilder &baseBuilder_;
	public:
		portServer::construction::IAppBuilder &BaseBuilder() override;
		explicit AppBuilder(portServer::construction::IAppBuilder &baseBuilder);
		IAppBuilder &WithClearText(unsigned int portNr, boost::asio::ip::address &&address) override;
		IAppBuilder &WithSsl(boost::filesystem::path &&fullChainPath, boost::filesystem::path &&privateKeyPath, unsigned int portNr, boost::asio::ip::address &&address) override;
	};
}

#endif //HTTPSERVER_APPBUILDER_H
