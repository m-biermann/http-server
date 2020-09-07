//
// Created by max on 9/7/20.
//

#ifndef MABIPHMO_HTTPSESSION_H
#define MABIPHMO_HTTPSESSION_H

#include <mabiphmo/httpServer/handler/IHandler.h>
#include <memory>

namespace mabiphmo::httpServer::session {
	class HttpSession {
		HttpSession(std::shared_ptr<handler::IHandler> handler, boost::beast::tcp_stream &&stream);
	};
}

#endif //MABIPHMO_HTTPSESSION_H
