#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TacticalShovel.BP_TacticalShovel_C
// (Actor)

class UClass* ABP_TacticalShovel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TacticalShovel_C");

	return Clss;
}


// BP_TacticalShovel_C BP_TacticalShovel.Default__BP_TacticalShovel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TacticalShovel_C* ABP_TacticalShovel_C::GetDefaultObj()
{
	static class ABP_TacticalShovel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TacticalShovel_C*>(ABP_TacticalShovel_C::StaticClass()->DefaultObject);

	return Default;
}

}


