#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TapeMeasure.BP_TapeMeasure_C
// (Actor)

class UClass* ABP_TapeMeasure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TapeMeasure_C");

	return Clss;
}


// BP_TapeMeasure_C BP_TapeMeasure.Default__BP_TapeMeasure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TapeMeasure_C* ABP_TapeMeasure_C::GetDefaultObj()
{
	static class ABP_TapeMeasure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TapeMeasure_C*>(ABP_TapeMeasure_C::StaticClass()->DefaultObject);

	return Default;
}

}


