#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Beanie.BP_Beanie_C
// (Actor)

class UClass* ABP_Beanie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Beanie_C");

	return Clss;
}


// BP_Beanie_C BP_Beanie.Default__BP_Beanie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Beanie_C* ABP_Beanie_C::GetDefaultObj()
{
	static class ABP_Beanie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Beanie_C*>(ABP_Beanie_C::StaticClass()->DefaultObject);

	return Default;
}

}


