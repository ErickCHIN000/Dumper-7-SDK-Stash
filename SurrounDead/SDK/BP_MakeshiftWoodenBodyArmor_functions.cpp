#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MakeshiftWoodenBodyArmor.BP_MakeshiftWoodenBodyArmor_C
// (Actor)

class UClass* ABP_MakeshiftWoodenBodyArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MakeshiftWoodenBodyArmor_C");

	return Clss;
}


// BP_MakeshiftWoodenBodyArmor_C BP_MakeshiftWoodenBodyArmor.Default__BP_MakeshiftWoodenBodyArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MakeshiftWoodenBodyArmor_C* ABP_MakeshiftWoodenBodyArmor_C::GetDefaultObj()
{
	static class ABP_MakeshiftWoodenBodyArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MakeshiftWoodenBodyArmor_C*>(ABP_MakeshiftWoodenBodyArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


