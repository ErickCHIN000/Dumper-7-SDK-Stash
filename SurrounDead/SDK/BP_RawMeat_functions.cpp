#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RawMeat.BP_RawMeat_C
// (Actor)

class UClass* ABP_RawMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RawMeat_C");

	return Clss;
}


// BP_RawMeat_C BP_RawMeat.Default__BP_RawMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RawMeat_C* ABP_RawMeat_C::GetDefaultObj()
{
	static class ABP_RawMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RawMeat_C*>(ABP_RawMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


