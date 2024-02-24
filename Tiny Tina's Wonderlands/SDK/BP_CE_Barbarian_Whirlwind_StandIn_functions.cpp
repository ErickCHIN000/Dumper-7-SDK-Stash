#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_Barbarian_Whirlwind_StandIn.BP_CE_Barbarian_Whirlwind_StandIn_C
// (None)

class UClass* UBP_CE_Barbarian_Whirlwind_StandIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_Barbarian_Whirlwind_StandIn_C");

	return Clss;
}


// BP_CE_Barbarian_Whirlwind_StandIn_C BP_CE_Barbarian_Whirlwind_StandIn.Default__BP_CE_Barbarian_Whirlwind_StandIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_Barbarian_Whirlwind_StandIn_C* UBP_CE_Barbarian_Whirlwind_StandIn_C::GetDefaultObj()
{
	static class UBP_CE_Barbarian_Whirlwind_StandIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_Barbarian_Whirlwind_StandIn_C*>(UBP_CE_Barbarian_Whirlwind_StandIn_C::StaticClass()->DefaultObject);

	return Default;
}

}


