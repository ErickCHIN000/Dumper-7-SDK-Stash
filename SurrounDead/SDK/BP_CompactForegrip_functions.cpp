#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CompactForegrip.BP_CompactForegrip_C
// (Actor)

class UClass* ABP_CompactForegrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CompactForegrip_C");

	return Clss;
}


// BP_CompactForegrip_C BP_CompactForegrip.Default__BP_CompactForegrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CompactForegrip_C* ABP_CompactForegrip_C::GetDefaultObj()
{
	static class ABP_CompactForegrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CompactForegrip_C*>(ABP_CompactForegrip_C::StaticClass()->DefaultObject);

	return Default;
}

}


