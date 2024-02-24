#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_FrontEnd_Arrival.ARand_FrontEnd_Arrival_C
// (None)

class UClass* UARand_FrontEnd_Arrival_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_FrontEnd_Arrival_C");

	return Clss;
}


// ARand_FrontEnd_Arrival_C ARand_FrontEnd_Arrival.Default__ARand_FrontEnd_Arrival_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_FrontEnd_Arrival_C* UARand_FrontEnd_Arrival_C::GetDefaultObj()
{
	static class UARand_FrontEnd_Arrival_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_FrontEnd_Arrival_C*>(UARand_FrontEnd_Arrival_C::StaticClass()->DefaultObject);

	return Default;
}

}


