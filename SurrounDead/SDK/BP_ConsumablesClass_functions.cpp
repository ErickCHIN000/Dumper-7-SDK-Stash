#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConsumablesClass.BP_ConsumablesClass_C
// (Actor)

class UClass* ABP_ConsumablesClass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConsumablesClass_C");

	return Clss;
}


// BP_ConsumablesClass_C BP_ConsumablesClass.Default__BP_ConsumablesClass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ConsumablesClass_C* ABP_ConsumablesClass_C::GetDefaultObj()
{
	static class ABP_ConsumablesClass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ConsumablesClass_C*>(ABP_ConsumablesClass_C::StaticClass()->DefaultObject);

	return Default;
}

}


