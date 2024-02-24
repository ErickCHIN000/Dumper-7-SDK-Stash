#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Trash_ElectricMotor.Trash_ElectricMotor_C
// (Actor)

class UClass* ATrash_ElectricMotor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Trash_ElectricMotor_C");

	return Clss;
}


// Trash_ElectricMotor_C Trash_ElectricMotor.Default__Trash_ElectricMotor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrash_ElectricMotor_C* ATrash_ElectricMotor_C::GetDefaultObj()
{
	static class ATrash_ElectricMotor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrash_ElectricMotor_C*>(ATrash_ElectricMotor_C::StaticClass()->DefaultObject);

	return Default;
}

}


