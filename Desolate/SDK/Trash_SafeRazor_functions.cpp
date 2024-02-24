#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_SafeRazor.Trash_SafeRazor_C
// (Actor)

class UClass* ATrash_SafeRazor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_SafeRazor_C");

	return Clss;
}


// Trash_SafeRazor_C Trash_SafeRazor.Default__Trash_SafeRazor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_SafeRazor_C* ATrash_SafeRazor_C::GetDefaultObj()
{
	static class ATrash_SafeRazor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_SafeRazor_C*>(ATrash_SafeRazor_C::StaticClass()->DefaultObject);

	return Default;
}

}


