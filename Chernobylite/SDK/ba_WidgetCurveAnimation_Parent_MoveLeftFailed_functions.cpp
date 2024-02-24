#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_WidgetCurveAnimation_Parent_MoveLeftFailed.ba_WidgetCurveAnimation_Parent_MoveLeftFailed_C
// (Actor)

class UClass* Aba_WidgetCurveAnimation_Parent_MoveLeftFailed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_WidgetCurveAnimation_Parent_MoveLeftFailed_C");

	return Clss;
}


// ba_WidgetCurveAnimation_Parent_MoveLeftFailed_C ba_WidgetCurveAnimation_Parent_MoveLeftFailed.Default__ba_WidgetCurveAnimation_Parent_MoveLeftFailed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_WidgetCurveAnimation_Parent_MoveLeftFailed_C* Aba_WidgetCurveAnimation_Parent_MoveLeftFailed_C::GetDefaultObj()
{
	static class Aba_WidgetCurveAnimation_Parent_MoveLeftFailed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_WidgetCurveAnimation_Parent_MoveLeftFailed_C*>(Aba_WidgetCurveAnimation_Parent_MoveLeftFailed_C::StaticClass()->DefaultObject);

	return Default;
}

}


