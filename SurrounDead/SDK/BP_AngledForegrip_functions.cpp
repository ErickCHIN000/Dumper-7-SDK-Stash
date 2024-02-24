#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AngledForegrip.BP_AngledForegrip_C
// (Actor)

class UClass* ABP_AngledForegrip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AngledForegrip_C");

	return Clss;
}


// BP_AngledForegrip_C BP_AngledForegrip.Default__BP_AngledForegrip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AngledForegrip_C* ABP_AngledForegrip_C::GetDefaultObj()
{
	static class ABP_AngledForegrip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AngledForegrip_C*>(ABP_AngledForegrip_C::StaticClass()->DefaultObject);

	return Default;
}

}


