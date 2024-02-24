#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CraftingProgressbar.UMG_CraftingProgressbar_C
// (None)

class UClass* UUMG_CraftingProgressbar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CraftingProgressbar_C");

	return Clss;
}


// UMG_CraftingProgressbar_C UMG_CraftingProgressbar.Default__UMG_CraftingProgressbar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CraftingProgressbar_C* UUMG_CraftingProgressbar_C::GetDefaultObj()
{
	static class UUMG_CraftingProgressbar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CraftingProgressbar_C*>(UUMG_CraftingProgressbar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CraftingProgressbar.UMG_CraftingProgressbar_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CraftingProgressbar_C::SetProgress(float Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingProgressbar_C", "SetProgress");

	Params::UUMG_CraftingProgressbar_C_SetProgress_Params Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CraftingProgressbar.UMG_CraftingProgressbar_C.ExecuteUbergraph_UMG_CraftingProgressbar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CraftingProgressbar_C::ExecuteUbergraph_UMG_CraftingProgressbar(int32 EntryPoint, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_Percent, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingProgressbar_C", "ExecuteUbergraph_UMG_CraftingProgressbar");

	Params::UUMG_CraftingProgressbar_C_ExecuteUbergraph_UMG_CraftingProgressbar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


