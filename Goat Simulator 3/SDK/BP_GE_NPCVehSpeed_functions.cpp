#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GE_NPCVehSpeed.BP_GE_NPCVehSpeed_C
// (None)

class UClass* UBP_GE_NPCVehSpeed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GE_NPCVehSpeed_C");

	return Clss;
}


// BP_GE_NPCVehSpeed_C BP_GE_NPCVehSpeed.Default__BP_GE_NPCVehSpeed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GE_NPCVehSpeed_C* UBP_GE_NPCVehSpeed_C::GetDefaultObj()
{
	static class UBP_GE_NPCVehSpeed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GE_NPCVehSpeed_C*>(UBP_GE_NPCVehSpeed_C::StaticClass()->DefaultObject);

	return Default;
}

}


