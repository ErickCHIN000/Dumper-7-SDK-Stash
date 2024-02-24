#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindMan_AiController.BlindMan_AiController_C
// (Actor)

class UClass* ABlindMan_AiController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_AiController_C");

	return Clss;
}


// BlindMan_AiController_C BlindMan_AiController.Default__BlindMan_AiController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindMan_AiController_C* ABlindMan_AiController_C::GetDefaultObj()
{
	static class ABlindMan_AiController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindMan_AiController_C*>(ABlindMan_AiController_C::StaticClass()->DefaultObject);

	return Default;
}

}


