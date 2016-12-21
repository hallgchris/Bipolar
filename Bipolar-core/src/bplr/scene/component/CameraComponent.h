#pragma once

#include "Component.h"
#include "TransformComponent.h"
#include "../../math/mat4.h"

namespace bplr
{
	namespace scene
	{
		class Camera;

		class CameraComponent : public Component
		{
		public:
			CameraComponent(scene::Camera* camera);

			void update(float delta) const;

			std::string getType() override;
			static std::string getStaticType();
			void setEntity(Entity* entity) override;

		private:
			scene::Camera* m_camera;
			TransformComponent* m_transform;
			float m_moveSpeed = 3.0f, m_sensitivity = 1.0f / 5.0f;
		};
	}
}
