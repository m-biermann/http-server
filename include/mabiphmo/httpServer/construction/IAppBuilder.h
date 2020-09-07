//
// Created by max on 8/17/20.
//

#ifndef HTTPSERVER_IAPPBUILDER_H
#define HTTPSERVER_IAPPBUILDER_H

#include <utility>
#include <mabiphmo/portServer/construction/IAppBuilder.h>
#include <boost/filesystem/path.hpp>
#include <boost/asio/ip/address.hpp>

namespace mabiphmo::httpServer::construction {
	class IAppBuilder {
	public:
		/// Enables clear text, sets a port for it
		/// \param portNr Port number
		/// \return this for chaining
		virtual IAppBuilder &WithClearText(
				unsigned int portNr,
				boost::asio::ip::address &&address) = 0;

		/// Enables SSL
		/// \param fullChainPath Path to the file containing the full chain
		/// \param privateKeyPath Path to the file containing the private key
		/// \param portNr Port number
		/// \return this for chaining
		virtual IAppBuilder &WithSsl(
				boost::filesystem::path &&fullChainPath,
				boost::filesystem::path &&privateKeyPath,
				unsigned int portNr,
				boost::asio::ip::address &&address) = 0;

		virtual portServer::construction::IAppBuilder &BaseBuilder() = 0;
	};
}

#endif //HTTPSERVER_IAPPBUILDER_H
