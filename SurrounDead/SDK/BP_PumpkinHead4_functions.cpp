#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PumpkinHead4.BP_PumpkinHead4_C
// (Actor)

class UClass* ABP_PumpkinHead4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PumpkinHead4_C");

	return Clss;
}


// BP_PumpkinHead4_C BP_PumpkinHead4.Default__BP_PumpkinHead4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PumpkinHead4_C* ABP_PumpkinHead4_C::GetDefaultObj()
{
	static class ABP_PumpkinHead4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PumpkinHead4_C*>(ABP_PumpkinHead4_C::StaticClass()->DefaultObject);

	return Default;
}

}


