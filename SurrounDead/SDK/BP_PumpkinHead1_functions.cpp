#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PumpkinHead1.BP_PumpkinHead1_C
// (Actor)

class UClass* ABP_PumpkinHead1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PumpkinHead1_C");

	return Clss;
}


// BP_PumpkinHead1_C BP_PumpkinHead1.Default__BP_PumpkinHead1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PumpkinHead1_C* ABP_PumpkinHead1_C::GetDefaultObj()
{
	static class ABP_PumpkinHead1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PumpkinHead1_C*>(ABP_PumpkinHead1_C::StaticClass()->DefaultObject);

	return Default;
}

}


