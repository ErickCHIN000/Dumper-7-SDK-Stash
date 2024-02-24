#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Painkillers.BP_Painkillers_C
// (Actor)

class UClass* ABP_Painkillers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Painkillers_C");

	return Clss;
}


// BP_Painkillers_C BP_Painkillers.Default__BP_Painkillers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Painkillers_C* ABP_Painkillers_C::GetDefaultObj()
{
	static class ABP_Painkillers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Painkillers_C*>(ABP_Painkillers_C::StaticClass()->DefaultObject);

	return Default;
}

}


