#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C
// (None)

class UClass* UWid_hud_GasMaskIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_hud_GasMaskIndicator_C");

	return Clss;
}


// wid_hud_GasMaskIndicator_C wid_hud_GasMaskIndicator.Default__wid_hud_GasMaskIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_hud_GasMaskIndicator_C* UWid_hud_GasMaskIndicator_C::GetDefaultObj()
{
	static class UWid_hud_GasMaskIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_hud_GasMaskIndicator_C*>(UWid_hud_GasMaskIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C.SetCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FilterCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_hud_GasMaskIndicator_C::SetCount(int32 FilterCount, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_GasMaskIndicator_C", "SetCount");

	Params::UWid_hud_GasMaskIndicator_C_SetCount_Params Parms{};

	Parms.FilterCount = FilterCount;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsEmpty                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_hud_GasMaskIndicator_C::SetEmpty(bool IsEmpty, float CallFunc_Conv_BoolToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_GasMaskIndicator_C", "SetEmpty");

	Params::UWid_hud_GasMaskIndicator_C_SetEmpty_Params Parms{};

	Parms.IsEmpty = IsEmpty;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_hud_GasMaskIndicator.wid_hud_GasMaskIndicator_C.SetProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_hud_GasMaskIndicator_C::SetProgress(float Progress, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_hud_GasMaskIndicator_C", "SetProgress");

	Params::UWid_hud_GasMaskIndicator_C_SetProgress_Params Parms{};

	Parms.Progress = Progress;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


