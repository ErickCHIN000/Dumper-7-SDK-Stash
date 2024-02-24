#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AreaHighlightIndividual.WBP_AreaHighlightIndividual_C
// (None)

class UClass* UWBP_AreaHighlightIndividual_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AreaHighlightIndividual_C");

	return Clss;
}


// WBP_AreaHighlightIndividual_C WBP_AreaHighlightIndividual.Default__WBP_AreaHighlightIndividual_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AreaHighlightIndividual_C* UWBP_AreaHighlightIndividual_C::GetDefaultObj()
{
	static class UWBP_AreaHighlightIndividual_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AreaHighlightIndividual_C*>(UWBP_AreaHighlightIndividual_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AreaHighlightIndividual.WBP_AreaHighlightIndividual_C.UpdateKeyTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewKeyTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AreaHighlightIndividual_C::UpdateKeyTime(float NewKeyTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AreaHighlightIndividual_C", "UpdateKeyTime");

	Params::UWBP_AreaHighlightIndividual_C_UpdateKeyTime_Params Parms{};

	Parms.NewKeyTime = NewKeyTime;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


