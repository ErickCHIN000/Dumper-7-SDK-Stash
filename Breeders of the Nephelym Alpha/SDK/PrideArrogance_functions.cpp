#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideArrogance.PrideArrogance_C
// (None)

class UClass* UPrideArrogance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideArrogance_C");

	return Clss;
}


// PrideArrogance_C PrideArrogance.Default__PrideArrogance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideArrogance_C* UPrideArrogance_C::GetDefaultObj()
{
	static class UPrideArrogance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideArrogance_C*>(UPrideArrogance_C::StaticClass()->DefaultObject);

	return Default;
}

}


