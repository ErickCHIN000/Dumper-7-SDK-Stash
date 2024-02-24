#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RoofSnowChild.RoofSnowChild_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* URoofSnowChild_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RoofSnowChild_C");

	return Clss;
}


// RoofSnowChild_C RoofSnowChild.Default__RoofSnowChild_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URoofSnowChild_C* URoofSnowChild_C::GetDefaultObj()
{
	static class URoofSnowChild_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URoofSnowChild_C*>(URoofSnowChild_C::StaticClass()->DefaultObject);

	return Default;
}

}


