#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GhettoLayout.GhettoLayout_C
// (None)

class UClass* UGhettoLayout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GhettoLayout_C");

	return Clss;
}


// GhettoLayout_C GhettoLayout.Default__GhettoLayout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGhettoLayout_C* UGhettoLayout_C::GetDefaultObj()
{
	static class UGhettoLayout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGhettoLayout_C*>(UGhettoLayout_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GhettoLayout.GhettoLayout_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              LocalDraggedSlot                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDragItem_C*                 K2Node_DynamicCast_AsDrag_Item                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDragWidget_C*               K2Node_DynamicCast_AsDrag_Widget                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_AbsoluteToLocal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInventoryHUDInterface_C>K2Node_DynamicCast_AsInventory_HUDInterface_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGhettoLayout_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, int32 LocalDraggedSlot, bool NewLocalVar_0, class UDragItem_C* K2Node_DynamicCast_AsDrag_Item, bool K2Node_DynamicCast_bSuccess, class UDragWidget_C* K2Node_DynamicCast_AsDrag_Widget, bool K2Node_DynamicCast_bSuccess_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, TScriptInterface<class IInventoryHUDInterface_C> K2Node_DynamicCast_AsInventory_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhettoLayout_C", "OnDrop");

	Params::UGhettoLayout_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.LocalDraggedSlot = LocalDraggedSlot;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_DynamicCast_AsDrag_Item = K2Node_DynamicCast_AsDrag_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsDrag_Widget = K2Node_DynamicCast_AsDrag_Widget;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue = CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue;
	Parms.CallFunc_AbsoluteToLocal_ReturnValue = CallFunc_AbsoluteToLocal_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface = K2Node_DynamicCast_AsInventory_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_1 = K2Node_DynamicCast_AsInventory_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsInventory_HUDInterface_2 = K2Node_DynamicCast_AsInventory_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GhettoLayout.GhettoLayout_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGhettoLayout_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhettoLayout_C", "Tick");

	Params::UGhettoLayout_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GhettoLayout.GhettoLayout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGhettoLayout_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhettoLayout_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GhettoLayout.GhettoLayout_C.ExecuteUbergraph_GhettoLayout
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory_Slot_C*>   K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UGhettoLayout_C::ExecuteUbergraph_GhettoLayout(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<class UInventory_Slot_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GhettoLayout_C", "ExecuteUbergraph_GhettoLayout");

	Params::UGhettoLayout_C_ExecuteUbergraph_GhettoLayout_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}


