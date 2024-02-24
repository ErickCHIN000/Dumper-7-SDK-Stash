#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SophiaGameState.BP_SophiaGameState_C
// (Actor)

class UClass* ABP_SophiaGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SophiaGameState_C");

	return Clss;
}


// BP_SophiaGameState_C BP_SophiaGameState.Default__BP_SophiaGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SophiaGameState_C* ABP_SophiaGameState_C::GetDefaultObj()
{
	static class ABP_SophiaGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SophiaGameState_C*>(ABP_SophiaGameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


