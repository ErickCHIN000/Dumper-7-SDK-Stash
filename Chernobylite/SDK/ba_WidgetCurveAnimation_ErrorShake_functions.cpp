#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_WidgetCurveAnimation_ErrorShake.ba_WidgetCurveAnimation_ErrorShake_C
// (Actor)

class UClass* Aba_WidgetCurveAnimation_ErrorShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_WidgetCurveAnimation_ErrorShake_C");

	return Clss;
}


// ba_WidgetCurveAnimation_ErrorShake_C ba_WidgetCurveAnimation_ErrorShake.Default__ba_WidgetCurveAnimation_ErrorShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_WidgetCurveAnimation_ErrorShake_C* Aba_WidgetCurveAnimation_ErrorShake_C::GetDefaultObj()
{
	static class Aba_WidgetCurveAnimation_ErrorShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_WidgetCurveAnimation_ErrorShake_C*>(Aba_WidgetCurveAnimation_ErrorShake_C::StaticClass()->DefaultObject);

	return Default;
}

}

