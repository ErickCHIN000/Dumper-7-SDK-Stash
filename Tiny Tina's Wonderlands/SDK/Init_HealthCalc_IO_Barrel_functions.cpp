#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_HealthCalc_IO_Barrel.Init_HealthCalc_IO_Barrel_C
// (None)

class UClass* UInit_HealthCalc_IO_Barrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_HealthCalc_IO_Barrel_C");

	return Clss;
}


// Init_HealthCalc_IO_Barrel_C Init_HealthCalc_IO_Barrel.Default__Init_HealthCalc_IO_Barrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_HealthCalc_IO_Barrel_C* UInit_HealthCalc_IO_Barrel_C::GetDefaultObj()
{
	static class UInit_HealthCalc_IO_Barrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_HealthCalc_IO_Barrel_C*>(UInit_HealthCalc_IO_Barrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


