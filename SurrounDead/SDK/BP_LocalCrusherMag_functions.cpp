#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCrusherMag.BP_LocalCrusherMag_C
// (Actor)

class UClass* ABP_LocalCrusherMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCrusherMag_C");

	return Clss;
}


// BP_LocalCrusherMag_C BP_LocalCrusherMag.Default__BP_LocalCrusherMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCrusherMag_C* ABP_LocalCrusherMag_C::GetDefaultObj()
{
	static class ABP_LocalCrusherMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCrusherMag_C*>(ABP_LocalCrusherMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


