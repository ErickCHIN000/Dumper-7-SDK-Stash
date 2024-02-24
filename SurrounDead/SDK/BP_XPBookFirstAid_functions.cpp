#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookFirstAid.BP_XPBookFirstAid_C
// (Actor)

class UClass* ABP_XPBookFirstAid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookFirstAid_C");

	return Clss;
}


// BP_XPBookFirstAid_C BP_XPBookFirstAid.Default__BP_XPBookFirstAid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookFirstAid_C* ABP_XPBookFirstAid_C::GetDefaultObj()
{
	static class ABP_XPBookFirstAid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookFirstAid_C*>(ABP_XPBookFirstAid_C::StaticClass()->DefaultObject);

	return Default;
}

}


