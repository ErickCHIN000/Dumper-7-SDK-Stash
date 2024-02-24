#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MerchantPanel.MerchantPanel_C
// (None)

class UClass* UMerchantPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MerchantPanel_C");

	return Clss;
}


// MerchantPanel_C MerchantPanel.Default__MerchantPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMerchantPanel_C* UMerchantPanel_C::GetDefaultObj()
{
	static class UMerchantPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMerchantPanel_C*>(UMerchantPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MerchantPanel.MerchantPanel_C.OnClose_GoToAbilitiesMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::OnClose_GoToAbilitiesMenu(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnClose_GoToAbilitiesMenu");

	Params::UMerchantPanel_C_OnClose_GoToAbilitiesMenu_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::OnClose(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnClose");

	Params::UMerchantPanel_C_OnClose_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.Get_OpenAbilitiesMenu_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UMerchantPanel_C::Get_OpenAbilitiesMenu_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Get_OpenAbilitiesMenu_Visibility");

	Params::UMerchantPanel_C_Get_OpenAbilitiesMenu_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MerchantPanel.MerchantPanel_C.AbilitiesMenuCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::AbilitiesMenuCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "AbilitiesMenuCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.Sound_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::Sound_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Sound_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.Sound_CloseBulkBuy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::Sound_CloseBulkBuy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Sound_CloseBulkBuy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.ClearBoughtItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::ClearBoughtItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "ClearBoughtItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.Sound_Buy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::Sound_Buy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Sound_Buy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.BoughtItemsNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Local_Values                                                     (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantPanel_C::BoughtItemsNotify(const TArray<int32>& Local_Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_Array_Get_Item, TArray<int32>& CallFunc_Map_Values_Values, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BoughtItemsNotify");

	Params::UMerchantPanel_C_BoughtItemsNotify_Params Parms{};

	Parms.Local_Values = Local_Values;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.SetBoughtItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::SetBoughtItems(const struct FInventoryItem& InputPin, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "SetBoughtItems");

	Params::UMerchantPanel_C_SetBoughtItems_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.BuySingleItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_ItemIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             Local_MerchantItem                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DecreaseAmount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemFromIndex_bFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItemFromIndex_Item                                   (HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::BuySingleItem(int32 Local_ItemIndex, class UMerchantItem_C* Local_MerchantItem, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, bool CallFunc_DecreaseAmount_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class UMerchantItem_C* CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item, bool CallFunc_GetItemFromIndex_bFound, const struct FInventoryItem& CallFunc_GetItemFromIndex_Item, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BuySingleItem");

	Params::UMerchantPanel_C_BuySingleItem_Params Parms{};

	Parms.Local_ItemIndex = Local_ItemIndex;
	Parms.Local_MerchantItem = Local_MerchantItem;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_DecreaseAmount_ReturnValue = CallFunc_DecreaseAmount_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item = CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item;
	Parms.CallFunc_GetItemFromIndex_bFound = CallFunc_GetItemFromIndex_bFound;
	Parms.CallFunc_GetItemFromIndex_Item = CallFunc_GetItemFromIndex_Item;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.InitTarMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMerchantItem_C*             K2Node_DynamicCast_AsMerchant_Item                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantPanel_C::InitTarMode(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMerchantItem_C* K2Node_DynamicCast_AsMerchant_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "InitTarMode");

	Params::UMerchantPanel_C_InitTarMode_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMerchant_Item = K2Node_DynamicCast_AsMerchant_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.SetItemDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateItemEffectDescription_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateExtendedDescription_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateExtendedDescription_OutputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UMerchantPanel_C::SetItemDetails(const struct FInventoryItem& InputPin, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& CallFunc_CreateItemEffectDescription_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_GetItemFamiliarity_Value, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_CreateExtendedDescription_ReturnValue, bool CallFunc_CreateExtendedDescription_OutputPin, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "SetItemDetails");

	Params::UMerchantPanel_C_SetItemDetails_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_CreateItemEffectDescription_ReturnValue = CallFunc_CreateItemEffectDescription_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CreateExtendedDescription_ReturnValue = CallFunc_CreateExtendedDescription_ReturnValue;
	Parms.CallFunc_CreateExtendedDescription_OutputPin = CallFunc_CreateExtendedDescription_OutputPin;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.GetMerchant
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UMerchantPanel_C::GetMerchant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "GetMerchant");

	Params::UMerchantPanel_C_GetMerchant_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MerchantPanel.MerchantPanel_C.GetPlayerCurrencyAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShellBondingPoints_Points                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UMerchantPanel_C::GetPlayerCurrencyAmount(bool Temp_bool_Variable, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_GetShellBondingPoints_Points, int32 CallFunc_GetNamedPCInt_Value, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "GetPlayerCurrencyAmount");

	Params::UMerchantPanel_C_GetPlayerCurrencyAmount_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.CallFunc_GetShellBondingPoints_Points = CallFunc_GetShellBondingPoints_Points;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MerchantPanel.MerchantPanel_C.InitGlimpseMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMerchantItem_C*             K2Node_DynamicCast_AsMerchant_Item                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantPanel_C::InitGlimpseMode(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UMerchantItem_C* K2Node_DynamicCast_AsMerchant_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "InitGlimpseMode");

	Params::UMerchantPanel_C_InitGlimpseMode_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMerchant_Item = K2Node_DynamicCast_AsMerchant_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.GetPlayerItemCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayerAmount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantPanel_C::GetPlayerItemCount(class FName ItemId, int32* PlayerAmount, int32 Amount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "GetPlayerItemCount");

	Params::UMerchantPanel_C_GetPlayerItemCount_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerAmount != nullptr)
		*PlayerAmount = Parms.PlayerAmount;

}


// Function MerchantPanel.MerchantPanel_C.GetItemWidgetFromScrollBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              WidgetIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             AsMerchant_Item                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             K2Node_DynamicCast_AsMerchant_Item                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantPanel_C::GetItemWidgetFromScrollBox(int32 WidgetIndex, class UMerchantItem_C** AsMerchant_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, class UMerchantItem_C* K2Node_DynamicCast_AsMerchant_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "GetItemWidgetFromScrollBox");

	Params::UMerchantPanel_C_GetItemWidgetFromScrollBox_Params Parms{};

	Parms.WidgetIndex = WidgetIndex;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsMerchant_Item = K2Node_DynamicCast_AsMerchant_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsMerchant_Item != nullptr)
		*AsMerchant_Item = Parms.AsMerchant_Item;

}


// Function MerchantPanel.MerchantPanel_C.GetItemWidgetFromCache
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMerchantItem_C*             MerchItem                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             ReturnWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantPanel_C::GetItemWidgetFromCache(class UMerchantItem_C** MerchItem, class UMerchantItem_C* ReturnWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UMerchantItem_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UMerchantItem_C* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "GetItemWidgetFromCache");

	Params::UMerchantPanel_C_GetItemWidgetFromCache_Params Parms{};

	Parms.ReturnWidget = ReturnWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MerchItem != nullptr)
		*MerchItem = Parms.MerchItem;

}


// Function MerchantPanel.MerchantPanel_C.OnSelectedIndexChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::OnSelectedIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnSelectedIndexChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUsable_Branching_NPC_C*     Trader                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::Open(class AUsable_Branching_NPC_C* Trader)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Open");

	Params::UMerchantPanel_C_Open_Params Parms{};

	Parms.Trader = Trader;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.MerchPrevCmd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::MerchPrevCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "MerchPrevCmd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.MerchNextCmd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::MerchNextCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "MerchNextCmd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.ChangeSelectedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::ChangeSelectedItem(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "ChangeSelectedItem");

	Params::UMerchantPanel_C_ChangeSelectedItem_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.ClearItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::ClearItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "ClearItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.BuySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::BuySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BuySelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.UpdateCurrencyAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::UpdateCurrencyAmount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "UpdateCurrencyAmount");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.Reinitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::Reinitialize(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Reinitialize");

	Params::UMerchantPanel_C_Reinitialize_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.HandleItemHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::HandleItemHover(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "HandleItemHover");

	Params::UMerchantPanel_C_HandleItemHover_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.OnItemUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::OnItemUnhovered(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnItemUnhovered");

	Params::UMerchantPanel_C_OnItemUnhovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.UpdateMoreInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::UpdateMoreInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "UpdateMoreInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.OnBulkBuy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::OnBulkBuy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnBulkBuy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.UpdateBulkSlider
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::UpdateBulkSlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "UpdateBulkSlider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.ModifySelectedBulkBuyAmount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::ModifySelectedBulkBuyAmount(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "ModifySelectedBulkBuyAmount");

	Params::UMerchantPanel_C_ModifySelectedBulkBuyAmount_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.BulkNavLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::BulkNavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BulkNavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.BulkNavRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::BulkNavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BulkNavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.BulkBuyConfirmed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::BulkBuyConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BulkBuyConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.CloseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "CloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.CloseBulkBuy
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMerchantPanel_C::CloseBulkBuy(bool Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "CloseBulkBuy");

	Params::UMerchantPanel_C_CloseBulkBuy_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.BndEvt__Slider_BulkQuantity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::BndEvt__Slider_BulkQuantity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BndEvt__Slider_BulkQuantity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::UMerchantPanel_C_BndEvt__Slider_BulkQuantity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMerchantItem_C*             Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::OnItemClicked(class UMerchantItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnItemClicked");

	Params::UMerchantPanel_C_OnItemClicked_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.OnItemPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMerchantItem_C*             Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::OnItemPressed(class UMerchantItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnItemPressed");

	Params::UMerchantPanel_C_OnItemPressed_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.OnItemReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMerchantItem_C*             Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::OnItemReleased(class UMerchantItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OnItemReleased");

	Params::UMerchantPanel_C_OnItemReleased_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.BulkBuyPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::BulkBuyPressed(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BulkBuyPressed");

	Params::UMerchantPanel_C_BulkBuyPressed_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.BulkBuyCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::BulkBuyCancel(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BulkBuyCancel");

	Params::UMerchantPanel_C_BulkBuyCancel_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.CloseMouseClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::CloseMouseClicked(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "CloseMouseClicked");

	Params::UMerchantPanel_C_CloseMouseClicked_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.PayPrice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::PayPrice(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "PayPrice");

	Params::UMerchantPanel_C_PayPrice_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.BuySelected_BulkBuy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::BuySelected_BulkBuy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BuySelected_BulkBuy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.OpenAbilities_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::OpenAbilities_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OpenAbilities_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.OpenAbilities_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMerchantPanel_C::OpenAbilities_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "OpenAbilities_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MerchantPanel.MerchantPanel_C.BndEvt__UI_Controller_OpenAbilitiesMenu_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::BndEvt__UI_Controller_OpenAbilitiesMenu_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "BndEvt__UI_Controller_OpenAbilitiesMenu_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	Params::UMerchantPanel_C_BndEvt__UI_Controller_OpenAbilitiesMenu_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MerchantPanel.MerchantPanel_C.ExecuteUbergraph_MerchantPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromCache_MerchItem                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Branching_NPC_C*     K2Node_CustomEvent_Trader                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FMerchantItem>       CallFunc_GetStock_NewParam                                       (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_SelectedIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_2            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_3            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget_4                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget_3                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_4            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemFromIndex_bFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItemFromIndex_Item                                   (HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_CheckItemName_ReturnValue                               (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_5            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemFromIndex_bFound_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItemFromIndex_Item_1                                 (HasGetValueTypeHash)
// class FText                        CallFunc_CheckItemName_ReturnValue_1                             (None)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             K2Node_CustomEvent_Widget_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMerchantItem_C*             K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ControllerButton_C*      K2Node_CustomEvent_ControllerButton_2                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_CustomEvent_ControllerButton_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMerchantItem_C*             K2Node_DynamicCast_AsMerchant_Item                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMerchantItem               CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_ShouldItemBeDisplayed_bDisplay                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNotSoldCount_NotSoldCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItem_bFound                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItem_OutRow                                          (HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_CustomEvent_ControllerButton                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCurrencyAmount_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCurrencyAmount_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPlayerCurrencyAmount_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMerchantPanel_C::ExecuteUbergraph_MerchantPanel(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Conv_IntToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UMerchantItem_C* CallFunc_GetItemWidgetFromCache_MerchItem, class AUsable_Branching_NPC_C* K2Node_CustomEvent_Trader, class UMerchantItem_C* CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam, int32 CallFunc_Array_Length_ReturnValue, int32 K2Node_CustomEvent_Delta_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, class UMerchantItem_C* CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue, bool Temp_bool_Variable, int32 K2Node_CustomEvent_SelectedIndex, class UMerchantItem_C* CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_2, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UMerchantItem_C* CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_3, class UWidget* K2Node_CustomEvent_Widget_4, int32 CallFunc_Array_Find_ReturnValue, class UWidget* K2Node_CustomEvent_Widget_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 CallFunc_Add_IntInt_ReturnValue_3, class UMerchantItem_C* CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GetItemFromIndex_bFound, const struct FInventoryItem& CallFunc_GetItemFromIndex_Item, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_CheckItemName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UMerchantItem_C* CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_5, float CallFunc_Conv_IntToFloat_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GetItemFromIndex_bFound_1, const struct FInventoryItem& CallFunc_GetItemFromIndex_Item_1, class FText CallFunc_CheckItemName_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_Delta, class FText CallFunc_Conv_IntToText_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Clamp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_Sound, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, float K2Node_ComponentBoundEvent_Value, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, class UMerchantItem_C* K2Node_CustomEvent_Widget_2, class UMerchantItem_C* K2Node_CustomEvent_Widget_1, class UMerchantItem_C* K2Node_CustomEvent_Widget, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_RemoveChildAt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, class UUI_ControllerButton_C* K2Node_CustomEvent_ControllerButton_2, class UUI_ControllerButton_C* K2Node_CustomEvent_ControllerButton_1, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UMerchantItem_C* K2Node_DynamicCast_AsMerchant_Item, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable, const struct FMerchantItem& CallFunc_Array_Get_Item, bool CallFunc_ShouldItemBeDisplayed_bDisplay, int32 CallFunc_GetNotSoldCount_NotSoldCount, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow, class UUI_ControllerButton_C* K2Node_CustomEvent_ControllerButton, int32 K2Node_CustomEvent_Amount, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_GetPlayerCurrencyAmount_ReturnValue, int32 CallFunc_GetPlayerCurrencyAmount_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_GetPlayerCurrencyAmount_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1, const struct FLinearColor& Temp_struct_Variable, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_2, const struct FLinearColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_Not_PreBool_ReturnValue_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MerchantPanel_C", "ExecuteUbergraph_MerchantPanel");

	Params::UMerchantPanel_C_ExecuteUbergraph_MerchantPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetItemWidgetFromCache_MerchItem = CallFunc_GetItemWidgetFromCache_MerchItem;
	Parms.K2Node_CustomEvent_Trader = K2Node_CustomEvent_Trader;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item = CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_GetStock_NewParam = CallFunc_GetStock_NewParam;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Delta_1 = K2Node_CustomEvent_Delta_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_1 = CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_SelectedIndex = K2Node_CustomEvent_SelectedIndex;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_2 = CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_2;
	Parms.CallFunc_GetChildrenCount_ReturnValue_2 = CallFunc_GetChildrenCount_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_3 = CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_3;
	Parms.K2Node_CustomEvent_Widget_4 = K2Node_CustomEvent_Widget_4;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_CustomEvent_Widget_3 = K2Node_CustomEvent_Widget_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_4 = CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_4;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetItemFromIndex_bFound = CallFunc_GetItemFromIndex_bFound;
	Parms.CallFunc_GetItemFromIndex_Item = CallFunc_GetItemFromIndex_Item;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_CheckItemName_ReturnValue = CallFunc_CheckItemName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_5 = CallFunc_GetItemWidgetFromScrollBox_AsMerchant_Item_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetItemFromIndex_bFound_1 = CallFunc_GetItemFromIndex_bFound_1;
	Parms.CallFunc_GetItemFromIndex_Item_1 = CallFunc_GetItemFromIndex_Item_1;
	Parms.CallFunc_CheckItemName_ReturnValue_1 = CallFunc_CheckItemName_ReturnValue_1;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.K2Node_CustomEvent_Widget_2 = K2Node_CustomEvent_Widget_2;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_RemoveChildAt_ReturnValue_1 = CallFunc_RemoveChildAt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_CustomEvent_ControllerButton_2 = K2Node_CustomEvent_ControllerButton_2;
	Parms.K2Node_CustomEvent_ControllerButton_1 = K2Node_CustomEvent_ControllerButton_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMerchant_Item = K2Node_DynamicCast_AsMerchant_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ShouldItemBeDisplayed_bDisplay = CallFunc_ShouldItemBeDisplayed_bDisplay;
	Parms.CallFunc_GetNotSoldCount_NotSoldCount = CallFunc_GetNotSoldCount_NotSoldCount;
	Parms.CallFunc_GetItem_bFound = CallFunc_GetItem_bFound;
	Parms.CallFunc_GetItem_OutRow = CallFunc_GetItem_OutRow;
	Parms.K2Node_CustomEvent_ControllerButton = K2Node_CustomEvent_ControllerButton;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.CallFunc_GetPlayerCurrencyAmount_ReturnValue = CallFunc_GetPlayerCurrencyAmount_ReturnValue;
	Parms.CallFunc_GetPlayerCurrencyAmount_ReturnValue_1 = CallFunc_GetPlayerCurrencyAmount_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetPlayerCurrencyAmount_ReturnValue_2 = CallFunc_GetPlayerCurrencyAmount_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}

}


