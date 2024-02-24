#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CrusherAcog.BP_CrusherAcog_C
// (Actor)

class UClass* ABP_CrusherAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CrusherAcog_C");

	return Clss;
}


// BP_CrusherAcog_C BP_CrusherAcog.Default__BP_CrusherAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CrusherAcog_C* ABP_CrusherAcog_C::GetDefaultObj()
{
	static class ABP_CrusherAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CrusherAcog_C*>(ABP_CrusherAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


