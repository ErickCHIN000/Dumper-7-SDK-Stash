#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CampingAxe.BP_CampingAxe_C
// (Actor)

class UClass* ABP_CampingAxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CampingAxe_C");

	return Clss;
}


// BP_CampingAxe_C BP_CampingAxe.Default__BP_CampingAxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CampingAxe_C* ABP_CampingAxe_C::GetDefaultObj()
{
	static class ABP_CampingAxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CampingAxe_C*>(ABP_CampingAxe_C::StaticClass()->DefaultObject);

	return Default;
}

}


