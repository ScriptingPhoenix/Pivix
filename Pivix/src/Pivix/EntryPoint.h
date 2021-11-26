#pragma once

#ifdef PV_PLATFORM_WINDOWS

extern Pivix::Application* Pivix::CreateApplication();

int main(int argc, char** argv) {
	auto app = Pivix::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#else
	#error Pivix only supports Windows
#endif