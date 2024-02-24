#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LevelSelectorMenu.wid_LevelSelectorMenu_C
// (None)

class UClass* UWid_LevelSelectorMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LevelSelectorMenu_C");

	return Clss;
}


// wid_LevelSelectorMenu_C wid_LevelSelectorMenu.Default__wid_LevelSelectorMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LevelSelectorMenu_C* UWid_LevelSelectorMenu_C::GetDefaultObj()
{
	static class UWid_LevelSelectorMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LevelSelectorMenu_C*>(UWid_LevelSelectorMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelectorMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "PreConstruct");

	Params::UWid_LevelSelectorMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "BndEvt__Use_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "BndEvt__Split_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.DetailsKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::DetailsKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "DetailsKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.HideDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::HideDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "HideDetails");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.HideStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_LevelSelectorMenu_C::HideStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "HideStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelectorMenu.wid_LevelSelectorMenu_C.ExecuteUbergraph_wid_LevelSelectorMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (UObjectWrapper)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IWid_IMissionAssigmentApp_C>CallFunc_Accept_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_v3_Entry_C*   K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRenderOpacity_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class Abp_MissionSelection_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Abp_MissionSelection_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelectorMenu_C::ExecuteUbergraph_wid_LevelSelectorMenu(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IWid_IMissionAssigmentApp_C> CallFunc_Accept_self_CastInput, bool Temp_bool_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_v3_Entry_C* K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, TArray<class Abp_MissionSelection_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Abp_MissionSelection_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelectorMenu_C", "ExecuteUbergraph_wid_LevelSelectorMenu");

	Params::UWid_LevelSelectorMenu_C_ExecuteUbergraph_wid_LevelSelectorMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Accept_self_CastInput = CallFunc_Accept_self_CastInput;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1 = K2Node_DynamicCast_AsWid_Food_Panel_V_3_Entry_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetRenderOpacity_ReturnValue = CallFunc_GetRenderOpacity_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


