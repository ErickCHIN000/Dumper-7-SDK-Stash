#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCrusherRedDot.BP_LocalCrusherRedDot_C
// (Actor)

class UClass* ABP_LocalCrusherRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCrusherRedDot_C");

	return Clss;
}


// BP_LocalCrusherRedDot_C BP_LocalCrusherRedDot.Default__BP_LocalCrusherRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCrusherRedDot_C* ABP_LocalCrusherRedDot_C::GetDefaultObj()
{
	static class ABP_LocalCrusherRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCrusherRedDot_C*>(ABP_LocalCrusherRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


