#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Doloto.Trash_Doloto_C
// (Actor)

class UClass* ATrash_Doloto_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Doloto_C");

	return Clss;
}


// Trash_Doloto_C Trash_Doloto.Default__Trash_Doloto_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Doloto_C* ATrash_Doloto_C::GetDefaultObj()
{
	static class ATrash_Doloto_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Doloto_C*>(ATrash_Doloto_C::StaticClass()->DefaultObject);

	return Default;
}

}


