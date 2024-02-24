#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Clock.Trash_Clock_C
// (Actor)

class UClass* ATrash_Clock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Clock_C");

	return Clss;
}


// Trash_Clock_C Trash_Clock.Default__Trash_Clock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Clock_C* ATrash_Clock_C::GetDefaultObj()
{
	static class ATrash_Clock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Clock_C*>(ATrash_Clock_C::StaticClass()->DefaultObject);

	return Default;
}

}


