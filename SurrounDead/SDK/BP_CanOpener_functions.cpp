#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CanOpener.BP_CanOpener_C
// (Actor)

class UClass* ABP_CanOpener_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CanOpener_C");

	return Clss;
}


// BP_CanOpener_C BP_CanOpener.Default__BP_CanOpener_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CanOpener_C* ABP_CanOpener_C::GetDefaultObj()
{
	static class ABP_CanOpener_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CanOpener_C*>(ABP_CanOpener_C::StaticClass()->DefaultObject);

	return Default;
}

}


