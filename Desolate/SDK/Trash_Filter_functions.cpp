#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Filter.Trash_Filter_C
// (Actor)

class UClass* ATrash_Filter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Filter_C");

	return Clss;
}


// Trash_Filter_C Trash_Filter.Default__Trash_Filter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Filter_C* ATrash_Filter_C::GetDefaultObj()
{
	static class ATrash_Filter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Filter_C*>(ATrash_Filter_C::StaticClass()->DefaultObject);

	return Default;
}

}


