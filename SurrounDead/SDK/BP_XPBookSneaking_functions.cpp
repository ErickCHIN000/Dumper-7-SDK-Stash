#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookSneaking.BP_XPBookSneaking_C
// (Actor)

class UClass* ABP_XPBookSneaking_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookSneaking_C");

	return Clss;
}


// BP_XPBookSneaking_C BP_XPBookSneaking.Default__BP_XPBookSneaking_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookSneaking_C* ABP_XPBookSneaking_C::GetDefaultObj()
{
	static class ABP_XPBookSneaking_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookSneaking_C*>(ABP_XPBookSneaking_C::StaticClass()->DefaultObject);

	return Default;
}

}


