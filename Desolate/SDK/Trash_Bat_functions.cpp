#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Bat.Trash_Bat_C
// (Actor)

class UClass* ATrash_Bat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Bat_C");

	return Clss;
}


// Trash_Bat_C Trash_Bat.Default__Trash_Bat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Bat_C* ATrash_Bat_C::GetDefaultObj()
{
	static class ATrash_Bat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Bat_C*>(ATrash_Bat_C::StaticClass()->DefaultObject);

	return Default;
}

}


