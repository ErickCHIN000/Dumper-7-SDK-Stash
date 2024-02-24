#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_CoffeeMill.Trash_CoffeeMill_C
// (Actor)

class UClass* ATrash_CoffeeMill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_CoffeeMill_C");

	return Clss;
}


// Trash_CoffeeMill_C Trash_CoffeeMill.Default__Trash_CoffeeMill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_CoffeeMill_C* ATrash_CoffeeMill_C::GetDefaultObj()
{
	static class ATrash_CoffeeMill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_CoffeeMill_C*>(ATrash_CoffeeMill_C::StaticClass()->DefaultObject);

	return Default;
}

}


