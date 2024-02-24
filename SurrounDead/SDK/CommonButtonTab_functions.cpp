#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CommonButtonTab.CommonButtonTab_C
// (None)

class UClass* UCommonButtonTab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonTab_C");

	return Clss;
}


// CommonButtonTab_C CommonButtonTab.Default__CommonButtonTab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommonButtonTab_C* UCommonButtonTab_C::GetDefaultObj()
{
	static class UCommonButtonTab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonTab_C*>(UCommonButtonTab_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CommonButtonTab.CommonButtonTab_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPhotoModeWidget_C*          PhotoModeWidgetRef                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UCommonButtonTab_C::Initialize(class UPhotoModeWidget_C* PhotoModeWidgetRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonTab_C", "Initialize");

	Params::UCommonButtonTab_C_Initialize_Params Parms{};

	Parms.PhotoModeWidgetRef = PhotoModeWidgetRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonButtonTab.CommonButtonTab_C.SetSelectedTabStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonButtonTab_C::SetSelectedTabStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonTab_C", "SetSelectedTabStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonButtonTab.CommonButtonTab_C.SetUnselectedTabStyle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCommonButtonTab_C::SetUnselectedTabStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonTab_C", "SetUnselectedTabStyle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonButtonTab.CommonButtonTab_C.BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCommonButtonTab_C::BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonTab_C", "BndEvt__Button_99_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CommonButtonTab.CommonButtonTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonButtonTab_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonTab_C", "PreConstruct");

	Params::UCommonButtonTab_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonButtonTab.CommonButtonTab_C.ExecuteUbergraph_CommonButtonTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhotoModeWidget_C*          K2Node_CustomEvent_PhotoModeWidgetRef                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPhotoModeDataInterface_C>K2Node_DynamicCast_AsPhoto_Mode_Data_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (NoDestructor, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast_1                       (NoDestructor, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast_2                       (NoDestructor, HasGetValueTypeHash)

void UCommonButtonTab_C::ExecuteUbergraph_CommonButtonTab(int32 EntryPoint, class UPhotoModeWidget_C* K2Node_CustomEvent_PhotoModeWidgetRef, TScriptInterface<class IPhotoModeDataInterface_C> K2Node_DynamicCast_AsPhoto_Mode_Data_Interface, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle_2, bool K2Node_Event_IsDesignTime, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_1, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonTab_C", "ExecuteUbergraph_CommonButtonTab");

	Params::UCommonButtonTab_C_ExecuteUbergraph_CommonButtonTab_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PhotoModeWidgetRef = K2Node_CustomEvent_PhotoModeWidgetRef;
	Parms.K2Node_DynamicCast_AsPhoto_Mode_Data_Interface = K2Node_DynamicCast_AsPhoto_Mode_Data_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_ButtonStyle_1 = K2Node_MakeStruct_ButtonStyle_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_ButtonStyle_2 = K2Node_MakeStruct_ButtonStyle_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast_1 = K2Node_MakeStruct_ImageSize_ImplicitCast_1;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast_2 = K2Node_MakeStruct_ImageSize_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


