#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_WidgetCurveAnimation_ScaleUpInventory.ba_WidgetCurveAnimation_ScaleUpInventory_C
// (Actor)

class UClass* Aba_WidgetCurveAnimation_ScaleUpInventory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_WidgetCurveAnimation_ScaleUpInventory_C");

	return Clss;
}


// ba_WidgetCurveAnimation_ScaleUpInventory_C ba_WidgetCurveAnimation_ScaleUpInventory.Default__ba_WidgetCurveAnimation_ScaleUpInventory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_WidgetCurveAnimation_ScaleUpInventory_C* Aba_WidgetCurveAnimation_ScaleUpInventory_C::GetDefaultObj()
{
	static class Aba_WidgetCurveAnimation_ScaleUpInventory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_WidgetCurveAnimation_ScaleUpInventory_C*>(Aba_WidgetCurveAnimation_ScaleUpInventory_C::StaticClass()->DefaultObject);

	return Default;
}

}


