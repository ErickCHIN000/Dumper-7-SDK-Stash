#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wooden_Fishing_Rod.BP_Wooden_Fishing_Rod_C
// (Actor)

class UClass* ABP_Wooden_Fishing_Rod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wooden_Fishing_Rod_C");

	return Clss;
}


// BP_Wooden_Fishing_Rod_C BP_Wooden_Fishing_Rod.Default__BP_Wooden_Fishing_Rod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wooden_Fishing_Rod_C* ABP_Wooden_Fishing_Rod_C::GetDefaultObj()
{
	static class ABP_Wooden_Fishing_Rod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wooden_Fishing_Rod_C*>(ABP_Wooden_Fishing_Rod_C::StaticClass()->DefaultObject);

	return Default;
}

}


