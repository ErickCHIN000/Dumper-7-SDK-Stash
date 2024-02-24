#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Shock_Status.DmgType_Shock_Status_C
// (None)

class UClass* UDmgType_Shock_Status_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Shock_Status_C");

	return Clss;
}


// DmgType_Shock_Status_C DmgType_Shock_Status.Default__DmgType_Shock_Status_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Shock_Status_C* UDmgType_Shock_Status_C::GetDefaultObj()
{
	static class UDmgType_Shock_Status_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Shock_Status_C*>(UDmgType_Shock_Status_C::StaticClass()->DefaultObject);

	return Default;
}

}


