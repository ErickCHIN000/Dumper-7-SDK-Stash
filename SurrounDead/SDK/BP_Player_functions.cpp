#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Player.BP_Player_C
// (Actor, Pawn)

class UClass* ABP_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Player_C");

	return Clss;
}


// BP_Player_C BP_Player.Default__BP_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Player_C* ABP_Player_C::GetDefaultObj()
{
	static class ABP_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Player_C*>(ABP_Player_C::StaticClass()->DefaultObject);

	return Default;
}

}


