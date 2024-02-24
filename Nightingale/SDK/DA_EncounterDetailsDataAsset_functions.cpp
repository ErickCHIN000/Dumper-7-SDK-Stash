#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DA_EncounterDetailsDataAsset.DA_EncounterDetailsDataAsset_C
// (None)

class UClass* UDA_EncounterDetailsDataAsset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DA_EncounterDetailsDataAsset_C");

	return Clss;
}


// DA_EncounterDetailsDataAsset_C DA_EncounterDetailsDataAsset.Default__DA_EncounterDetailsDataAsset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDA_EncounterDetailsDataAsset_C* UDA_EncounterDetailsDataAsset_C::GetDefaultObj()
{
	static class UDA_EncounterDetailsDataAsset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDA_EncounterDetailsDataAsset_C*>(UDA_EncounterDetailsDataAsset_C::StaticClass()->DefaultObject);

	return Default;
}

}


