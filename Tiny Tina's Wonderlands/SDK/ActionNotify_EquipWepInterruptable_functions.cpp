#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionNotify_EquipWepInterruptable.ActionNotify_EquipWepInterruptable_C
// (None)

class UClass* UActionNotify_EquipWepInterruptable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionNotify_EquipWepInterruptable_C");

	return Clss;
}


// ActionNotify_EquipWepInterruptable_C ActionNotify_EquipWepInterruptable.Default__ActionNotify_EquipWepInterruptable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionNotify_EquipWepInterruptable_C* UActionNotify_EquipWepInterruptable_C::GetDefaultObj()
{
	static class UActionNotify_EquipWepInterruptable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionNotify_EquipWepInterruptable_C*>(UActionNotify_EquipWepInterruptable_C::StaticClass()->DefaultObject);

	return Default;
}

}


