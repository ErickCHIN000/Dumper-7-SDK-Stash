#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DefaultPOISpawnComponent.BP_DefaultPOISpawnComponent_C
// (None)

class UClass* UBP_DefaultPOISpawnComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DefaultPOISpawnComponent_C");

	return Clss;
}


// BP_DefaultPOISpawnComponent_C BP_DefaultPOISpawnComponent.Default__BP_DefaultPOISpawnComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DefaultPOISpawnComponent_C* UBP_DefaultPOISpawnComponent_C::GetDefaultObj()
{
	static class UBP_DefaultPOISpawnComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DefaultPOISpawnComponent_C*>(UBP_DefaultPOISpawnComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


