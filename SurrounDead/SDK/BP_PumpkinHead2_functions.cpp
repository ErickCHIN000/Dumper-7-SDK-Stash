#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PumpkinHead2.BP_PumpkinHead2_C
// (Actor)

class UClass* ABP_PumpkinHead2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PumpkinHead2_C");

	return Clss;
}


// BP_PumpkinHead2_C BP_PumpkinHead2.Default__BP_PumpkinHead2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PumpkinHead2_C* ABP_PumpkinHead2_C::GetDefaultObj()
{
	static class ABP_PumpkinHead2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PumpkinHead2_C*>(ABP_PumpkinHead2_C::StaticClass()->DefaultObject);

	return Default;
}

}


