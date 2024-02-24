#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_CC_Arrival.ARand_CC_Arrival_C
// (None)

class UClass* UARand_CC_Arrival_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_CC_Arrival_C");

	return Clss;
}


// ARand_CC_Arrival_C ARand_CC_Arrival.Default__ARand_CC_Arrival_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_CC_Arrival_C* UARand_CC_Arrival_C::GetDefaultObj()
{
	static class UARand_CC_Arrival_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_CC_Arrival_C*>(UARand_CC_Arrival_C::StaticClass()->DefaultObject);

	return Default;
}

}


