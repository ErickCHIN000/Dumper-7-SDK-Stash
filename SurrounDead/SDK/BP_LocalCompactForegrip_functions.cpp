#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCompactForegrip.BP_LocalCompactForegrip_C
// (Actor)

class UClass* ABP_LocalCompactForegrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCompactForegrip_C");

	return Clss;
}


// BP_LocalCompactForegrip_C BP_LocalCompactForegrip.Default__BP_LocalCompactForegrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCompactForegrip_C* ABP_LocalCompactForegrip_C::GetDefaultObj()
{
	static class ABP_LocalCompactForegrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCompactForegrip_C*>(ABP_LocalCompactForegrip_C::StaticClass()->DefaultObject);

	return Default;
}

}


