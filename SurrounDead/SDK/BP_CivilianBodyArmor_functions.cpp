#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CivilianBodyArmor.BP_CivilianBodyArmor_C
// (Actor)

class UClass* ABP_CivilianBodyArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CivilianBodyArmor_C");

	return Clss;
}


// BP_CivilianBodyArmor_C BP_CivilianBodyArmor.Default__BP_CivilianBodyArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CivilianBodyArmor_C* ABP_CivilianBodyArmor_C::GetDefaultObj()
{
	static class ABP_CivilianBodyArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CivilianBodyArmor_C*>(ABP_CivilianBodyArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


