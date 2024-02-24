#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_WoodenToyCar.Trash_WoodenToyCar_C
// (Actor)

class UClass* ATrash_WoodenToyCar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_WoodenToyCar_C");

	return Clss;
}


// Trash_WoodenToyCar_C Trash_WoodenToyCar.Default__Trash_WoodenToyCar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_WoodenToyCar_C* ATrash_WoodenToyCar_C::GetDefaultObj()
{
	static class ATrash_WoodenToyCar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_WoodenToyCar_C*>(ATrash_WoodenToyCar_C::StaticClass()->DefaultObject);

	return Default;
}

}


