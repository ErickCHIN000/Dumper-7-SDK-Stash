#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_IcarusCompassIcon.UMG_IcarusCompassIcon_C
// (None)

class UClass* UUMG_IcarusCompassIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_IcarusCompassIcon_C");

	return Clss;
}


// UMG_IcarusCompassIcon_C UMG_IcarusCompassIcon.Default__UMG_IcarusCompassIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_IcarusCompassIcon_C* UUMG_IcarusCompassIcon_C::GetDefaultObj()
{
	static class UUMG_IcarusCompassIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_IcarusCompassIcon_C*>(UUMG_IcarusCompassIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_IcarusCompassIcon.UMG_IcarusCompassIcon_C.OnMapComponentVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_IcarusCompassIcon_C::OnMapComponentVisibilityChanged(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_IcarusCompassIcon_C", "OnMapComponentVisibilityChanged");

	Params::UUMG_IcarusCompassIcon_C_OnMapComponentVisibilityChanged_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_IcarusCompassIcon.UMG_IcarusCompassIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_IcarusCompassIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_IcarusCompassIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_IcarusCompassIcon.UMG_IcarusCompassIcon_C.ExecuteUbergraph_UMG_IcarusCompassIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_LinearColorLinearColor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMapIconsData               CallFunc_GetMapIconsStruct_MapIcons                              (None)
// enum class EValid                  CallFunc_GetMapIconsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUMG_IcarusCompassIcon_C::ExecuteUbergraph_UMG_IcarusCompassIcon(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_NotEqual_LinearColorLinearColor_ReturnValue, const struct FMapIconsData& CallFunc_GetMapIconsStruct_MapIcons, enum class EValid CallFunc_GetMapIconsStruct_Paths, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_IcarusCompassIcon_C", "ExecuteUbergraph_UMG_IcarusCompassIcon");

	Params::UUMG_IcarusCompassIcon_C_ExecuteUbergraph_UMG_IcarusCompassIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_NotEqual_LinearColorLinearColor_ReturnValue = CallFunc_NotEqual_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_GetMapIconsStruct_MapIcons = CallFunc_GetMapIconsStruct_MapIcons;
	Parms.CallFunc_GetMapIconsStruct_Paths = CallFunc_GetMapIconsStruct_Paths;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


