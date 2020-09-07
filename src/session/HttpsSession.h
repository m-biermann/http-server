//
// Created by max on 9/7/20.
//

#ifndef MABIPHMO_HTTPSSESSION_H
#define MABIPHMO_HTTPSSESSION_H

#include <memory>
#include <mabiphmo/httpServer/handler/IHandler.h>

namespace mabiphmo::httpServer::session {
	class HttpsSession {
	public:
		HttpsSession(std::shared_ptr<handler::IHandler> handler, boost::beast::ssl_stream<boost::beast::tcp_stream> &&stream);
	};
}

#endif //MABIPHMO_HTTPSSESSION_H
