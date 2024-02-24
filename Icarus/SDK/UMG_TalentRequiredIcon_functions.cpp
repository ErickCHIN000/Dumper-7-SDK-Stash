#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C
// (None)

class UClass* UUMG_TalentRequiredIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_TalentRequiredIcon_C");

	return Clss;
}


// UMG_TalentRequiredIcon_C UMG_TalentRequiredIcon.Default__UMG_TalentRequiredIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_TalentRequiredIcon_C* UUMG_TalentRequiredIcon_C::GetDefaultObj()
{
	static class UUMG_TalentRequiredIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_TalentRequiredIcon_C*>(UUMG_TalentRequiredIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.BndEvt__UMG_TalentRequiredIcon_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_TalentRequiredIcon_C::BndEvt__UMG_TalentRequiredIcon_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentRequiredIcon_C", "BndEvt__UMG_TalentRequiredIcon_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.Override
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDLCPackageDataRowHandle    DLCRequired                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_TalentRequiredIcon_C::Override(const struct FTalentsRowHandle& Talent, bool Unlocked, const struct FDLCPackageDataRowHandle& DLCRequired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentRequiredIcon_C", "Override");

	Params::UUMG_TalentRequiredIcon_C_Override_Params Parms{};

	Parms.Talent = Talent;
	Parms.Unlocked = Unlocked;
	Parms.DLCRequired = DLCRequired;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentRequiredIcon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentRequiredIcon_C", "PreConstruct");

	Params::UUMG_TalentRequiredIcon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.DevLocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DLC                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_TalentRequiredIcon_C::DevLocked(bool DLC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentRequiredIcon_C", "DevLocked");

	Params::UUMG_TalentRequiredIcon_C_DevLocked_Params Parms{};

	Parms.DLC = DLC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_TalentRequiredIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentRequiredIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C.ExecuteUbergraph_UMG_TalentRequiredIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FTalentsRowHandle           K2Node_CustomEvent_Talent                                        (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Unlocked                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDLCPackageDataRowHandle    K2Node_CustomEvent_DLCRequired                                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDLCPackageData             CallFunc_GetDLCPackageDataStruct_DLCPackageData                  (None)
// enum class EValid                  CallFunc_GetDLCPackageDataStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_4                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DLC                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_5                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_6                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_7                           (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)

void UUMG_TalentRequiredIcon_C::ExecuteUbergraph_UMG_TalentRequiredIcon(int32 EntryPoint, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable_2, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FTalentsRowHandle& K2Node_CustomEvent_Talent, bool K2Node_CustomEvent_Unlocked, const struct FDLCPackageDataRowHandle& K2Node_CustomEvent_DLCRequired, bool CallFunc_IsEmpty_ReturnValue, const struct FDLCPackageData& CallFunc_GetDLCPackageDataStruct_DLCPackageData, enum class EValid CallFunc_GetDLCPackageDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsEmpty_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_Event_IsDesignTime, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_4, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, bool K2Node_CustomEvent_DLC, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_5, class FText CallFunc_MakeLiteralText_ReturnValue_6, class FText CallFunc_MakeLiteralText_ReturnValue_7, class FText K2Node_Select_Default_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_Format_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_TalentRequiredIcon_C", "ExecuteUbergraph_UMG_TalentRequiredIcon");

	Params::UUMG_TalentRequiredIcon_C_ExecuteUbergraph_UMG_TalentRequiredIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_CustomEvent_Talent = K2Node_CustomEvent_Talent;
	Parms.K2Node_CustomEvent_Unlocked = K2Node_CustomEvent_Unlocked;
	Parms.K2Node_CustomEvent_DLCRequired = K2Node_CustomEvent_DLCRequired;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_GetDLCPackageDataStruct_DLCPackageData = CallFunc_GetDLCPackageDataStruct_DLCPackageData;
	Parms.CallFunc_GetDLCPackageDataStruct_Paths = CallFunc_GetDLCPackageDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_4 = CallFunc_MakeLiteralText_ReturnValue_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_CustomEvent_DLC = K2Node_CustomEvent_DLC;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_5 = CallFunc_MakeLiteralText_ReturnValue_5;
	Parms.CallFunc_MakeLiteralText_ReturnValue_6 = CallFunc_MakeLiteralText_ReturnValue_6;
	Parms.CallFunc_MakeLiteralText_ReturnValue_7 = CallFunc_MakeLiteralText_ReturnValue_7;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


