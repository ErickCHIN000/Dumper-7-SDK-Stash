#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiWaterfall_BreederF.ParvatiWaterfall_BreederF_C
// (None)

class UClass* UParvatiWaterfall_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiWaterfall_BreederF_C");

	return Clss;
}


// ParvatiWaterfall_BreederF_C ParvatiWaterfall_BreederF.Default__ParvatiWaterfall_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiWaterfall_BreederF_C* UParvatiWaterfall_BreederF_C::GetDefaultObj()
{
	static class UParvatiWaterfall_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiWaterfall_BreederF_C*>(UParvatiWaterfall_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


