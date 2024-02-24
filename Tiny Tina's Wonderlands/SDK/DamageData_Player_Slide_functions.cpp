#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Player_Slide.DamageData_Player_Slide_C
// (None)

class UClass* UDamageData_Player_Slide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Player_Slide_C");

	return Clss;
}


// DamageData_Player_Slide_C DamageData_Player_Slide.Default__DamageData_Player_Slide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Player_Slide_C* UDamageData_Player_Slide_C::GetDefaultObj()
{
	static class UDamageData_Player_Slide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Player_Slide_C*>(UDamageData_Player_Slide_C::StaticClass()->DefaultObject);

	return Default;
}

}


