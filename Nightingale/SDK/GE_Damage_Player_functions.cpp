#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Damage_Player.GE_Damage_Player_C
// (None)

class UClass* UGE_Damage_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Damage_Player_C");

	return Clss;
}


// GE_Damage_Player_C GE_Damage_Player.Default__GE_Damage_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Damage_Player_C* UGE_Damage_Player_C::GetDefaultObj()
{
	static class UGE_Damage_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Damage_Player_C*>(UGE_Damage_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


