#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FryingPan.BP_FryingPan_C
// (Actor)

class UClass* ABP_FryingPan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FryingPan_C");

	return Clss;
}


// BP_FryingPan_C BP_FryingPan.Default__BP_FryingPan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FryingPan_C* ABP_FryingPan_C::GetDefaultObj()
{
	static class ABP_FryingPan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FryingPan_C*>(ABP_FryingPan_C::StaticClass()->DefaultObject);

	return Default;
}

}


