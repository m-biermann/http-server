//
// Created by max on 8/17/20.
//

#include <mabiphmo/portServer/main.h>
#include <mabiphmo/httpServer/main.h>
#include "construction/AppBuilder.h"

void Configure(mabiphmo::portServer::construction::IAppBuilder &baseBuilder)
{
	mabiphmo::httpServer::construction::AppBuilder builder(baseBuilder);
	Configure(builder);
}