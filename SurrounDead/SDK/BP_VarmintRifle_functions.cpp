#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VarmintRifle.BP_VarmintRifle_C
// (Actor)

class UClass* ABP_VarmintRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VarmintRifle_C");

	return Clss;
}


// BP_VarmintRifle_C BP_VarmintRifle.Default__BP_VarmintRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VarmintRifle_C* ABP_VarmintRifle_C::GetDefaultObj()
{
	static class ABP_VarmintRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VarmintRifle_C*>(ABP_VarmintRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


