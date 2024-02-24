#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideLeaving.PrideLeaving_C
// (None)

class UClass* UPrideLeaving_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideLeaving_C");

	return Clss;
}


// PrideLeaving_C PrideLeaving.Default__PrideLeaving_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideLeaving_C* UPrideLeaving_C::GetDefaultObj()
{
	static class UPrideLeaving_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideLeaving_C*>(UPrideLeaving_C::StaticClass()->DefaultObject);

	return Default;
}

}


