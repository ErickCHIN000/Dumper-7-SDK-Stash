#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_Thermometer.Trash_Thermometer_C
// (Actor)

class UClass* ATrash_Thermometer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_Thermometer_C");

	return Clss;
}


// Trash_Thermometer_C Trash_Thermometer.Default__Trash_Thermometer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_Thermometer_C* ATrash_Thermometer_C::GetDefaultObj()
{
	static class ATrash_Thermometer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_Thermometer_C*>(ATrash_Thermometer_C::StaticClass()->DefaultObject);

	return Default;
}

}


