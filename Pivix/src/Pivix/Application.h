#pragma once

#include "Core.h"

namespace Pivix {

	class PIVIX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

