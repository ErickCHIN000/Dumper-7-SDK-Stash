#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AICivilian.BP_AICivilian_C
// (Actor, Pawn)

class UClass* ABP_AICivilian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AICivilian_C");

	return Clss;
}


// BP_AICivilian_C BP_AICivilian.Default__BP_AICivilian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AICivilian_C* ABP_AICivilian_C::GetDefaultObj()
{
	static class ABP_AICivilian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AICivilian_C*>(ABP_AICivilian_C::StaticClass()->DefaultObject);

	return Default;
}

}


