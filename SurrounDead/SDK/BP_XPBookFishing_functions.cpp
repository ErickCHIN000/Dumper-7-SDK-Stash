#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookFishing.BP_XPBookFishing_C
// (Actor)

class UClass* ABP_XPBookFishing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookFishing_C");

	return Clss;
}


// BP_XPBookFishing_C BP_XPBookFishing.Default__BP_XPBookFishing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookFishing_C* ABP_XPBookFishing_C::GetDefaultObj()
{
	static class ABP_XPBookFishing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookFishing_C*>(ABP_XPBookFishing_C::StaticClass()->DefaultObject);

	return Default;
}

}


