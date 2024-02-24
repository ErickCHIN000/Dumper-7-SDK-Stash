#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideTelepathySex_BreederF.PrideTelepathySex_BreederF_C
// (None)

class UClass* UPrideTelepathySex_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideTelepathySex_BreederF_C");

	return Clss;
}


// PrideTelepathySex_BreederF_C PrideTelepathySex_BreederF.Default__PrideTelepathySex_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideTelepathySex_BreederF_C* UPrideTelepathySex_BreederF_C::GetDefaultObj()
{
	static class UPrideTelepathySex_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideTelepathySex_BreederF_C*>(UPrideTelepathySex_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


