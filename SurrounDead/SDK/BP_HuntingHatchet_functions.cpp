#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HuntingHatchet.BP_HuntingHatchet_C
// (Actor)

class UClass* ABP_HuntingHatchet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HuntingHatchet_C");

	return Clss;
}


// BP_HuntingHatchet_C BP_HuntingHatchet.Default__BP_HuntingHatchet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HuntingHatchet_C* ABP_HuntingHatchet_C::GetDefaultObj()
{
	static class ABP_HuntingHatchet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HuntingHatchet_C*>(ABP_HuntingHatchet_C::StaticClass()->DefaultObject);

	return Default;
}

}


