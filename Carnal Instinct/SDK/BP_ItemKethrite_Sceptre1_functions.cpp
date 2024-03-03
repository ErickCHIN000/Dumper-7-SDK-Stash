#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemKethrite_Sceptre1.BP_ItemKethrite_Sceptre1_C
// (Actor)

class UClass* ABP_ItemKethrite_Sceptre1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemKethrite_Sceptre1_C");

	return Clss;
}


// BP_ItemKethrite_Sceptre1_C BP_ItemKethrite_Sceptre1.Default__BP_ItemKethrite_Sceptre1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ItemKethrite_Sceptre1_C* ABP_ItemKethrite_Sceptre1_C::GetDefaultObj()
{
	static class ABP_ItemKethrite_Sceptre1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ItemKethrite_Sceptre1_C*>(ABP_ItemKethrite_Sceptre1_C::StaticClass()->DefaultObject);

	return Default;
}

}


