#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Barbell.Trash_Barbell_C
// (Actor)

class UClass* ATrash_Barbell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Barbell_C");

	return Clss;
}


// Trash_Barbell_C Trash_Barbell.Default__Trash_Barbell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Barbell_C* ATrash_Barbell_C::GetDefaultObj()
{
	static class ATrash_Barbell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Barbell_C*>(ATrash_Barbell_C::StaticClass()->DefaultObject);

	return Default;
}

}


