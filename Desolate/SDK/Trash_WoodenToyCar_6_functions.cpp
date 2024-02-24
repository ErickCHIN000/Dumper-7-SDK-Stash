#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_WoodenToyCar_6.Trash_WoodenToyCar_6_C
// (Actor)

class UClass* ATrash_WoodenToyCar_6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_WoodenToyCar_6_C");

	return Clss;
}


// Trash_WoodenToyCar_6_C Trash_WoodenToyCar_6.Default__Trash_WoodenToyCar_6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_WoodenToyCar_6_C* ATrash_WoodenToyCar_6_C::GetDefaultObj()
{
	static class ATrash_WoodenToyCar_6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_WoodenToyCar_6_C*>(ATrash_WoodenToyCar_6_C::StaticClass()->DefaultObject);

	return Default;
}

}


