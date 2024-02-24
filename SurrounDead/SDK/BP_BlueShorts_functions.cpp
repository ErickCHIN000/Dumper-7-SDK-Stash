#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlueShorts.BP_BlueShorts_C
// (Actor)

class UClass* ABP_BlueShorts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlueShorts_C");

	return Clss;
}


// BP_BlueShorts_C BP_BlueShorts.Default__BP_BlueShorts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BlueShorts_C* ABP_BlueShorts_C::GetDefaultObj()
{
	static class ABP_BlueShorts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BlueShorts_C*>(ABP_BlueShorts_C::StaticClass()->DefaultObject);

	return Default;
}

}


