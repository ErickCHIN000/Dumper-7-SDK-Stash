#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SandboxGameState.BP_SandboxGameState_C
// (Actor)

class UClass* ABP_SandboxGameState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SandboxGameState_C");

	return Clss;
}


// BP_SandboxGameState_C BP_SandboxGameState.Default__BP_SandboxGameState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SandboxGameState_C* ABP_SandboxGameState_C::GetDefaultObj()
{
	static class ABP_SandboxGameState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SandboxGameState_C*>(ABP_SandboxGameState_C::StaticClass()->DefaultObject);

	return Default;
}

}


