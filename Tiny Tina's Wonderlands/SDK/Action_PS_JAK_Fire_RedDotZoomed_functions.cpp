#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_PS_JAK_Fire_RedDotZoomed.Action_PS_JAK_Fire_RedDotZoomed_C
// (None)

class UClass* UAction_PS_JAK_Fire_RedDotZoomed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_PS_JAK_Fire_RedDotZoomed_C");

	return Clss;
}


// Action_PS_JAK_Fire_RedDotZoomed_C Action_PS_JAK_Fire_RedDotZoomed.Default__Action_PS_JAK_Fire_RedDotZoomed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_PS_JAK_Fire_RedDotZoomed_C* UAction_PS_JAK_Fire_RedDotZoomed_C::GetDefaultObj()
{
	static class UAction_PS_JAK_Fire_RedDotZoomed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_PS_JAK_Fire_RedDotZoomed_C*>(UAction_PS_JAK_Fire_RedDotZoomed_C::StaticClass()->DefaultObject);

	return Default;
}

}


