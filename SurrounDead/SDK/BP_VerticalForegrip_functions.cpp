#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VerticalForegrip.BP_VerticalForegrip_C
// (Actor)

class UClass* ABP_VerticalForegrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VerticalForegrip_C");

	return Clss;
}


// BP_VerticalForegrip_C BP_VerticalForegrip.Default__BP_VerticalForegrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VerticalForegrip_C* ABP_VerticalForegrip_C::GetDefaultObj()
{
	static class ABP_VerticalForegrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VerticalForegrip_C*>(ABP_VerticalForegrip_C::StaticClass()->DefaultObject);

	return Default;
}

}


