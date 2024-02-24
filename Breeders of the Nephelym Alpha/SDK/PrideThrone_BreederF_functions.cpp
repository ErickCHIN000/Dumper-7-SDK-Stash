#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideThrone_BreederF.PrideThrone_BreederF_C
// (None)

class UClass* UPrideThrone_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideThrone_BreederF_C");

	return Clss;
}


// PrideThrone_BreederF_C PrideThrone_BreederF.Default__PrideThrone_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideThrone_BreederF_C* UPrideThrone_BreederF_C::GetDefaultObj()
{
	static class UPrideThrone_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideThrone_BreederF_C*>(UPrideThrone_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


