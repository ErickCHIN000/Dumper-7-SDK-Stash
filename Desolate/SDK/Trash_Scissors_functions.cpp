#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Scissors.Trash_Scissors_C
// (Actor)

class UClass* ATrash_Scissors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Scissors_C");

	return Clss;
}


// Trash_Scissors_C Trash_Scissors.Default__Trash_Scissors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Scissors_C* ATrash_Scissors_C::GetDefaultObj()
{
	static class ATrash_Scissors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Scissors_C*>(ATrash_Scissors_C::StaticClass()->DefaultObject);

	return Default;
}

}


