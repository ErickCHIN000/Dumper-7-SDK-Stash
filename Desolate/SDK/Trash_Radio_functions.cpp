#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Radio.Trash_Radio_C
// (Actor)

class UClass* ATrash_Radio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Radio_C");

	return Clss;
}


// Trash_Radio_C Trash_Radio.Default__Trash_Radio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Radio_C* ATrash_Radio_C::GetDefaultObj()
{
	static class ATrash_Radio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Radio_C*>(ATrash_Radio_C::StaticClass()->DefaultObject);

	return Default;
}

}


