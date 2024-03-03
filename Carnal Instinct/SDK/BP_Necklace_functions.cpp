#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Necklace.BP_Necklace_C
// (Actor)

class UClass* ABP_Necklace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Necklace_C");

	return Clss;
}


// BP_Necklace_C BP_Necklace.Default__BP_Necklace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Necklace_C* ABP_Necklace_C::GetDefaultObj()
{
	static class ABP_Necklace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Necklace_C*>(ABP_Necklace_C::StaticClass()->DefaultObject);

	return Default;
}

}


