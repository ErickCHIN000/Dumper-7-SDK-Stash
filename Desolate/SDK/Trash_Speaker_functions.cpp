#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Speaker.Trash_Speaker_C
// (Actor)

class UClass* ATrash_Speaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Speaker_C");

	return Clss;
}


// Trash_Speaker_C Trash_Speaker.Default__Trash_Speaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Speaker_C* ATrash_Speaker_C::GetDefaultObj()
{
	static class ATrash_Speaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Speaker_C*>(ATrash_Speaker_C::StaticClass()->DefaultObject);

	return Default;
}

}


