#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Handset.Trash_Handset_C
// (Actor)

class UClass* ATrash_Handset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Handset_C");

	return Clss;
}


// Trash_Handset_C Trash_Handset.Default__Trash_Handset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Handset_C* ATrash_Handset_C::GetDefaultObj()
{
	static class ATrash_Handset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Handset_C*>(ATrash_Handset_C::StaticClass()->DefaultObject);

	return Default;
}

}


