#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Roulette.Trash_Roulette_C
// (Actor)

class UClass* ATrash_Roulette_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Roulette_C");

	return Clss;
}


// Trash_Roulette_C Trash_Roulette.Default__Trash_Roulette_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Roulette_C* ATrash_Roulette_C::GetDefaultObj()
{
	static class ATrash_Roulette_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Roulette_C*>(ATrash_Roulette_C::StaticClass()->DefaultObject);

	return Default;
}

}


