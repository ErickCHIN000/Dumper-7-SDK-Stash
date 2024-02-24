#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Sheave.Trash_Sheave_C
// (Actor)

class UClass* ATrash_Sheave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Sheave_C");

	return Clss;
}


// Trash_Sheave_C Trash_Sheave.Default__Trash_Sheave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Sheave_C* ATrash_Sheave_C::GetDefaultObj()
{
	static class ATrash_Sheave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Sheave_C*>(ATrash_Sheave_C::StaticClass()->DefaultObject);

	return Default;
}

}


