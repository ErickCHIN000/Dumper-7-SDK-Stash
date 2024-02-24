#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPTA_TargetingActorLogic.BPTA_TargetingActorLogic_C
// (Actor)

class UClass* ABPTA_TargetingActorLogic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPTA_TargetingActorLogic_C");

	return Clss;
}


// BPTA_TargetingActorLogic_C BPTA_TargetingActorLogic.Default__BPTA_TargetingActorLogic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPTA_TargetingActorLogic_C* ABPTA_TargetingActorLogic_C::GetDefaultObj()
{
	static class ABPTA_TargetingActorLogic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPTA_TargetingActorLogic_C*>(ABPTA_TargetingActorLogic_C::StaticClass()->DefaultObject);

	return Default;
}

}


