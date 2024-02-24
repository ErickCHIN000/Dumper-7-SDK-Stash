#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSevenSexy.PrideSevenSexy_C
// (None)

class UClass* UPrideSevenSexy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSevenSexy_C");

	return Clss;
}


// PrideSevenSexy_C PrideSevenSexy.Default__PrideSevenSexy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSevenSexy_C* UPrideSevenSexy_C::GetDefaultObj()
{
	static class UPrideSevenSexy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSevenSexy_C*>(UPrideSevenSexy_C::StaticClass()->DefaultObject);

	return Default;
}

}


