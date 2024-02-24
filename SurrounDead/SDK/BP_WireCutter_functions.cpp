#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WireCutter.BP_WireCutter_C
// (Actor)

class UClass* ABP_WireCutter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WireCutter_C");

	return Clss;
}


// BP_WireCutter_C BP_WireCutter.Default__BP_WireCutter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WireCutter_C* ABP_WireCutter_C::GetDefaultObj()
{
	static class ABP_WireCutter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WireCutter_C*>(ABP_WireCutter_C::StaticClass()->DefaultObject);

	return Default;
}

}


