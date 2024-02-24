#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalAngledForegrip.BP_LocalAngledForegrip_C
// (Actor)

class UClass* ABP_LocalAngledForegrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalAngledForegrip_C");

	return Clss;
}


// BP_LocalAngledForegrip_C BP_LocalAngledForegrip.Default__BP_LocalAngledForegrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalAngledForegrip_C* ABP_LocalAngledForegrip_C::GetDefaultObj()
{
	static class ABP_LocalAngledForegrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalAngledForegrip_C*>(ABP_LocalAngledForegrip_C::StaticClass()->DefaultObject);

	return Default;
}

}


