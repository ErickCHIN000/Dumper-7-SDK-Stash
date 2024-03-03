#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bow.BP_Bow_C
// (Actor)

class UClass* ABP_Bow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bow_C");

	return Clss;
}


// BP_Bow_C BP_Bow.Default__BP_Bow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bow_C* ABP_Bow_C::GetDefaultObj()
{
	static class ABP_Bow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bow_C*>(ABP_Bow_C::StaticClass()->DefaultObject);

	return Default;
}

}


