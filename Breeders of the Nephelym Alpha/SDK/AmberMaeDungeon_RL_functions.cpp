#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AmberMaeDungeon_RL.AmberMaeDungeon_RL_C
// (None)

class UClass* UAmberMaeDungeon_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmberMaeDungeon_RL_C");

	return Clss;
}


// AmberMaeDungeon_RL_C AmberMaeDungeon_RL.Default__AmberMaeDungeon_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAmberMaeDungeon_RL_C* UAmberMaeDungeon_RL_C::GetDefaultObj()
{
	static class UAmberMaeDungeon_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmberMaeDungeon_RL_C*>(UAmberMaeDungeon_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


