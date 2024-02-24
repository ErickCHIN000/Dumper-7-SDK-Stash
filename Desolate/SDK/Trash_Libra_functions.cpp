#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Libra.Trash_Libra_C
// (Actor)

class UClass* ATrash_Libra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Libra_C");

	return Clss;
}


// Trash_Libra_C Trash_Libra.Default__Trash_Libra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Libra_C* ATrash_Libra_C::GetDefaultObj()
{
	static class ATrash_Libra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Libra_C*>(ATrash_Libra_C::StaticClass()->DefaultObject);

	return Default;
}

}


