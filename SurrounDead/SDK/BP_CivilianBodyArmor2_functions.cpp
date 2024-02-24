#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CivilianBodyArmor2.BP_CivilianBodyArmor2_C
// (Actor)

class UClass* ABP_CivilianBodyArmor2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CivilianBodyArmor2_C");

	return Clss;
}


// BP_CivilianBodyArmor2_C BP_CivilianBodyArmor2.Default__BP_CivilianBodyArmor2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CivilianBodyArmor2_C* ABP_CivilianBodyArmor2_C::GetDefaultObj()
{
	static class ABP_CivilianBodyArmor2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CivilianBodyArmor2_C*>(ABP_CivilianBodyArmor2_C::StaticClass()->DefaultObject);

	return Default;
}

}


