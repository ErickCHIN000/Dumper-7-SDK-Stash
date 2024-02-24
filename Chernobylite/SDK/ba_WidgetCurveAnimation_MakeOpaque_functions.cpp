#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_WidgetCurveAnimation_MakeOpaque.ba_WidgetCurveAnimation_MakeOpaque_C
// (Actor)

class UClass* Aba_WidgetCurveAnimation_MakeOpaque_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_WidgetCurveAnimation_MakeOpaque_C");

	return Clss;
}


// ba_WidgetCurveAnimation_MakeOpaque_C ba_WidgetCurveAnimation_MakeOpaque.Default__ba_WidgetCurveAnimation_MakeOpaque_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_WidgetCurveAnimation_MakeOpaque_C* Aba_WidgetCurveAnimation_MakeOpaque_C::GetDefaultObj()
{
	static class Aba_WidgetCurveAnimation_MakeOpaque_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_WidgetCurveAnimation_MakeOpaque_C*>(Aba_WidgetCurveAnimation_MakeOpaque_C::StaticClass()->DefaultObject);

	return Default;
}

}


