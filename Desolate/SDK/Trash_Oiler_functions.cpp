#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Oiler.Trash_Oiler_C
// (Actor)

class UClass* ATrash_Oiler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Oiler_C");

	return Clss;
}


// Trash_Oiler_C Trash_Oiler.Default__Trash_Oiler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Oiler_C* ATrash_Oiler_C::GetDefaultObj()
{
	static class ATrash_Oiler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Oiler_C*>(ATrash_Oiler_C::StaticClass()->DefaultObject);

	return Default;
}

}


