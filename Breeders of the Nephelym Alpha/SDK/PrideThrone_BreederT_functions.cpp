#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideThrone_BreederT.PrideThrone_BreederT_C
// (None)

class UClass* UPrideThrone_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideThrone_BreederT_C");

	return Clss;
}


// PrideThrone_BreederT_C PrideThrone_BreederT.Default__PrideThrone_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideThrone_BreederT_C* UPrideThrone_BreederT_C::GetDefaultObj()
{
	static class UPrideThrone_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideThrone_BreederT_C*>(UPrideThrone_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


