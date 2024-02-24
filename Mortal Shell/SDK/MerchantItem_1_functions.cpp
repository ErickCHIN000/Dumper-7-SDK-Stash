#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MerchantItem.MerchantItem_C
// (None)

class UClass* UMerchantItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MerchantItem_C");

	return Clss;
}


// MerchantItem_C MerchantItem.Default__MerchantItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMerchantItem_C* UMerchantItem_C::GetDefaultObj()
{
	static class UMerchantItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMerchantItem_C*>(UMerchantItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MerchantItem.MerchantItem_C.DisplayTextFromAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UMerchantItem_C::DisplayTextFromAmount(int32 Value, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText Temp_text_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "DisplayTextFromAmount");

	Params::UMerchantItem_C_DisplayTextFromAmount_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MerchantItem.MerchantItem_C.IncreaseHeldAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantItem_C::IncreaseHeldAmount(class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "IncreaseHeldAmount");

	Params::UMerchantItem_C_IncreaseHeldAmount_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.GetPlayerItemCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerAmount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemAmount                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantItem_C::GetPlayerItemCount(class FName ItemId, int32* PlayerAmount, int32 ItemAmount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "GetPlayerItemCount");

	Params::UMerchantItem_C_GetPlayerItemCount_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.ItemAmount = ItemAmount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerAmount != nullptr)
		*PlayerAmount = Parms.PlayerAmount;

}


// Function MerchantItem.MerchantItem_C.DecreaseAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_DisplayTextFromAmount_ReturnValue                       (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UMerchantItem_C::DecreaseAmount(class FText CallFunc_DisplayTextFromAmount_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "DecreaseAmount");

	Params::UMerchantItem_C_DecreaseAmount_Params Parms{};

	Parms.CallFunc_DisplayTextFromAmount_ReturnValue = CallFunc_DisplayTextFromAmount_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MerchantItem.MerchantItem_C.SetHighlighted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantItem_C::SetHighlighted(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "SetHighlighted");

	Params::UMerchantItem_C_SetHighlighted_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMerchantItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.Reinitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Cost                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantItem_C::Reinitialize(int32 ItemIndex, const struct FInventoryItem& Item, int32 Cost, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "Reinitialize");

	Params::UMerchantItem_C_Reinitialize_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Item = Item;
	Parms.Cost = Cost;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMerchantItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMerchantItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "PreConstruct");

	Params::UMerchantItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMerchantItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMerchantItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMerchantItem_C::BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "BndEvt__Background_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.SetToGlimpseBased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantItem_C::SetToGlimpseBased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "SetToGlimpseBased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.SetToTarBased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantItem_C::SetToTarBased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "SetToTarBased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantItem.MerchantItem_C.ExecuteUbergraph_MerchantItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bHighlighted                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// int32                              K2Node_CustomEvent_ItemIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_CustomEvent_Item                                          (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Cost                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_DisplayTextFromAmount_ReturnValue                       (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        CallFunc_CheckItemName_ReturnValue                               (None)
// int32                              CallFunc_GetPlayerItemCount_PlayerAmount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantItem_C::ExecuteUbergraph_MerchantItem(int32 EntryPoint, bool Temp_bool_Variable, bool K2Node_CustomEvent_bHighlighted, const struct FSlateBrush& K2Node_Select_Default, int32 K2Node_CustomEvent_ItemIndex, const struct FInventoryItem& K2Node_CustomEvent_Item, int32 K2Node_CustomEvent_Cost, int32 K2Node_CustomEvent_Amount, class FText CallFunc_DisplayTextFromAmount_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_CheckItemName_ReturnValue, int32 CallFunc_GetPlayerItemCount_PlayerAmount, class FText CallFunc_Conv_IntToText_ReturnValue_1, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "ExecuteUbergraph_MerchantItem");

	Params::UMerchantItem_C_ExecuteUbergraph_MerchantItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_bHighlighted = K2Node_CustomEvent_bHighlighted;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CustomEvent_ItemIndex = K2Node_CustomEvent_ItemIndex;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_CustomEvent_Cost = K2Node_CustomEvent_Cost;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_DisplayTextFromAmount_ReturnValue = CallFunc_DisplayTextFromAmount_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_CheckItemName_ReturnValue = CallFunc_CheckItemName_ReturnValue;
	Parms.CallFunc_GetPlayerItemCount_PlayerAmount = CallFunc_GetPlayerItemCount_PlayerAmount;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.OnItemClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMerchantItem_C*             Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantItem_C::OnItemClicked__DelegateSignature(class UMerchantItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "OnItemClicked__DelegateSignature");

	Params::UMerchantItem_C_OnItemClicked__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.OnItemReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMerchantItem_C*             Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantItem_C::OnItemReleased__DelegateSignature(class UMerchantItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "OnItemReleased__DelegateSignature");

	Params::UMerchantItem_C_OnItemReleased__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.OnItemPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMerchantItem_C*             Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantItem_C::OnItemPressed__DelegateSignature(class UMerchantItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "OnItemPressed__DelegateSignature");

	Params::UMerchantItem_C_OnItemPressed__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.OnItemUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantItem_C::OnItemUnhovered__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "OnItemUnhovered__DelegateSignature");

	Params::UMerchantItem_C_OnItemUnhovered__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantItem.MerchantItem_C.OnItemHover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantItem_C::OnItemHover__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantItem_C", "OnItemHover__DelegateSignature");

	Params::UMerchantItem_C_OnItemHover__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}

}


