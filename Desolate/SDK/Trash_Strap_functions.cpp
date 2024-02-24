#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Strap.Trash_Strap_C
// (Actor)

class UClass* ATrash_Strap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Strap_C");

	return Clss;
}


// Trash_Strap_C Trash_Strap.Default__Trash_Strap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Strap_C* ATrash_Strap_C::GetDefaultObj()
{
	static class ATrash_Strap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Strap_C*>(ATrash_Strap_C::StaticClass()->DefaultObject);

	return Default;
}

}


