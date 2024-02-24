#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuSceneGM.MainMenuSceneGM_C
// (Actor)

class UClass* AMainMenuSceneGM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuSceneGM_C");

	return Clss;
}


// MainMenuSceneGM_C MainMenuSceneGM.Default__MainMenuSceneGM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenuSceneGM_C* AMainMenuSceneGM_C::GetDefaultObj()
{
	static class AMainMenuSceneGM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenuSceneGM_C*>(AMainMenuSceneGM_C::StaticClass()->DefaultObject);

	return Default;
}

}


