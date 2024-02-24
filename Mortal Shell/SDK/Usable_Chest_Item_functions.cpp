#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Chest_Item.Usable_Chest_Item_C
// (Actor)

class UClass* AUsable_Chest_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Chest_Item_C");

	return Clss;
}


// Usable_Chest_Item_C Usable_Chest_Item.Default__Usable_Chest_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Chest_Item_C* AUsable_Chest_Item_C::GetDefaultObj()
{
	static class AUsable_Chest_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Chest_Item_C*>(AUsable_Chest_Item_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Usable_Chest_Item.Usable_Chest_Item_C.DualSense_OpenChest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::DualSense_OpenChest(uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "DualSense_OpenChest");

	Params::AUsable_Chest_Item_C_DualSense_OpenChest_Params Parms{};

	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.Replace Just Once Item
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDHDataTableID              DHDataTableID                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               CallFunc_IsJustOnceItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetJustOnceItemReplacement_ReplacementID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::Replace_Just_Once_Item(struct FDHDataTableID& DHDataTableID, bool CallFunc_IsJustOnceItem_ReturnValue, class FName CallFunc_GetJustOnceItemReplacement_ReplacementID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "Replace Just Once Item");

	Params::AUsable_Chest_Item_C_Replace_Just_Once_Item_Params Parms{};

	Parms.DHDataTableID = DHDataTableID;
	Parms.CallFunc_IsJustOnceItem_ReturnValue = CallFunc_IsJustOnceItem_ReturnValue;
	Parms.CallFunc_GetJustOnceItemReplacement_ReplacementID = CallFunc_GetJustOnceItemReplacement_ReplacementID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.IsJustOnceItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDHDataTableID              DHDataTableID                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsItemJustOnceItem_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AUsable_Chest_Item_C::IsJustOnceItem(struct FDHDataTableID& DHDataTableID, bool CallFunc_IsItemJustOnceItem_bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "IsJustOnceItem");

	Params::AUsable_Chest_Item_C_IsJustOnceItem_Params Parms{};

	Parms.DHDataTableID = DHDataTableID;
	Parms.CallFunc_IsItemJustOnceItem_bYes = CallFunc_IsItemJustOnceItem_bYes;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ContainsJustOnceItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bContains                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsJustOnceItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsJustOnceItem_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsJustOnceItem_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Chest_Item_C::ContainsJustOnceItems(bool* bContains, bool CallFunc_IsJustOnceItem_ReturnValue, bool CallFunc_IsJustOnceItem_ReturnValue_1, bool CallFunc_IsJustOnceItem_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ContainsJustOnceItems");

	Params::AUsable_Chest_Item_C_ContainsJustOnceItems_Params Parms{};

	Parms.CallFunc_IsJustOnceItem_ReturnValue = CallFunc_IsJustOnceItem_ReturnValue;
	Parms.CallFunc_IsJustOnceItem_ReturnValue_1 = CallFunc_IsJustOnceItem_ReturnValue_1;
	Parms.CallFunc_IsJustOnceItem_ReturnValue_2 = CallFunc_IsJustOnceItem_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bContains != nullptr)
		*bContains = Parms.bContains;

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.DisableChest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Chest_Item_C::DisableChest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "DisableChest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.TryAddItemToChestInvArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDHDataTableID              ID                                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TArray<struct FInventoryItem>      ChestArray                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_RowName_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::TryAddItemToChestInvArray(struct FDHDataTableID& ID, TArray<struct FInventoryItem>& ChestArray, int32 Temp_int_Variable, class FName CallFunc_RowName_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "TryAddItemToChestInvArray");

	Params::AUsable_Chest_Item_C_TryAddItemToChestInvArray_Params Parms{};

	Parms.ID = ID;
	Parms.ChestArray = ChestArray;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_RowName_ReturnValue = CallFunc_RowName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Chest_Item_C::OnActorUsed(class APlayerController* Controller, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "OnActorUsed");

	Params::AUsable_Chest_Item_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ContainerLooted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUniqueDHID_ID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsJustOnceItems_bContains                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerLooted_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Chest_Item_C::ContainerLooted(bool* Success, class FName CallFunc_GetUniqueDHID_ID, bool CallFunc_ContainsJustOnceItems_bContains, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_ContainerLooted_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ContainerLooted");

	Params::AUsable_Chest_Item_C_ContainerLooted_Params Parms{};

	Parms.CallFunc_GetUniqueDHID_ID = CallFunc_GetUniqueDHID_ID;
	Parms.CallFunc_ContainsJustOnceItems_bContains = CallFunc_ContainsJustOnceItems_bContains;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_ContainerLooted_Success = CallFunc_ContainerLooted_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.InitializeInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LoadInventoryItems_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Chest_Item_C::InitializeInventory(bool* Success, bool CallFunc_LoadInventoryItems_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "InitializeInventory");

	Params::AUsable_Chest_Item_C_InitializeInventory_Params Parms{};

	Parms.CallFunc_LoadInventoryItems_Success = CallFunc_LoadInventoryItems_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.OnNotifyEnd_6D95205E477C6CE3E521019318CE71DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::OnNotifyEnd_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "OnNotifyEnd_6D95205E477C6CE3E521019318CE71DF");

	Params::AUsable_Chest_Item_C_OnNotifyEnd_6D95205E477C6CE3E521019318CE71DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.OnNotifyBegin_6D95205E477C6CE3E521019318CE71DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::OnNotifyBegin_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "OnNotifyBegin_6D95205E477C6CE3E521019318CE71DF");

	Params::AUsable_Chest_Item_C_OnNotifyBegin_6D95205E477C6CE3E521019318CE71DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.OnInterrupted_6D95205E477C6CE3E521019318CE71DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::OnInterrupted_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "OnInterrupted_6D95205E477C6CE3E521019318CE71DF");

	Params::AUsable_Chest_Item_C_OnInterrupted_6D95205E477C6CE3E521019318CE71DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.OnBlendOut_6D95205E477C6CE3E521019318CE71DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::OnBlendOut_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "OnBlendOut_6D95205E477C6CE3E521019318CE71DF");

	Params::AUsable_Chest_Item_C_OnBlendOut_6D95205E477C6CE3E521019318CE71DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.OnCompleted_6D95205E477C6CE3E521019318CE71DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::OnCompleted_6D95205E477C6CE3E521019318CE71DF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "OnCompleted_6D95205E477C6CE3E521019318CE71DF");

	Params::AUsable_Chest_Item_C_OnCompleted_6D95205E477C6CE3E521019318CE71DF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ChestUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Chest_Item_C::ChestUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ChestUsed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.OpenChest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasFromBeginPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Chest_Item_C::OpenChest(bool WasFromBeginPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "OpenChest");

	Params::AUsable_Chest_Item_C_OpenChest_Params Parms{};

	Parms.WasFromBeginPlay = WasFromBeginPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AUsable_Chest_Item_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ChestAlreadyOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Chest_Item_C::ChestAlreadyOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ChestAlreadyOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ChestOpenAnimPlaying
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasFromBeginPlay                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AUsable_Chest_Item_C::ChestOpenAnimPlaying(bool WasFromBeginPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ChestOpenAnimPlaying");

	Params::AUsable_Chest_Item_C_ChestOpenAnimPlaying_Params Parms{};

	Parms.WasFromBeginPlay = WasFromBeginPlay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ReplaceItemsIfNeeded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AUsable_Chest_Item_C::ReplaceItemsIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ReplaceItemsIfNeeded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.SetSignificanceBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDHSignificanceLevel    SignificanceLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUsable_Chest_Item_C::SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "SetSignificanceBP");

	Params::AUsable_Chest_Item_C_SetSignificanceBP_Params Parms{};

	Parms.SignificanceLevel = SignificanceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Usable_Chest_Item.Usable_Chest_Item_C.ExecuteUbergraph_Usable_Chest_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_WasFromBeginPlay_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_WasFromBeginPlay                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ContainsJustOnceItems_bContains                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_InitializeInventory_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDHSignificanceLevel    K2Node_Event_SignificanceLevel                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUniqueDHID_ID                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)

