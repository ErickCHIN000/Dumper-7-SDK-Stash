#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_Ranger_BowSkill.ARand_Ranger_BowSkill_C
// (None)

class UClass* UARand_Ranger_BowSkill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_Ranger_BowSkill_C");

	return Clss;
}


// ARand_Ranger_BowSkill_C ARand_Ranger_BowSkill.Default__ARand_Ranger_BowSkill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_Ranger_BowSkill_C* UARand_Ranger_BowSkill_C::GetDefaultObj()
{
	static class UARand_Ranger_BowSkill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_Ranger_BowSkill_C*>(UARand_Ranger_BowSkill_C::StaticClass()->DefaultObject);

	return Default;
}

}


