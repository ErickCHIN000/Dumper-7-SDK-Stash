#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDesires_BreederF.PrideDesires_BreederF_C
// (None)

class UClass* UPrideDesires_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDesires_BreederF_C");

	return Clss;
}


// PrideDesires_BreederF_C PrideDesires_BreederF.Default__PrideDesires_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDesires_BreederF_C* UPrideDesires_BreederF_C::GetDefaultObj()
{
	static class UPrideDesires_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDesires_BreederF_C*>(UPrideDesires_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


