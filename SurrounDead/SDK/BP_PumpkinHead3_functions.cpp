#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PumpkinHead3.BP_PumpkinHead3_C
// (Actor)

class UClass* ABP_PumpkinHead3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PumpkinHead3_C");

	return Clss;
}


// BP_PumpkinHead3_C BP_PumpkinHead3.Default__BP_PumpkinHead3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PumpkinHead3_C* ABP_PumpkinHead3_C::GetDefaultObj()
{
	static class ABP_PumpkinHead3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PumpkinHead3_C*>(ABP_PumpkinHead3_C::StaticClass()->DefaultObject);

	return Default;
}

}


