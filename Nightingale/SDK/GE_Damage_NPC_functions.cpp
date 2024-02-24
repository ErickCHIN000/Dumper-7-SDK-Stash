#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_NPC.GE_Damage_NPC_C
// (None)

class UClass* UGE_Damage_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_NPC_C");

	return Clss;
}


// GE_Damage_NPC_C GE_Damage_NPC.Default__GE_Damage_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_NPC_C* UGE_Damage_NPC_C::GetDefaultObj()
{
	static class UGE_Damage_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_NPC_C*>(UGE_Damage_NPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


