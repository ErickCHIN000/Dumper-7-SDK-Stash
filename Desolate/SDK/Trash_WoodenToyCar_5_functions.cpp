#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_WoodenToyCar_5.Trash_WoodenToyCar_5_C
// (Actor)

class UClass* ATrash_WoodenToyCar_5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_WoodenToyCar_5_C");

	return Clss;
}


// Trash_WoodenToyCar_5_C Trash_WoodenToyCar_5.Default__Trash_WoodenToyCar_5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_WoodenToyCar_5_C* ATrash_WoodenToyCar_5_C::GetDefaultObj()
{
	static class ATrash_WoodenToyCar_5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_WoodenToyCar_5_C*>(ATrash_WoodenToyCar_5_C::StaticClass()->DefaultObject);

	return Default;
}

}


