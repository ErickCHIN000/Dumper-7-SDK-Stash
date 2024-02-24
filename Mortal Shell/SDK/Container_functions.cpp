#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Container.Container_C
// (None)

class UClass* UContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Container_C");

	return Clss;
}


// Container_C Container.Default__Container_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContainer_C* UContainer_C::GetDefaultObj()
{
	static class UContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainer_C*>(UContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Container.Container_C.ShowContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UContainer_C::ShowContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "ShowContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.HideContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UContainer_C::HideContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "HideContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDragItem_C*                 K2Node_DynamicCast_AsDrag_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UContainer_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, bool CallFunc_IsVisible_ReturnValue, class UDragItem_C* K2Node_DynamicCast_AsDrag_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "OnDrop");

	Params::UContainer_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_DynamicCast_AsDrag_Item = K2Node_DynamicCast_AsDrag_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container.Container_C.Get_Title_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UContainer_C::Get_Title_Text(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "Get_Title_Text");

	Params::UContainer_C_Get_Title_Text_Params Parms{};

	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container.Container_C.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragWidget_C*               CallFunc_CreateDragDropOperation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainer_C::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDragWidget_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "OnDragDetected");

	Params::UContainer_C_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.CallFunc_CreateDragDropOperation_ReturnValue = CallFunc_CreateDragDropOperation_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function Container.Container_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 K2Node_MakeStruct_EventReply                                     (None)

struct FEventReply UContainer_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& K2Node_MakeStruct_EventReply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "OnMouseButtonDown");

	Params::UContainer_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.K2Node_MakeStruct_EventReply = K2Node_MakeStruct_EventReply;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Container.Container_C.CloseUIButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContainer_C::CloseUIButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "CloseUIButtonPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "Tick");

	Params::UContainer_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Container.Container_C.PrimaryAtkPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContainer_C::PrimaryAtkPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "PrimaryAtkPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.PrimaryAtkReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContainer_C::PrimaryAtkReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "PrimaryAtkReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContainer_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "OnMouseLeave");

	Params::UContainer_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Container.Container_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContainer_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "OnMouseEnter");

	Params::UContainer_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Container.Container_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.DoNothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContainer_C::DoNothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "DoNothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.BndEvt__CloseWindowButton_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UContainer_C::BndEvt__CloseWindowButton_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "BndEvt__CloseWindowButton_K2Node_ComponentBoundEvent_170_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.BindInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UContainer_C::BindInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "BindInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Container.Container_C.ExecuteUbergraph_Container
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry_1                                        (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UContainer_C::ExecuteUbergraph_Container(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry_1, float K2Node_Event_InDeltaTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_4, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Container_C", "ExecuteUbergraph_Container");

	Params::UContainer_C_ExecuteUbergraph_Container_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface = K2Node_DynamicCast_AsInventory_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_MyGeometry_1 = K2Node_Event_MyGeometry_1;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_1 = K2Node_DynamicCast_AsInventory_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_2 = K2Node_DynamicCast_AsInventory_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_3 = K2Node_DynamicCast_AsInventory_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


