#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Razor.Trash_Razor_C
// (Actor)

class UClass* ATrash_Razor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Razor_C");

	return Clss;
}


// Trash_Razor_C Trash_Razor.Default__Trash_Razor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Razor_C* ATrash_Razor_C::GetDefaultObj()
{
	static class ATrash_Razor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Razor_C*>(ATrash_Razor_C::StaticClass()->DefaultObject);

	return Default;
}

}


