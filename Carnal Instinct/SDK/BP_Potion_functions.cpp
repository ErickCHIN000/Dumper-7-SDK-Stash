#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Potion.BP_Potion_C
// (Actor)

class UClass* ABP_Potion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Potion_C");

	return Clss;
}


// BP_Potion_C BP_Potion.Default__BP_Potion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Potion_C* ABP_Potion_C::GetDefaultObj()
{
	static class ABP_Potion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Potion_C*>(ABP_Potion_C::StaticClass()->DefaultObject);

	return Default;
}

}


