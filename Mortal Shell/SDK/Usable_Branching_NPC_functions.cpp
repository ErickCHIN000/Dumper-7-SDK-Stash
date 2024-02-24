#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Branching_NPC.Usable_Branching_NPC_C
// (Actor)

class UClass* AUsable_Branching_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Branching_NPC_C");

	return Clss;
}


// Usable_Branching_NPC_C Usable_Branching_NPC.Default__Usable_Branching_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Branching_NPC_C* AUsable_Branching_NPC_C::GetDefaultObj()
{
	static class AUsable_Branching_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Branching_NPC_C*>(AUsable_Branching_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.ConstructItemID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSaveToPlayer                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::ConstructItemID(class FName ItemId, class FName* ID, bool* bSaveToPlayer, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "ConstructItemID");

	Params::AUsable_Branching_NPC_C_ConstructItemID_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

	if (bSaveToPlayer != nullptr)
		*bSaveToPlayer = Parms.bSaveToPlayer;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.DisplayNonDialogueTalk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDarkFatherChantSubtitle>ChantData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ChantText_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::DisplayNonDialogueTalk(TArray<struct FDarkFatherChantSubtitle>& ChantData, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_ChantText_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "DisplayNonDialogueTalk");

	Params::AUsable_Branching_NPC_C_DisplayNonDialogueTalk_Params Parms{};

	Parms.ChantData = ChantData;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.AddItemToPlayerInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetItemFromID_Item                                      (HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::AddItemToPlayerInventory(class FName ItemId, bool* Success, int32* InventorySlot, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FInventoryItem& CallFunc_GetItemFromID_Item, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "AddItemToPlayerInventory");

	Params::AUsable_Branching_NPC_C_AddItemToPlayerInventory_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetItemFromID_Item = CallFunc_GetItemFromID_Item;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (InventorySlot != nullptr)
		*InventorySlot = Parms.InventorySlot;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.CheckRequirements
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMerchantItem               MerchantItem                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bAllAdded                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::CheckRequirements(struct FMerchantItem& MerchantItem, bool* bAllAdded, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_IsUpgradeUnlocked_bUnlocked, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "CheckRequirements");

	Params::AUsable_Branching_NPC_C_CheckRequirements_Params Parms{};

	Parms.MerchantItem = MerchantItem;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAllAdded != nullptr)
		*bAllAdded = Parms.bAllAdded;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.ShouldItemBeDisplayed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDisplay                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FMerchantItem>       CallFunc_GetStock_NewParam                                       (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FMerchantItem>       CallFunc_GetStock_NewParam_1                                     (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckRequirements_bAllAdded                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNotSoldCount_NotSoldCount                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Branching_NPC_C::ShouldItemBeDisplayed(int32 Index, bool* bDisplay, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_CheckRequirements_bAllAdded, int32 CallFunc_GetNotSoldCount_NotSoldCount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "ShouldItemBeDisplayed");

	Params::AUsable_Branching_NPC_C_ShouldItemBeDisplayed_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetStock_NewParam = CallFunc_GetStock_NewParam;
	Parms.CallFunc_GetStock_NewParam_1 = CallFunc_GetStock_NewParam_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_CheckRequirements_bAllAdded = CallFunc_CheckRequirements_bAllAdded;
	Parms.CallFunc_GetNotSoldCount_NotSoldCount = CallFunc_GetNotSoldCount_NotSoldCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bDisplay != nullptr)
		*bDisplay = Parms.bDisplay;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.GetStock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FMerchantItem>       NewParam                                                         (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FMerchantItem>       EmptyStock                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::GetStock(TArray<struct FMerchantItem>* NewParam, const TArray<struct FMerchantItem>& EmptyStock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "GetStock");

	Params::AUsable_Branching_NPC_C_GetStock_Params Parms{};

	Parms.EmptyStock = EmptyStock;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.GetItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMerchantItem               Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bFound                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              OutRow                                                           (Parm, OutParm, HasGetValueTypeHash)
// class FName                        CallFunc_RowName_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Branching_NPC_C::GetItem(struct FMerchantItem& Item, bool* bFound, struct FInventoryItem* OutRow, class FName CallFunc_RowName_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "GetItem");

	Params::AUsable_Branching_NPC_C_GetItem_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_RowName_ReturnValue = CallFunc_RowName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	if (OutRow != nullptr)
		*OutRow = std::move(Parms.OutRow);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.GetNotSoldCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMerchantItem               Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              NotSoldCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItem_bFound                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItem_OutRow                                          (HasGetValueTypeHash)
// class FName                        CallFunc_ConstructItemID_ID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConstructItemID_bSaveToPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMyNamedInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::GetNotSoldCount(struct FMerchantItem& Item, int32* NotSoldCount, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow, class FName CallFunc_ConstructItemID_ID, bool CallFunc_ConstructItemID_bSaveToPlayer, int32 CallFunc_GetMyNamedInt_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "GetNotSoldCount");

	Params::AUsable_Branching_NPC_C_GetNotSoldCount_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetItem_bFound = CallFunc_GetItem_bFound;
	Parms.CallFunc_GetItem_OutRow = CallFunc_GetItem_OutRow;
	Parms.CallFunc_ConstructItemID_ID = CallFunc_ConstructItemID_ID;
	Parms.CallFunc_ConstructItemID_bSaveToPlayer = CallFunc_ConstructItemID_bSaveToPlayer;
	Parms.CallFunc_GetMyNamedInt_ReturnValue = CallFunc_GetMyNamedInt_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NotSoldCount != nullptr)
		*NotSoldCount = Parms.NotSoldCount;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.GetItemFromIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFound                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              Item                                                             (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FMerchantItem>       CallFunc_GetStock_NewParam                                       (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItem_bFound                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItem_OutRow                                          (HasGetValueTypeHash)

void AUsable_Branching_NPC_C::GetItemFromIndex(int32 ItemIndex, bool* bFound, struct FInventoryItem* Item, TArray<struct FMerchantItem>& CallFunc_GetStock_NewParam, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GetItem_bFound, const struct FInventoryItem& CallFunc_GetItem_OutRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "GetItemFromIndex");

	Params::AUsable_Branching_NPC_C_GetItemFromIndex_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.CallFunc_GetStock_NewParam = CallFunc_GetStock_NewParam;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetItem_bFound = CallFunc_GetItem_bFound;
	Parms.CallFunc_GetItem_OutRow = CallFunc_GetItem_OutRow;

	UObject::ProcessEvent(Func, &Parms);

	if (bFound != nullptr)
		*bFound = Parms.bFound;

	if (Item != nullptr)
		*Item = std::move(Parms.Item);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.IsArbNameInSetPure?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        NameToCheck                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInSet_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Branching_NPC_C::IsArbNameInSetPure_(class FName NameToCheck, bool* IsInSet_, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "IsArbNameInSetPure?");

	Params::AUsable_Branching_NPC_C_IsArbNameInSetPure__Params Parms{};

	Parms.NameToCheck = NameToCheck;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_ = CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInSet_ != nullptr)
		*IsInSet_ = Parms.IsInSet_;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.IncrementDialogCounterAndSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::IncrementDialogCounterAndSave(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, int32 Temp_int_Variable, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "IncrementDialogCounterAndSave");

	Params::AUsable_Branching_NPC_C_IncrementDialogCounterAndSave_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.RemoveItemFromPlayerInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem                    (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::RemoveItemFromPlayerInventory(class FName ItemId, int32 AmountToRemove, bool* Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "RemoveItemFromPlayerInventory");

	Params::AUsable_Branching_NPC_C_RemoveItemFromPlayerInventory_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.AmountToRemove = AmountToRemove;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem = CallFunc_RemoveFromItemAmount_OutnventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved = CallFunc_RemoveFromItemAmount_AmountRemoved;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.CheckPlayerInventoryForItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasItem_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_HasItem_InventorySlot                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HasItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::CheckPlayerInventoryForItem(class FName ItemId, bool* Success, int32* InventorySlot, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_HasItem_Success, int32 CallFunc_HasItem_InventorySlot, int32 CallFunc_HasItem_Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "CheckPlayerInventoryForItem");

	Params::AUsable_Branching_NPC_C_CheckPlayerInventoryForItem_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_HasItem_Success = CallFunc_HasItem_Success;
	Parms.CallFunc_HasItem_InventorySlot = CallFunc_HasItem_InventorySlot;
	Parms.CallFunc_HasItem_Amount = CallFunc_HasItem_Amount;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (InventorySlot != nullptr)
		*InventorySlot = Parms.InventorySlot;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Dialogue_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetMyInt_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Branching_NPC_C::OnActorUsed(class APlayerController* Controller, bool* Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_OnActorUsed_Success, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class UUI_Dialogue_C* CallFunc_Create_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_GetMyInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OnActorUsed");

	Params::AUsable_Branching_NPC_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetMyInt_ReturnValue = CallFunc_GetMyInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.ContinueDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::ContinueDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "ContinueDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OnWidgetHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::OnWidgetHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OnWidgetHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OnTradeFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::OnTradeFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OnTradeFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OnItemBought
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::OnItemBought(int32 ItemIndex, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OnItemBought");

	Params::AUsable_Branching_NPC_C_OnItemBought_Params Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.StartPlayerCameraControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::StartPlayerCameraControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "StartPlayerCameraControl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.EndPlayerCameraControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::EndPlayerCameraControl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "EndPlayerCameraControl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "ReceiveTick");

	Params::AUsable_Branching_NPC_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OnDialogueFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::OnDialogueFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OnDialogueFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.BndEvt__PlayerTracking Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AUsable_Branching_NPC_C::BndEvt__PlayerTracking_Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "BndEvt__PlayerTracking Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AUsable_Branching_NPC_C_BndEvt__PlayerTracking_Range_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.BndEvt__PlayerTracking Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::BndEvt__PlayerTracking_Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "BndEvt__PlayerTracking Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::AUsable_Branching_NPC_C_BndEvt__PlayerTracking_Range_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OpenTradeMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::OpenTradeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OpenTradeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.SetSignificanceBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDHSignificanceLevel    SignificanceLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "SetSignificanceBP");

	Params::AUsable_Branching_NPC_C_SetSignificanceBP_Params Parms{};

	Parms.SignificanceLevel = SignificanceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Branching_NPC_C::OnOptionSelected(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OnOptionSelected");

	Params::AUsable_Branching_NPC_C_OnOptionSelected_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Branching_NPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.OnPhotModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnterred                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Branching_NPC_C::OnPhotModeChanged(bool bEnterred)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "OnPhotModeChanged");

	Params::AUsable_Branching_NPC_C_OnPhotModeChanged_Params Parms{};

	Parms.bEnterred = bEnterred;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Branching_NPC.Usable_Branching_NPC_C.ExecuteUbergraph_Usable_Branching_NPC
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ItemIndex                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetItemFromIndex_bFound                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetItemFromIndex_Item                                   (HasGetValueTypeHash)
// class FName                        CallFunc_ConstructItemID_ID                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConstructItemID_bSaveToPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMyNamedInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// float                              CallFunc_ControllerSensitivity_OutputPin                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ControllerYInverted_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ControllerSensitivity_OutputPin_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ControllerXInverted_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MouseSensitivity_OutputPin                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MouseXInverted_OutputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MouseSensitivity_OutputPin_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MouseYInverted_OutputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// enum class EDHSignificanceLevel    K2Node_Event_SignificanceLevel                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bYes                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FDHDialogueLine             K2Node_MakeStruct_DHDialogueLine                                 (None)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FDHDialogueLine             K2Node_MakeStruct_DHDialogueLine_1                               (None)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnterred                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Branching_NPC_C::ExecuteUbergraph_Usable_Branching_NPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 K2Node_CustomEvent_ItemIndex, int32 K2Node_CustomEvent_Amount, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetItemFromIndex_bFound, const struct FInventoryItem& CallFunc_GetItemFromIndex_Item, class FName CallFunc_ConstructItemID_ID, bool CallFunc_ConstructItemID_bSaveToPlayer, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetMyNamedInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_GetInputAxisValue_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_GetInputAxisValue_ReturnValue_2, float CallFunc_GetInputAxisValue_ReturnValue_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FText Temp_text_Variable, float CallFunc_ControllerSensitivity_OutputPin, float CallFunc_ControllerYInverted_ReturnValue, float CallFunc_ControllerSensitivity_OutputPin_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_ControllerXInverted_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, float CallFunc_Multiply_FloatFloat_ReturnValue_6, float CallFunc_MouseSensitivity_OutputPin, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_MouseXInverted_OutputPin, float CallFunc_Multiply_FloatFloat_ReturnValue_8, float CallFunc_MouseSensitivity_OutputPin_1, float CallFunc_Multiply_FloatFloat_ReturnValue_9, float CallFunc_MouseYInverted_OutputPin, float CallFunc_Multiply_FloatFloat_ReturnValue_10, class FText Temp_text_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue_11, bool Temp_bool_Variable, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, class FText Temp_text_Variable_2, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_bYes, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array, class FText Temp_text_Variable_3, bool Temp_bool_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class FText K2Node_Select_Default_1, const struct FDHDialogueLine& K2Node_MakeStruct_DHDialogueLine_1, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array_1, bool K2Node_CustomEvent_bEnterred, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Branching_NPC_C", "ExecuteUbergraph_Usable_Branching_NPC");

	Params::AUsable_Branching_NPC_C_ExecuteUbergraph_Usable_Branching_NPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CustomEvent_ItemIndex = K2Node_CustomEvent_ItemIndex;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetItemFromIndex_bFound = CallFunc_GetItemFromIndex_bFound;
	Parms.CallFunc_GetItemFromIndex_Item = CallFunc_GetItemFromIndex_Item;
	Parms.CallFunc_ConstructItemID_ID = CallFunc_ConstructItemID_ID;
	Parms.CallFunc_ConstructItemID_bSaveToPlayer = CallFunc_ConstructItemID_bSaveToPlayer;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetMyNamedInt_ReturnValue = CallFunc_GetMyNamedInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_GetInputAxisValue_ReturnValue_1 = CallFunc_GetInputAxisValue_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_GetInputAxisValue_ReturnValue_2 = CallFunc_GetInputAxisValue_ReturnValue_2;
	Parms.CallFunc_GetInputAxisValue_ReturnValue_3 = CallFunc_GetInputAxisValue_ReturnValue_3;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_ControllerSensitivity_OutputPin = CallFunc_ControllerSensitivity_OutputPin;
	Parms.CallFunc_ControllerYInverted_ReturnValue = CallFunc_ControllerYInverted_ReturnValue;
	Parms.CallFunc_ControllerSensitivity_OutputPin_1 = CallFunc_ControllerSensitivity_OutputPin_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_ControllerXInverted_ReturnValue = CallFunc_ControllerXInverted_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_MouseSensitivity_OutputPin = CallFunc_MouseSensitivity_OutputPin;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_MouseXInverted_OutputPin = CallFunc_MouseXInverted_OutputPin;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_8 = CallFunc_Multiply_FloatFloat_ReturnValue_8;
	Parms.CallFunc_MouseSensitivity_OutputPin_1 = CallFunc_MouseSensitivity_OutputPin_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_9 = CallFunc_Multiply_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MouseYInverted_OutputPin = CallFunc_MouseYInverted_OutputPin;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_10 = CallFunc_Multiply_FloatFloat_ReturnValue_10;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_11 = CallFunc_Multiply_FloatFloat_ReturnValue_11;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_Event_SignificanceLevel = K2Node_Event_SignificanceLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_bYes = K2Node_CustomEvent_bYes;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_DHDialogueLine = K2Node_MakeStruct_DHDialogueLine;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_DHDialogueLine_1 = K2Node_MakeStruct_DHDialogueLine_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_bEnterred = K2Node_CustomEvent_bEnterred;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


