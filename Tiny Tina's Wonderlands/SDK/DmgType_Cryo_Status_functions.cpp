#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Cryo_Status.DmgType_Cryo_Status_C
// (None)

class UClass* UDmgType_Cryo_Status_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Cryo_Status_C");

	return Clss;
}


// DmgType_Cryo_Status_C DmgType_Cryo_Status.Default__DmgType_Cryo_Status_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Cryo_Status_C* UDmgType_Cryo_Status_C::GetDefaultObj()
{
	static class UDmgType_Cryo_Status_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Cryo_Status_C*>(UDmgType_Cryo_Status_C::StaticClass()->DefaultObject);

	return Default;
}

}


