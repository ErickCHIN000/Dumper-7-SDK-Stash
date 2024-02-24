#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butcher_AiController.Butcher_AiController_C
// (Actor)

class UClass* AButcher_AiController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butcher_AiController_C");

	return Clss;
}


// Butcher_AiController_C Butcher_AiController.Default__Butcher_AiController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcher_AiController_C* AButcher_AiController_C::GetDefaultObj()
{
	static class AButcher_AiController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcher_AiController_C*>(AButcher_AiController_C::StaticClass()->DefaultObject);

	return Default;
}

}


