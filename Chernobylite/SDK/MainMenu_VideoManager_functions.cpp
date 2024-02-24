#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenu_VideoManager.MainMenu_VideoManager_C
// (Actor)

class UClass* AMainMenu_VideoManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenu_VideoManager_C");

	return Clss;
}


// MainMenu_VideoManager_C MainMenu_VideoManager.Default__MainMenu_VideoManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMainMenu_VideoManager_C* AMainMenu_VideoManager_C::GetDefaultObj()
{
	static class AMainMenu_VideoManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMainMenu_VideoManager_C*>(AMainMenu_VideoManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


