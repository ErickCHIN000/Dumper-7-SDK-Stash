#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RaderTargetComponent.RaderTargetComponent_C
// (None)

class UClass* URaderTargetComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RaderTargetComponent_C");

	return Clss;
}


// RaderTargetComponent_C RaderTargetComponent.Default__RaderTargetComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URaderTargetComponent_C* URaderTargetComponent_C::GetDefaultObj()
{
	static class URaderTargetComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URaderTargetComponent_C*>(URaderTargetComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


