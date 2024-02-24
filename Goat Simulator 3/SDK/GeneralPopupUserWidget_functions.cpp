#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GeneralPopupUserWidget.GeneralPopupUserWidget_C
// (None)

class UClass* UGeneralPopupUserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeneralPopupUserWidget_C");

	return Clss;
}


// GeneralPopupUserWidget_C GeneralPopupUserWidget.Default__GeneralPopupUserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGeneralPopupUserWidget_C* UGeneralPopupUserWidget_C::GetDefaultObj()
{
	static class UGeneralPopupUserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeneralPopupUserWidget_C*>(UGeneralPopupUserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_RequiresUserInputToCancel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UGeneralPopupUserWidget_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_RequiresUserInputToCancel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnKeyDown");

	Params::UGeneralPopupUserWidget_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_RequiresUserInputToCancel_ReturnValue = CallFunc_RequiresUserInputToCancel_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_2                                   (None)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupButtonUserWidget_C*    K2Node_DynamicCast_AsPopup_Button_User_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue_1                              (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue_2                              (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UGeneralPopupUserWidget_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, int32 Temp_int_Array_Index_Variable, const struct FEventReply& CallFunc_Handled_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue_2, bool CallFunc_HasAnyChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_1, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnFocusReceived");

	Params::UGeneralPopupUserWidget_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Handled_ReturnValue_2 = CallFunc_Handled_ReturnValue_2;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsPopup_Button_User_Widget = K2Node_DynamicCast_AsPopup_Button_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetUserFocus_ReturnValue_1 = CallFunc_SetUserFocus_ReturnValue_1;
	Parms.CallFunc_SetUserFocus_ReturnValue_2 = CallFunc_SetUserFocus_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.GetInitialWidgetFocus
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupButtonUserWidget_C*    K2Node_DynamicCast_AsPopup_Button_User_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPopupButtonUserWidget_C*    K2Node_DynamicCast_AsPopup_Button_User_Widget_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetInitialWidgetFocus_ReturnValue_2                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UGeneralPopupUserWidget_C::GetInitialWidgetFocus(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetInitialWidgetFocus_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "GetInitialWidgetFocus");

	Params::UGeneralPopupUserWidget_C_GetInitialWidgetFocus_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsPopup_Button_User_Widget = K2Node_DynamicCast_AsPopup_Button_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue = CallFunc_GetInitialWidgetFocus_ReturnValue;
	Parms.K2Node_DynamicCast_AsPopup_Button_User_Widget_1 = K2Node_DynamicCast_AsPopup_Button_User_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_1 = CallFunc_GetInitialWidgetFocus_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetInitialWidgetFocus_ReturnValue_2 = CallFunc_GetInitialWidgetFocus_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnFail_A3E57448463014044E667FAE57A172D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralPopupUserWidget_C::OnFail_A3E57448463014044E667FAE57A172D3(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnFail_A3E57448463014044E667FAE57A172D3");

	Params::UGeneralPopupUserWidget_C_OnFail_A3E57448463014044E667FAE57A172D3_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSuccess_A3E57448463014044E667FAE57A172D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGeneralPopupUserWidget_C::OnSuccess_A3E57448463014044E667FAE57A172D3(class UTexture2DDynamic* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnSuccess_A3E57448463014044E667FAE57A172D3");

	Params::UGeneralPopupUserWidget_C_OnSuccess_A3E57448463014044E667FAE57A172D3_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSetLabels
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Body                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGeneralPopupUserWidget_C::OnSetLabels(class FText& Title, class FText& Body)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnSetLabels");

	Params::UGeneralPopupUserWidget_C_OnSetLabels_Params Parms{};

	Parms.Title = Title;
	Parms.Body = Body;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnCreatedButton
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPopupButton                Button                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGeneralPopupUserWidget_C::OnCreatedButton(struct FPopupButton& Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnCreatedButton");

	Params::UGeneralPopupUserWidget_C_OnCreatedButton_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnPopupButtonInteracted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGeneralPopupUserWidget_C::OnPopupButtonInteracted(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnPopupButtonInteracted");

	Params::UGeneralPopupUserWidget_C_OnPopupButtonInteracted_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGeneralPopupUserWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.BndEvt__OutOfFocusArea_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UGeneralPopupUserWidget_C::BndEvt__OutOfFocusArea_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "BndEvt__OutOfFocusArea_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGeneralPopupUserWidget_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnRemovedFromFocusPath");

	Params::UGeneralPopupUserWidget_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSetImage
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGeneralPopupUserWidget_C::OnSetImage(struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnSetImage");

	Params::UGeneralPopupUserWidget_C_OnSetImage_Params Parms{};

	Parms.Brush = Brush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.OnSetImageURL
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      ImageURL                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGeneralPopupUserWidget_C::OnSetImageURL(const class FString& ImageURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "OnSetImageURL");

	Params::UGeneralPopupUserWidget_C_OnSetImageURL_Params Parms{};

	Parms.ImageURL = ImageURL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralPopupUserWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "PreConstruct");

	Params::UGeneralPopupUserWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeneralPopupUserWidget.GeneralPopupUserWidget_C.ExecuteUbergraph_GeneralPopupUserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class FText                        K2Node_Event_Body                                                (ConstParm)
// struct FPopupButton                K2Node_Event_Button                                              (ConstParm)
// class UGGUserWidget*               K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_CustomEvent_PointerEvent                                  (None)
// struct FKeyEvent                   K2Node_CustomEvent_KeyEvent                                      (None)
// class UPopupButtonUserWidget_C*    K2Node_DynamicCast_AsPopup_Button_User_Widget                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RequiresUserInputToDismiss_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Event_Brush                                               (ConstParm)
// bool                               CallFunc_IsTopMostPopup_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_ImageURL                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    CallFunc_GetImage_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UPopupButtonUserWidget_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetImageFromIconSet_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGOnlineManager*            CallFunc_GetOnlineManager_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGeneralPopupUserWidget_C::ExecuteUbergraph_GeneralPopupUserWidget(int32 EntryPoint, class UTexture2DDynamic* K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic* Temp_object_Variable, class FText K2Node_Event_Title, class FText K2Node_Event_Body, const struct FPopupButton& K2Node_Event_Button, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, class UPopupButtonUserWidget_C* K2Node_DynamicCast_AsPopup_Button_User_Widget, bool K2Node_DynamicCast_bSuccess, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_RequiresUserInputToDismiss_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FFocusEvent& K2Node_Event_InFocusEvent, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, const struct FSlateBrush& K2Node_Event_Brush, bool CallFunc_IsTopMostPopup_ReturnValue, const class FString& K2Node_Event_ImageURL, bool CallFunc_BooleanAND_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue, class UTexture* CallFunc_GetImage_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPopupButtonUserWidget_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_SetImageFromIconSet_ReturnValue, class UGGOnlineManager* CallFunc_GetOnlineManager_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GeneralPopupUserWidget_C", "ExecuteUbergraph_GeneralPopupUserWidget");

	Params::UGeneralPopupUserWidget_C_ExecuteUbergraph_GeneralPopupUserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_Body = K2Node_Event_Body;
	Parms.K2Node_Event_Button = K2Node_Event_Button;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_PointerEvent = K2Node_CustomEvent_PointerEvent;
	Parms.K2Node_CustomEvent_KeyEvent = K2Node_CustomEvent_KeyEvent;
	Parms.K2Node_DynamicCast_AsPopup_Button_User_Widget = K2Node_DynamicCast_AsPopup_Button_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_RequiresUserInputToDismiss_ReturnValue = CallFunc_RequiresUserInputToDismiss_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_Event_Brush = K2Node_Event_Brush;
	Parms.CallFunc_IsTopMostPopup_ReturnValue = CallFunc_IsTopMostPopup_ReturnValue;
	Parms.K2Node_Event_ImageURL = K2Node_Event_ImageURL;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOnlineManager_ReturnValue = CallFunc_GetOnlineManager_ReturnValue;
	Parms.CallFunc_GetImage_ReturnValue = CallFunc_GetImage_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SetImageFromIconSet_ReturnValue = CallFunc_SetImageFromIconSet_ReturnValue;
	Parms.CallFunc_GetOnlineManager_ReturnValue_1 = CallFunc_GetOnlineManager_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


