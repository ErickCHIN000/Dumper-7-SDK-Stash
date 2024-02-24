#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_Necromancer_Lichform.ARand_Necromancer_Lichform_C
// (None)

class UClass* UARand_Necromancer_Lichform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_Necromancer_Lichform_C");

	return Clss;
}


// ARand_Necromancer_Lichform_C ARand_Necromancer_Lichform.Default__ARand_Necromancer_Lichform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_Necromancer_Lichform_C* UARand_Necromancer_Lichform_C::GetDefaultObj()
{
	static class UARand_Necromancer_Lichform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_Necromancer_Lichform_C*>(UARand_Necromancer_Lichform_C::StaticClass()->DefaultObject);

	return Default;
}

}


