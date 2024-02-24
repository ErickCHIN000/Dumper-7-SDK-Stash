#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Fire_Status.DmgType_Fire_Status_C
// (None)

class UClass* UDmgType_Fire_Status_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Fire_Status_C");

	return Clss;
}


// DmgType_Fire_Status_C DmgType_Fire_Status.Default__DmgType_Fire_Status_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Fire_Status_C* UDmgType_Fire_Status_C::GetDefaultObj()
{
	static class UDmgType_Fire_Status_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Fire_Status_C*>(UDmgType_Fire_Status_C::StaticClass()->DefaultObject);

	return Default;
}

}


