#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideHoldingUp.PrideHoldingUp_C
// (None)

class UClass* UPrideHoldingUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideHoldingUp_C");

	return Clss;
}


// PrideHoldingUp_C PrideHoldingUp.Default__PrideHoldingUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideHoldingUp_C* UPrideHoldingUp_C::GetDefaultObj()
{
	static class UPrideHoldingUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideHoldingUp_C*>(UPrideHoldingUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


