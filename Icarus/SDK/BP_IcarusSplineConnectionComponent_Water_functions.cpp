#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusSplineConnectionComponent_Water.BP_IcarusSplineConnectionComponent_Water_C
// (SceneComponent)

class UClass* UBP_IcarusSplineConnectionComponent_Water_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusSplineConnectionComponent_Water_C");

	return Clss;
}


// BP_IcarusSplineConnectionComponent_Water_C BP_IcarusSplineConnectionComponent_Water.Default__BP_IcarusSplineConnectionComponent_Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusSplineConnectionComponent_Water_C* UBP_IcarusSplineConnectionComponent_Water_C::GetDefaultObj()
{
	static class UBP_IcarusSplineConnectionComponent_Water_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusSplineConnectionComponent_Water_C*>(UBP_IcarusSplineConnectionComponent_Water_C::StaticClass()->DefaultObject);

	return Default;
}

}

