#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DB_Progression_AssetName.BP_DB_Progression_AssetName_C
// (None)

class UClass* UBP_DB_Progression_AssetName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DB_Progression_AssetName_C");

	return Clss;
}


// BP_DB_Progression_AssetName_C BP_DB_Progression_AssetName.Default__BP_DB_Progression_AssetName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DB_Progression_AssetName_C* UBP_DB_Progression_AssetName_C::GetDefaultObj()
{
	static class UBP_DB_Progression_AssetName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DB_Progression_AssetName_C*>(UBP_DB_Progression_AssetName_C::StaticClass()->DefaultObject);

	return Default;
}

}


