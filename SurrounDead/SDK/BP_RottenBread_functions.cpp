#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RottenBread.BP_RottenBread_C
// (Actor)

class UClass* ABP_RottenBread_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RottenBread_C");

	return Clss;
}


// BP_RottenBread_C BP_RottenBread.Default__BP_RottenBread_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RottenBread_C* ABP_RottenBread_C::GetDefaultObj()
{
	static class ABP_RottenBread_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RottenBread_C*>(ABP_RottenBread_C::StaticClass()->DefaultObject);

	return Default;
}

}


