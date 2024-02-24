#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_PracticalFocus_CritDamageScalar.Init_PracticalFocus_CritDamageScalar_C
// (None)

class UClass* UInit_PracticalFocus_CritDamageScalar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_PracticalFocus_CritDamageScalar_C");

	return Clss;
}


// Init_PracticalFocus_CritDamageScalar_C Init_PracticalFocus_CritDamageScalar.Default__Init_PracticalFocus_CritDamageScalar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_PracticalFocus_CritDamageScalar_C* UInit_PracticalFocus_CritDamageScalar_C::GetDefaultObj()
{
	static class UInit_PracticalFocus_CritDamageScalar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_PracticalFocus_CritDamageScalar_C*>(UInit_PracticalFocus_CritDamageScalar_C::StaticClass()->DefaultObject);

	return Default;
}

}


