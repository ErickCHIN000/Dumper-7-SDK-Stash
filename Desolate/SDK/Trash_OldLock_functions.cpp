#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_OldLock.Trash_OldLock_C
// (Actor)

class UClass* ATrash_OldLock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_OldLock_C");

	return Clss;
}


// Trash_OldLock_C Trash_OldLock.Default__Trash_OldLock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_OldLock_C* ATrash_OldLock_C::GetDefaultObj()
{
	static class ATrash_OldLock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_OldLock_C*>(ATrash_OldLock_C::StaticClass()->DefaultObject);

	return Default;
}

}


