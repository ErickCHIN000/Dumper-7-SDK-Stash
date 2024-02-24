#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalVerticalForegrip.BP_LocalVerticalForegrip_C
// (Actor)

class UClass* ABP_LocalVerticalForegrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalVerticalForegrip_C");

	return Clss;
}


// BP_LocalVerticalForegrip_C BP_LocalVerticalForegrip.Default__BP_LocalVerticalForegrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalVerticalForegrip_C* ABP_LocalVerticalForegrip_C::GetDefaultObj()
{
	static class ABP_LocalVerticalForegrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalVerticalForegrip_C*>(ABP_LocalVerticalForegrip_C::StaticClass()->DefaultObject);

	return Default;
}

}


