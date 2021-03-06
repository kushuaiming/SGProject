#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <sigslot/signal.hpp>

#include "SGIRuntimeModule.h"
#include "Shader.h"

namespace SG
{
	class SGGraphicsManager : implements SGIRuntimeModule
	{
	public:
		virtual int Initialize();
		virtual void Finalize();

		virtual void Tick();

	public:
		GLFWwindow* GetGLFWWindow() const { return m_window; }
	protected:
		sigslot::signal<bool> m_sig_end;

		GLFWwindow* m_window;
		//int32_t m_vertexShader;
		//int32_t m_fragmentShader;
		//int32_t m_shaderProgram;
		uint32_t m_VBO, m_VAO, m_EBO;
		uint32_t m_texture;
		Shader* m_Shader;

		int32_t m_witdh = 1600;
		int32_t m_height = 900;
	};

	extern SGIRuntimeModule* g_pGraphicsManager;
}