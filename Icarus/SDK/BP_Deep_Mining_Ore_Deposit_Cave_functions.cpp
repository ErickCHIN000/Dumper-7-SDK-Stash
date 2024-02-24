#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deep_Mining_Ore_Deposit_Cave.BP_Deep_Mining_Ore_Deposit_Cave_C
// (Actor)

class UClass* ABP_Deep_Mining_Ore_Deposit_Cave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deep_Mining_Ore_Deposit_Cave_C");

	return Clss;
}


// BP_Deep_Mining_Ore_Deposit_Cave_C BP_Deep_Mining_Ore_Deposit_Cave.Default__BP_Deep_Mining_Ore_Deposit_Cave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deep_Mining_Ore_Deposit_Cave_C* ABP_Deep_Mining_Ore_Deposit_Cave_C::GetDefaultObj()
{
	static class ABP_Deep_Mining_Ore_Deposit_Cave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deep_Mining_Ore_Deposit_Cave_C*>(ABP_Deep_Mining_Ore_Deposit_Cave_C::StaticClass()->DefaultObject);

	return Default;
}

}


