#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Extractor_Biofuel.BP_Extractor_Biofuel_C
// (Actor)

class UClass* ABP_Extractor_Biofuel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Extractor_Biofuel_C");

	return Clss;
}


// BP_Extractor_Biofuel_C BP_Extractor_Biofuel.Default__BP_Extractor_Biofuel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Extractor_Biofuel_C* ABP_Extractor_Biofuel_C::GetDefaultObj()
{
	static class ABP_Extractor_Biofuel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Extractor_Biofuel_C*>(ABP_Extractor_Biofuel_C::StaticClass()->DefaultObject);

	return Default;
}

}


