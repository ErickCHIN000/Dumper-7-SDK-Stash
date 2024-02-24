#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_SupplyProvisions.LL_SupplyProvisions_C
// (Actor)

class UClass* ALL_SupplyProvisions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_SupplyProvisions_C");

	return Clss;
}


// LL_SupplyProvisions_C LL_SupplyProvisions.Default__LL_SupplyProvisions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_SupplyProvisions_C* ALL_SupplyProvisions_C::GetDefaultObj()
{
	static class ALL_SupplyProvisions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_SupplyProvisions_C*>(ALL_SupplyProvisions_C::StaticClass()->DefaultObject);

	return Default;
}

}


