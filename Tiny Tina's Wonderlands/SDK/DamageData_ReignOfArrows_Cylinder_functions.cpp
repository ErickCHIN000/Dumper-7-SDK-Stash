#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_ReignOfArrows_Cylinder.DamageData_ReignOfArrows_Cylinder_C
// (None)

class UClass* UDamageData_ReignOfArrows_Cylinder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_ReignOfArrows_Cylinder_C");

	return Clss;
}


// DamageData_ReignOfArrows_Cylinder_C DamageData_ReignOfArrows_Cylinder.Default__DamageData_ReignOfArrows_Cylinder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_ReignOfArrows_Cylinder_C* UDamageData_ReignOfArrows_Cylinder_C::GetDefaultObj()
{
	static class UDamageData_ReignOfArrows_Cylinder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_ReignOfArrows_Cylinder_C*>(UDamageData_ReignOfArrows_Cylinder_C::StaticClass()->DefaultObject);

	return Default;
}

}


