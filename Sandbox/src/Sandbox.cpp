#include <Pivix.h>

class Sandbox : public Pivix::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox() {

	}

};

Pivix::Application* Pivix::CreateApplication() {
	return new Sandbox();
}