void AUsable_Chest_Item_C::ExecuteUbergraph_Usable_Chest_Item(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsMyNameInChangedSet_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_CustomEvent_WasFromBeginPlay_1, bool CallFunc_OnActorUsed_Success, bool K2Node_CustomEvent_WasFromBeginPlay, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ContainsJustOnceItems_bContains, bool CallFunc_InitializeInventory_Success, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess, class FName CallFunc_GetUniqueDHID_ID, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_OnActorUsed_Success_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Usable_Chest_Item_C", "ExecuteUbergraph_Usable_Chest_Item");

	Params::AUsable_Chest_Item_C_ExecuteUbergraph_Usable_Chest_Item_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CustomEvent_WasFromBeginPlay_1 = K2Node_CustomEvent_WasFromBeginPlay_1;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.K2Node_CustomEvent_WasFromBeginPlay = K2Node_CustomEvent_WasFromBeginPlay;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ContainsJustOnceItems_bContains = CallFunc_ContainsJustOnceItems_bContains;
	Parms.CallFunc_InitializeInventory_Success = CallFunc_InitializeInventory_Success;
	Parms.K2Node_Event_SignificanceLevel = K2Node_Event_SignificanceLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUniqueDHID_ID = CallFunc_GetUniqueDHID_ID;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_OnActorUsed_Success_1 = CallFunc_OnActorUsed_Success_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


