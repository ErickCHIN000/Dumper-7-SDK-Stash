#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TinOfTuna.BP_TinOfTuna_C
// (Actor)

class UClass* ABP_TinOfTuna_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TinOfTuna_C");

	return Clss;
}


// BP_TinOfTuna_C BP_TinOfTuna.Default__BP_TinOfTuna_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TinOfTuna_C* ABP_TinOfTuna_C::GetDefaultObj()
{
	static class ABP_TinOfTuna_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TinOfTuna_C*>(ABP_TinOfTuna_C::StaticClass()->DefaultObject);

	return Default;
}

}


