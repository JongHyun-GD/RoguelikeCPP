#pragma once

#include "SingleTon.hpp"
#include "Scene.hpp"

namespace K4{
	class Director : public Singleton<Director>{
	private:
		Scene* _scene;
		Scene* _nextScene;
		bool _needRun;

		Director();
		virtual ~Director();

		void MainLoop();
	public:
		static bool ChangeScene(Scene *scene);
		static Scene* GetScene();

		static bool Run(Scene *scene);
		static void Finish();
	};
}