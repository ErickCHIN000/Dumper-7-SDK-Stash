#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDesires_BreederT.PrideDesires_BreederT_C
// (None)

class UClass* UPrideDesires_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDesires_BreederT_C");

	return Clss;
}


// PrideDesires_BreederT_C PrideDesires_BreederT.Default__PrideDesires_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDesires_BreederT_C* UPrideDesires_BreederT_C::GetDefaultObj()
{
	static class UPrideDesires_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDesires_BreederT_C*>(UPrideDesires_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


