//
// Created by max on 9/7/20.
//

#ifndef MABIPHMO_HTTPSSESSIONLAUNCHER_H
#define MABIPHMO_HTTPSSESSIONLAUNCHER_H

#include <mabiphmo/portServer/handler/ITcpHandler.h>

namespace mabiphmo::httpServer::session::launcher {
	class HttpsSessionLauncher : public portServer::handler::ITcpHandler {
		void Handle(boost::asio::ip::tcp::socket &&arg) override;
	};
}

#endif //MABIPHMO_HTTPSSESSIONLAUNCHER_H
