#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiWaterfall_BreederT.ParvatiWaterfall_BreederT_C
// (None)

class UClass* UParvatiWaterfall_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiWaterfall_BreederT_C");

	return Clss;
}


// ParvatiWaterfall_BreederT_C ParvatiWaterfall_BreederT.Default__ParvatiWaterfall_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiWaterfall_BreederT_C* UParvatiWaterfall_BreederT_C::GetDefaultObj()
{
	static class UParvatiWaterfall_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiWaterfall_BreederT_C*>(UParvatiWaterfall_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


