#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HeadKobold1.BP_HeadKobold1_C
// (Actor)

class UClass* ABP_HeadKobold1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HeadKobold1_C");

	return Clss;
}


// BP_HeadKobold1_C BP_HeadKobold1.Default__BP_HeadKobold1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HeadKobold1_C* ABP_HeadKobold1_C::GetDefaultObj()
{
	static class ABP_HeadKobold1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HeadKobold1_C*>(ABP_HeadKobold1_C::StaticClass()->DefaultObject);

	return Default;
}

}


