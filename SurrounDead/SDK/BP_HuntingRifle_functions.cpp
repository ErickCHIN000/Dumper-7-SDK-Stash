#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingRifle.BP_HuntingRifle_C
// (Actor)

class UClass* ABP_HuntingRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingRifle_C");

	return Clss;
}


// BP_HuntingRifle_C BP_HuntingRifle.Default__BP_HuntingRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingRifle_C* ABP_HuntingRifle_C::GetDefaultObj()
{
	static class ABP_HuntingRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingRifle_C*>(ABP_HuntingRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


