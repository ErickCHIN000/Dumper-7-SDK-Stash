#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_CurvedSplinePlace_Fuel.BP_ActionableBehaviour_CurvedSplinePlace_Fuel_C
// (None)

class UClass* UBP_ActionableBehaviour_CurvedSplinePlace_Fuel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_CurvedSplinePlace_Fuel_C");

	return Clss;
}


// BP_ActionableBehaviour_CurvedSplinePlace_Fuel_C BP_ActionableBehaviour_CurvedSplinePlace_Fuel.Default__BP_ActionableBehaviour_CurvedSplinePlace_Fuel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_CurvedSplinePlace_Fuel_C* UBP_ActionableBehaviour_CurvedSplinePlace_Fuel_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_CurvedSplinePlace_Fuel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_CurvedSplinePlace_Fuel_C*>(UBP_ActionableBehaviour_CurvedSplinePlace_Fuel_C::StaticClass()->DefaultObject);

	return Default;
}

}


