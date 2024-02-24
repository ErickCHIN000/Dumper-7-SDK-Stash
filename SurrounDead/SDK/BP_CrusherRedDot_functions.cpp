#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CrusherRedDot.BP_CrusherRedDot_C
// (Actor)

class UClass* ABP_CrusherRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CrusherRedDot_C");

	return Clss;
}


// BP_CrusherRedDot_C BP_CrusherRedDot.Default__BP_CrusherRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CrusherRedDot_C* ABP_CrusherRedDot_C::GetDefaultObj()
{
	static class ABP_CrusherRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CrusherRedDot_C*>(ABP_CrusherRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


