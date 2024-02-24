#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Penknife.Trash_Penknife_C
// (Actor)

class UClass* ATrash_Penknife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Penknife_C");

	return Clss;
}


// Trash_Penknife_C Trash_Penknife.Default__Trash_Penknife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Penknife_C* ATrash_Penknife_C::GetDefaultObj()
{
	static class ATrash_Penknife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Penknife_C*>(ATrash_Penknife_C::StaticClass()->DefaultObject);

	return Default;
}

}


