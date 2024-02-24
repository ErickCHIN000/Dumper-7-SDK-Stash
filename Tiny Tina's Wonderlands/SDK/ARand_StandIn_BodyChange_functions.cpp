#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ARand_StandIn_BodyChange.ARand_StandIn_BodyChange_C
// (None)

class UClass* UARand_StandIn_BodyChange_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ARand_StandIn_BodyChange_C");

	return Clss;
}


// ARand_StandIn_BodyChange_C ARand_StandIn_BodyChange.Default__ARand_StandIn_BodyChange_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UARand_StandIn_BodyChange_C* UARand_StandIn_BodyChange_C::GetDefaultObj()
{
	static class UARand_StandIn_BodyChange_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UARand_StandIn_BodyChange_C*>(UARand_StandIn_BodyChange_C::StaticClass()->DefaultObject);

	return Default;
}

}


