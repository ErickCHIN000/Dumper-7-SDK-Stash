#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageData_Shared_Target_Friend_Pen.DamageData_Shared_Target_Friend_Pen_C
// (None)

class UClass* UDamageData_Shared_Target_Friend_Pen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageData_Shared_Target_Friend_Pen_C");

	return Clss;
}


// DamageData_Shared_Target_Friend_Pen_C DamageData_Shared_Target_Friend_Pen.Default__DamageData_Shared_Target_Friend_Pen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageData_Shared_Target_Friend_Pen_C* UDamageData_Shared_Target_Friend_Pen_C::GetDefaultObj()
{
	static class UDamageData_Shared_Target_Friend_Pen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageData_Shared_Target_Friend_Pen_C*>(UDamageData_Shared_Target_Friend_Pen_C::StaticClass()->DefaultObject);

	return Default;
}

}


