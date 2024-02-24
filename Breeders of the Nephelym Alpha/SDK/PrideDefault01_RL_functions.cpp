#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDefault01_RL.PrideDefault01_RL_C
// (None)

class UClass* UPrideDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDefault01_RL_C");

	return Clss;
}


// PrideDefault01_RL_C PrideDefault01_RL.Default__PrideDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDefault01_RL_C* UPrideDefault01_RL_C::GetDefaultObj()
{
	static class UPrideDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDefault01_RL_C*>(UPrideDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


