#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCrusherAcog.BP_LocalCrusherAcog_C
// (Actor)

class UClass* ABP_LocalCrusherAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCrusherAcog_C");

	return Clss;
}


// BP_LocalCrusherAcog_C BP_LocalCrusherAcog.Default__BP_LocalCrusherAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCrusherAcog_C* ABP_LocalCrusherAcog_C::GetDefaultObj()
{
	static class ABP_LocalCrusherAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCrusherAcog_C*>(ABP_LocalCrusherAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


