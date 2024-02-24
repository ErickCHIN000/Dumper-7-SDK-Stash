#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_OldDoll.Trash_OldDoll_C
// (Actor)

class UClass* ATrash_OldDoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_OldDoll_C");

	return Clss;
}


// Trash_OldDoll_C Trash_OldDoll.Default__Trash_OldDoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_OldDoll_C* ATrash_OldDoll_C::GetDefaultObj()
{
	static class ATrash_OldDoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_OldDoll_C*>(ATrash_OldDoll_C::StaticClass()->DefaultObject);

	return Default;
}

}


