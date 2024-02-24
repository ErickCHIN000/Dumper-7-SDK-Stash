#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MainMenuLevelSequence.MainMenuLevelSequence_DirectorBP_C
// (None)

class UClass* UMainMenuLevelSequence_DirectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuLevelSequence_DirectorBP_C");

	return Clss;
}


// MainMenuLevelSequence_DirectorBP_C MainMenuLevelSequence.Default__MainMenuLevelSequence_DirectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuLevelSequence_DirectorBP_C* UMainMenuLevelSequence_DirectorBP_C::GetDefaultObj()
{
	static class UMainMenuLevelSequence_DirectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuLevelSequence_DirectorBP_C*>(UMainMenuLevelSequence_DirectorBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


