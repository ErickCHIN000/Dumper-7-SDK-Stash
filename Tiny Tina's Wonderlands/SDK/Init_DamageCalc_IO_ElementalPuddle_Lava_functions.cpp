#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_DamageCalc_IO_ElementalPuddle_Lava.Init_DamageCalc_IO_ElementalPuddle_Lava_C
// (None)

class UClass* UInit_DamageCalc_IO_ElementalPuddle_Lava_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_DamageCalc_IO_ElementalPuddle_Lava_C");

	return Clss;
}


// Init_DamageCalc_IO_ElementalPuddle_Lava_C Init_DamageCalc_IO_ElementalPuddle_Lava.Default__Init_DamageCalc_IO_ElementalPuddle_Lava_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_DamageCalc_IO_ElementalPuddle_Lava_C* UInit_DamageCalc_IO_ElementalPuddle_Lava_C::GetDefaultObj()
{
	static class UInit_DamageCalc_IO_ElementalPuddle_Lava_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_DamageCalc_IO_ElementalPuddle_Lava_C*>(UInit_DamageCalc_IO_ElementalPuddle_Lava_C::StaticClass()->DefaultObject);

	return Default;
}

}


