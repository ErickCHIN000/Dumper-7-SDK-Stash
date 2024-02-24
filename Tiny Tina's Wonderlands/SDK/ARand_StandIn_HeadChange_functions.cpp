#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_StandIn_HeadChange.ARand_StandIn_HeadChange_C
// (None)

class UClass* UARand_StandIn_HeadChange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_StandIn_HeadChange_C");

	return Clss;
}


// ARand_StandIn_HeadChange_C ARand_StandIn_HeadChange.Default__ARand_StandIn_HeadChange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_StandIn_HeadChange_C* UARand_StandIn_HeadChange_C::GetDefaultObj()
{
	static class UARand_StandIn_HeadChange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_StandIn_HeadChange_C*>(UARand_StandIn_HeadChange_C::StaticClass()->DefaultObject);

	return Default;
}

}


