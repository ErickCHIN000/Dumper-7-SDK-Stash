#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideTelepathySex_BreederF_Real.PrideTelepathySex_BreederF_Real_C
// (None)

class UClass* UPrideTelepathySex_BreederF_Real_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideTelepathySex_BreederF_Real_C");

	return Clss;
}


// PrideTelepathySex_BreederF_Real_C PrideTelepathySex_BreederF_Real.Default__PrideTelepathySex_BreederF_Real_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideTelepathySex_BreederF_Real_C* UPrideTelepathySex_BreederF_Real_C::GetDefaultObj()
{
	static class UPrideTelepathySex_BreederF_Real_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideTelepathySex_BreederF_Real_C*>(UPrideTelepathySex_BreederF_Real_C::StaticClass()->DefaultObject);

	return Default;
}

}


