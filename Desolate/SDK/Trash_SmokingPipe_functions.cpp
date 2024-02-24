#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_SmokingPipe.Trash_SmokingPipe_C
// (Actor)

class UClass* ATrash_SmokingPipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_SmokingPipe_C");

	return Clss;
}


// Trash_SmokingPipe_C Trash_SmokingPipe.Default__Trash_SmokingPipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_SmokingPipe_C* ATrash_SmokingPipe_C::GetDefaultObj()
{
	static class ATrash_SmokingPipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_SmokingPipe_C*>(ATrash_SmokingPipe_C::StaticClass()->DefaultObject);

	return Default;
}

}


