#include "Layer.h"

namespace bplr
{
	namespace graphics
	{
		Layer::Layer()
		{
		}

		Layer::~Layer()
		{
		}

		void Layer::init(Window* window)
		{
			m_window = window;
		}

		void Layer::getInput()
		{
		}

		void Layer::update(float delta)
		{
		}

		void Layer::render()
		{
		}

		bool Layer::isVisible() const
		{
			return m_visible;
		}

		void Layer::setVisible(bool visible)
		{
			m_visible = visible;
		}

		Window* Layer::getWindow() const
		{
			return m_window;
		}
	}
}