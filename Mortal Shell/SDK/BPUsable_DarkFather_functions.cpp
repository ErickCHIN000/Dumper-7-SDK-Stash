#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPUsable_DarkFather.BPUsable_DarkFather_C
// (Actor)

class UClass* ABPUsable_DarkFather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPUsable_DarkFather_C");

	return Clss;
}


// BPUsable_DarkFather_C BPUsable_DarkFather.Default__BPUsable_DarkFather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPUsable_DarkFather_C* ABPUsable_DarkFather_C::GetDefaultObj()
{
	static class ABPUsable_DarkFather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPUsable_DarkFather_C*>(ABPUsable_DarkFather_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.DualSense_DarkFatherActivation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Spawn_Transform_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ControllerAudio_C*       CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::DualSense_DarkFatherActivation(const struct FVector& Spawn_Transform_Location, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ControllerAudio_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "DualSense_DarkFatherActivation");

	Params::ABPUsable_DarkFather_C_DualSense_DarkFatherActivation_Params Parms{};

	Parms.Spawn_Transform_Location = Spawn_Transform_Location;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.RemoveAllGlandsAndDisableThem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItemFromPlayerInventory_Success                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveItemFromPlayerInventory_Success_1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveItemFromPlayerInventory_Success_2                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::RemoveAllGlandsAndDisableThem(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, bool CallFunc_RemoveItemFromPlayerInventory_Success, bool CallFunc_RemoveItemFromPlayerInventory_Success_1, bool CallFunc_RemoveItemFromPlayerInventory_Success_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "RemoveAllGlandsAndDisableThem");

	Params::ABPUsable_DarkFather_C_RemoveAllGlandsAndDisableThem_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_RemoveItemFromPlayerInventory_Success = CallFunc_RemoveItemFromPlayerInventory_Success;
	Parms.CallFunc_RemoveItemFromPlayerInventory_Success_1 = CallFunc_RemoveItemFromPlayerInventory_Success_1;
	Parms.CallFunc_RemoveItemFromPlayerInventory_Success_2 = CallFunc_RemoveItemFromPlayerInventory_Success_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.IsNewGamePlus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bIsNGPlus                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::IsNewGamePlus(bool* bIsNGPlus, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "IsNewGamePlus");

	Params::ABPUsable_DarkFather_C_IsNewGamePlus_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bIsNGPlus != nullptr)
		*bIsNGPlus = Parms.bIsNGPlus;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.CheckMarkVeryFirstDialogueCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPUsable_DarkFather_C::CheckMarkVeryFirstDialogueCompleted(bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "CheckMarkVeryFirstDialogueCompleted");

	Params::ABPUsable_DarkFather_C_CheckMarkVeryFirstDialogueCompleted_Params Parms{};

	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.AddSealInventoryItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::AddSealInventoryItem(const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "AddSealInventoryItem");

	Params::ABPUsable_DarkFather_C_AddSealInventoryItem_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.RiposteHealTutorial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::RiposteHealTutorial(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULargeTutorial_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "RiposteHealTutorial");

	Params::ABPUsable_DarkFather_C_RiposteHealTutorial_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ShowFancyNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Heading                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FancyNotification_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::ShowFancyNotification(class FText Heading, class FText Text, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ShowFancyNotification");

	Params::ABPUsable_DarkFather_C_ShowFancyNotification_Params Parms{};

	Parms.Heading = Heading;
	Parms.Text = Text;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.GetUseActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (Parm, OutParm)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void ABPUsable_DarkFather_C::GetUseActionText(class FText* ActionText, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "GetUseActionText");

	Params::ABPUsable_DarkFather_C_GetUseActionText_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_ = CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionText != nullptr)
		*ActionText = Parms.ActionText;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.GetInteractionWidgetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WidgetLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::GetInteractionWidgetLocation(struct FVector* WidgetLocation, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "GetInteractionWidgetLocation");

	Params::ABPUsable_DarkFather_C_GetInteractionWidgetLocation_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_ = CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (WidgetLocation != nullptr)
		*WidgetLocation = std::move(Parms.WidgetLocation);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.DH_ResetDarkFather
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveArbNameFromChangedSet_bIsInSet                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveArbNameFromChangedSet_bIsInSet_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveArbNameFromChangedSet_bIsInSet_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveArbNameFromChangedSet_bIsInSet_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveArbNameFromChangedSet_bIsInSet_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABPUsable_DarkFather_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ABPUsable_DarkFather_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameParry_UpgradeName                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::DH_ResetDarkFather(bool CallFunc_RemoveArbNameFromChangedSet_bIsInSet, bool CallFunc_RemoveArbNameFromChangedSet_bIsInSet_1, bool CallFunc_RemoveArbNameFromChangedSet_bIsInSet_2, bool CallFunc_RemoveArbNameFromChangedSet_bIsInSet_3, bool CallFunc_RemoveArbNameFromChangedSet_bIsInSet_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, TArray<class ABPUsable_DarkFather_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABPUsable_DarkFather_C* CallFunc_Array_Get_Item, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName CallFunc_GetUpgradeNameParry_UpgradeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "DH_ResetDarkFather");

	Params::ABPUsable_DarkFather_C_DH_ResetDarkFather_Params Parms{};

	Parms.CallFunc_RemoveArbNameFromChangedSet_bIsInSet = CallFunc_RemoveArbNameFromChangedSet_bIsInSet;
	Parms.CallFunc_RemoveArbNameFromChangedSet_bIsInSet_1 = CallFunc_RemoveArbNameFromChangedSet_bIsInSet_1;
	Parms.CallFunc_RemoveArbNameFromChangedSet_bIsInSet_2 = CallFunc_RemoveArbNameFromChangedSet_bIsInSet_2;
	Parms.CallFunc_RemoveArbNameFromChangedSet_bIsInSet_3 = CallFunc_RemoveArbNameFromChangedSet_bIsInSet_3;
	Parms.CallFunc_RemoveArbNameFromChangedSet_bIsInSet_4 = CallFunc_RemoveArbNameFromChangedSet_bIsInSet_4;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_GetUpgradeNameParry_UpgradeName = CallFunc_GetUpgradeNameParry_UpgradeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.FadeOutChantAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               K2Node_DynamicCast_AsAmbient_Sound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::FadeOutChantAudio(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AAmbientSound* K2Node_DynamicCast_AsAmbient_Sound, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "FadeOutChantAudio");

	Params::ABPUsable_DarkFather_C_FadeOutChantAudio_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAmbient_Sound = K2Node_DynamicCast_AsAmbient_Sound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.CheckLoadEndingLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetMyNamedInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::CheckLoadEndingLevel(int32 CallFunc_GetMyNamedInt_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "CheckLoadEndingLevel");

	Params::ABPUsable_DarkFather_C_CheckLoadEndingLevel_Params Parms{};

	Parms.CallFunc_GetMyNamedInt_ReturnValue = CallFunc_GetMyNamedInt_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.StartDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHDialogueLine>     CallFunc_GetCurrentDialogueSequence_CurrentSequence              (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentDialogueSequence_ShouldBranch_                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCurrentDialogueSequence_BranchText                   (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnActorUsed_Success                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForFinalGlandConditions__InitiateFinalDialogue_    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// TArray<struct FDHDialogueLine>     CallFunc_GetCurrentDialogueSequence_CurrentSequence_1            (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID_1  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentDialogueSequence_ShouldBranch__1              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetCurrentDialogueSequence_BranchText_1                 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UUI_Dialogue_C*              CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::StartDialogue(TArray<struct FDHDialogueLine>& CallFunc_GetCurrentDialogueSequence_CurrentSequence, class FName CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock, class FName CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID, bool CallFunc_GetCurrentDialogueSequence_ShouldBranch_, class FText CallFunc_GetCurrentDialogueSequence_BranchText, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_OnActorUsed_Success, bool CallFunc_CheckForFinalGlandConditions__InitiateFinalDialogue_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<struct FDHDialogueLine>& CallFunc_GetCurrentDialogueSequence_CurrentSequence_1, class FName CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock_1, class FName CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID_1, bool CallFunc_GetCurrentDialogueSequence_ShouldBranch__1, class FText CallFunc_GetCurrentDialogueSequence_BranchText_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUI_Dialogue_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "StartDialogue");

	Params::ABPUsable_DarkFather_C_StartDialogue_Params Parms{};

	Parms.CallFunc_GetCurrentDialogueSequence_CurrentSequence = CallFunc_GetCurrentDialogueSequence_CurrentSequence;
	Parms.CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock = CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock;
	Parms.CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID = CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID;
	Parms.CallFunc_GetCurrentDialogueSequence_ShouldBranch_ = CallFunc_GetCurrentDialogueSequence_ShouldBranch_;
	Parms.CallFunc_GetCurrentDialogueSequence_BranchText = CallFunc_GetCurrentDialogueSequence_BranchText;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_OnActorUsed_Success = CallFunc_OnActorUsed_Success;
	Parms.CallFunc_CheckForFinalGlandConditions__InitiateFinalDialogue_ = CallFunc_CheckForFinalGlandConditions__InitiateFinalDialogue_;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCurrentDialogueSequence_CurrentSequence_1 = CallFunc_GetCurrentDialogueSequence_CurrentSequence_1;
	Parms.CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock_1 = CallFunc_GetCurrentDialogueSequence_UpgradeToUnlock_1;
	Parms.CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID_1 = CallFunc_GetCurrentDialogueSequence_UpgradeDisplayInfoTableID_1;
	Parms.CallFunc_GetCurrentDialogueSequence_ShouldBranch__1 = CallFunc_GetCurrentDialogueSequence_ShouldBranch__1;
	Parms.CallFunc_GetCurrentDialogueSequence_BranchText_1 = CallFunc_GetCurrentDialogueSequence_BranchText_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.FadeInChantAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAmbientSound*               K2Node_DynamicCast_AsAmbient_Sound                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::FadeInChantAudio(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AAmbientSound* K2Node_DynamicCast_AsAmbient_Sound, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "FadeInChantAudio");

	Params::ABPUsable_DarkFather_C_FadeInChantAudio_Params Parms{};

	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsAmbient_Sound = K2Node_DynamicCast_AsAmbient_Sound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.CheckMarkFlutedFirstDialogueCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPUsable_DarkFather_C::CheckMarkFlutedFirstDialogueCompleted(bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, bool CallFunc_Not_PreBool_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "CheckMarkFlutedFirstDialogueCompleted");

	Params::ABPUsable_DarkFather_C_CheckMarkFlutedFirstDialogueCompleted_Params Parms{};

	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_1 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.CheckMarkDarkFormFirstDialogueCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPUsable_DarkFather_C::CheckMarkDarkFormFirstDialogueCompleted(bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet_1, bool CallFunc_Not_PreBool_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "CheckMarkDarkFormFirstDialogueCompleted");

	Params::ABPUsable_DarkFather_C_CheckMarkDarkFormFirstDialogueCompleted_Params Parms{};

	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet_1 = CallFunc_GetArbNameInChangedSetPure_bIsInSet_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ShouldDoDarkFormFirstDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPUsable_DarkFather_C::ShouldDoDarkFormFirstDialogue_(bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ShouldDoDarkFormFirstDialogue?");

	Params::ABPUsable_DarkFather_C_ShouldDoDarkFormFirstDialogue__Params Parms{};

	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ShouldDoFlutedShellFirstDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPUsable_DarkFather_C::ShouldDoFlutedShellFirstDialogue_(bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ShouldDoFlutedShellFirstDialogue?");

	Params::ABPUsable_DarkFather_C_ShouldDoFlutedShellFirstDialogue__Params Parms{};

	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.StopFogIfNoGland
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckPlayerInventoryForGland_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::StopFogIfNoGland(bool CallFunc_CheckPlayerInventoryForGland_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "StopFogIfNoGland");

	Params::ABPUsable_DarkFather_C_StopFogIfNoGland_Params Parms{};

	Parms.CallFunc_CheckPlayerInventoryForGland_ReturnValue = CallFunc_CheckPlayerInventoryForGland_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.DH_TestDarkFatherEnding
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABPUsable_DarkFather_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ABPUsable_DarkFather_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::DH_TestDarkFatherEnding(TArray<class ABPUsable_DarkFather_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABPUsable_DarkFather_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "DH_TestDarkFatherEnding");

	Params::ABPUsable_DarkFather_C_DH_TestDarkFatherEnding_Params Parms{};

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.CheckForFinalGlandConditions?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InitiateFinalDialogue_                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMyNamedInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMyNamedInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::CheckForFinalGlandConditions_(bool* InitiateFinalDialogue_, int32 CallFunc_GetMyNamedInt_ReturnValue, bool CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue, int32 CallFunc_GetMyNamedInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "CheckForFinalGlandConditions?");

	Params::ABPUsable_DarkFather_C_CheckForFinalGlandConditions__Params Parms{};

	Parms.CallFunc_GetMyNamedInt_ReturnValue = CallFunc_GetMyNamedInt_ReturnValue;
	Parms.CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue = CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue = CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue;
	Parms.CallFunc_GetMyNamedInt_ReturnValue_1 = CallFunc_GetMyNamedInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot = CallFunc_CheckPlayerInventoryForItem_InventorySlot;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_1 = CallFunc_CheckPlayerInventoryForItem_Success_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_1 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_2 = CallFunc_CheckPlayerInventoryForItem_Success_2;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_2 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (InitiateFinalDialogue_ != nullptr)
		*InitiateFinalDialogue_ = Parms.InitiateFinalDialogue_;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.DH_ClearDFNectar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::DH_ClearDFNectar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "DH_ClearDFNectar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.SetUpgradeAppend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InName                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABPUsable_DarkFather_C::SetUpgradeAppend(class FName InName, bool Temp_bool_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "SetUpgradeAppend");

	Params::ABPUsable_DarkFather_C_SetUpgradeAppend_Params Parms{};

	Parms.InName = InName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.UnlockUpgradeAndDisplayTutorialWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::UnlockUpgradeAndDisplayTutorialWidget(class FName Upgrade, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_NotEqual_NameName_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "UnlockUpgradeAndDisplayTutorialWidget");

	Params::ABPUsable_DarkFather_C_UnlockUpgradeAndDisplayTutorialWidget_Params Parms{};

	Parms.Upgrade = Upgrade;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.RemoveOneNectarFromInventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UnlockRiposte                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        UnlockAtSeqEnd                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UnlockRiposte                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInventoryItem_Success_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::RemoveOneNectarFromInventory(bool UnlockRiposte, class FName* UnlockAtSeqEnd, bool Local_UnlockRiposte, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_RemoveInventoryItem_Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_RemoveInventoryItem_Success_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_RemoveInventoryItem_Success_2, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "RemoveOneNectarFromInventory");

	Params::ABPUsable_DarkFather_C_RemoveOneNectarFromInventory_Params Parms{};

	Parms.UnlockRiposte = UnlockRiposte;
	Parms.Local_UnlockRiposte = Local_UnlockRiposte;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_RemoveInventoryItem_Success = CallFunc_RemoveInventoryItem_Success;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_RemoveInventoryItem_Success_1 = CallFunc_RemoveInventoryItem_Success_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_RemoveInventoryItem_Success_2 = CallFunc_RemoveInventoryItem_Success_2;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_2 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_2;

	UObject::ProcessEvent(Func, &Parms);

	if (UnlockAtSeqEnd != nullptr)
		*UnlockAtSeqEnd = Parms.UnlockAtSeqEnd;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.GetCurrentDialogueSequence
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDHDialogueLine>     CurrentSequence                                                  (Parm, OutParm, HasGetValueTypeHash)
// class FName                        UpgradeToUnlock                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UpgradeDisplayInfoTableID                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldBranch_                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        BranchText                                                       (Parm, OutParm)
// int32                              Local_NectarDialogue                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMyNamedInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetUpgradeNameParry_UpgradeName                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameParry_UpgradeName_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMyNamedInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMyNamedInt_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsArbNameInSetPure__IsInSet_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPlayerInventoryForItem_Success_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_CheckPlayerInventoryForItem_InventorySlot_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMyNamedInt_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::GetCurrentDialogueSequence(TArray<struct FDHDialogueLine>* CurrentSequence, class FName* UpgradeToUnlock, class FName* UpgradeDisplayInfoTableID, bool* ShouldBranch_, class FText* BranchText, int32 Local_NectarDialogue, int32 CallFunc_GetMyNamedInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, bool CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue, bool CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue, class FName CallFunc_GetUpgradeNameParry_UpgradeName, bool CallFunc_IsUpgradeUnlocked_bUnlocked, int32 Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class FName CallFunc_GetUpgradeNameParry_UpgradeName_1, int32 CallFunc_GetMyNamedInt_ReturnValue_1, class FName CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_GetMyNamedInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FDHDialogueLine>& K2Node_Select_Default, bool CallFunc_CheckPlayerInventoryForItem_Success, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot, bool CallFunc_CheckPlayerInventoryForItem_Success_1, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_1, bool CallFunc_IsArbNameInSetPure__IsInSet_, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_CheckPlayerInventoryForItem_Success_2, int32 CallFunc_CheckPlayerInventoryForItem_InventorySlot_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_GetMyNamedInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "GetCurrentDialogueSequence");

	Params::ABPUsable_DarkFather_C_GetCurrentDialogueSequence_Params Parms{};

	Parms.Local_NectarDialogue = Local_NectarDialogue;
	Parms.CallFunc_GetMyNamedInt_ReturnValue = CallFunc_GetMyNamedInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue = CallFunc_ShouldDoDarkFormFirstDialogue__ReturnValue;
	Parms.CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue = CallFunc_ShouldDoFlutedShellFirstDialogue__ReturnValue;
	Parms.CallFunc_GetUpgradeNameParry_UpgradeName = CallFunc_GetUpgradeNameParry_UpgradeName;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetUpgradeNameParry_UpgradeName_1 = CallFunc_GetUpgradeNameParry_UpgradeName_1;
	Parms.CallFunc_GetMyNamedInt_ReturnValue_1 = CallFunc_GetMyNamedInt_ReturnValue_1;
	Parms.CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd = CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetMyNamedInt_ReturnValue_2 = CallFunc_GetMyNamedInt_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success = CallFunc_CheckPlayerInventoryForItem_Success;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot = CallFunc_CheckPlayerInventoryForItem_InventorySlot;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_1 = CallFunc_CheckPlayerInventoryForItem_Success_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_1 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_1;
	Parms.CallFunc_IsArbNameInSetPure__IsInSet_ = CallFunc_IsArbNameInSetPure__IsInSet_;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_CheckPlayerInventoryForItem_Success_2 = CallFunc_CheckPlayerInventoryForItem_Success_2;
	Parms.CallFunc_CheckPlayerInventoryForItem_InventorySlot_2 = CallFunc_CheckPlayerInventoryForItem_InventorySlot_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetMyNamedInt_ReturnValue_3 = CallFunc_GetMyNamedInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentSequence != nullptr)
		*CurrentSequence = std::move(Parms.CurrentSequence);

	if (UpgradeToUnlock != nullptr)
		*UpgradeToUnlock = Parms.UpgradeToUnlock;

	if (UpgradeDisplayInfoTableID != nullptr)
		*UpgradeDisplayInfoTableID = Parms.UpgradeDisplayInfoTableID;

	if (ShouldBranch_ != nullptr)
		*ShouldBranch_ = Parms.ShouldBranch_;

	if (BranchText != nullptr)
		*BranchText = Parms.BranchText;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.PlayBeckonEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::PlayBeckonEffects(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "PlayBeckonEffects");

	Params::ABPUsable_DarkFather_C_PlayBeckonEffects_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.DisableRaduakFirceComponentTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::DisableRaduakFirceComponentTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "DisableRaduakFirceComponentTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.PlayHealingAbilityUnlockSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::PlayHealingAbilityUnlockSequence(float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "PlayHealingAbilityUnlockSequence");

	Params::ABPUsable_DarkFather_C_PlayHealingAbilityUnlockSequence_Params Parms{};

	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.StorePlayerRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::StorePlayerRef(class AController* Controller, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "StorePlayerRef");

	Params::ABPUsable_DarkFather_C_StorePlayerRef_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.HandleChantSubtitles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::HandleChantSubtitles(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "HandleChantSubtitles");

	Params::ABPUsable_DarkFather_C_HandleChantSubtitles_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnUpgradeUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockedUgprade                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::OnUpgradeUnlocked(class FName UnlockedUgprade, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool K2Node_SwitchName_CmpSuccess, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnUpgradeUnlocked");

	Params::ABPUsable_DarkFather_C_OnUpgradeUnlocked_Params Parms{};

	Parms.UnlockedUgprade = UnlockedUgprade;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.PlayActivationEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::PlayActivationEffects(class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "PlayActivationEffects");

	Params::ABPUsable_DarkFather_C_PlayActivationEffects_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.StartChantSubtitles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ChantText_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::StartChantSubtitles(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUI_ChantText_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "StartChantSubtitles");

	Params::ABPUsable_DarkFather_C_StartChantSubtitles_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMyInt_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::OnActorUsed(class APlayerController* Controller, bool* Success, int32 CallFunc_GetMyInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnActorUsed");

	Params::ABPUsable_DarkFather_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetMyInt_ReturnValue = CallFunc_GetMyInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnNotifyEnd_766EFDA5440FB2EEDBBE3DA82F81B090
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::OnNotifyEnd_766EFDA5440FB2EEDBBE3DA82F81B090(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnNotifyEnd_766EFDA5440FB2EEDBBE3DA82F81B090");

	Params::ABPUsable_DarkFather_C_OnNotifyEnd_766EFDA5440FB2EEDBBE3DA82F81B090_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnNotifyBegin_766EFDA5440FB2EEDBBE3DA82F81B090
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::OnNotifyBegin_766EFDA5440FB2EEDBBE3DA82F81B090(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnNotifyBegin_766EFDA5440FB2EEDBBE3DA82F81B090");

	Params::ABPUsable_DarkFather_C_OnNotifyBegin_766EFDA5440FB2EEDBBE3DA82F81B090_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnInterrupted_766EFDA5440FB2EEDBBE3DA82F81B090
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::OnInterrupted_766EFDA5440FB2EEDBBE3DA82F81B090(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnInterrupted_766EFDA5440FB2EEDBBE3DA82F81B090");

	Params::ABPUsable_DarkFather_C_OnInterrupted_766EFDA5440FB2EEDBBE3DA82F81B090_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnBlendOut_766EFDA5440FB2EEDBBE3DA82F81B090
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::OnBlendOut_766EFDA5440FB2EEDBBE3DA82F81B090(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnBlendOut_766EFDA5440FB2EEDBBE3DA82F81B090");

	Params::ABPUsable_DarkFather_C_OnBlendOut_766EFDA5440FB2EEDBBE3DA82F81B090_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnCompleted_766EFDA5440FB2EEDBBE3DA82F81B090
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::OnCompleted_766EFDA5440FB2EEDBBE3DA82F81B090(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnCompleted_766EFDA5440FB2EEDBBE3DA82F81B090");

	Params::ABPUsable_DarkFather_C_OnCompleted_766EFDA5440FB2EEDBBE3DA82F81B090_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABPUsable_DarkFather_C::BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABPUsable_DarkFather_C_BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABPUsable_DarkFather_C_BndEvt__ChantStopTrigger_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABPUsable_DarkFather_C::BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABPUsable_DarkFather_C_BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABPUsable_DarkFather_C_BndEvt__ChantSubtitleTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ReceiveAnyDamage");

	Params::ABPUsable_DarkFather_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.IncrementDialogAndSaveAndFinishDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::IncrementDialogAndSaveAndFinishDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "IncrementDialogAndSaveAndFinishDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.CheckForFirstTimeInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::CheckForFirstTimeInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "CheckForFirstTimeInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.CheckForUnlockTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UnlockName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPUsable_DarkFather_C::CheckForUnlockTutorial(class FName UnlockName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "CheckForUnlockTutorial");

	Params::ABPUsable_DarkFather_C_CheckForUnlockTutorial_Params Parms{};

	Parms.UnlockName = UnlockName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnOptionSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bYes                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::OnOptionSelected(bool bYes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnOptionSelected");

	Params::ABPUsable_DarkFather_C_OnOptionSelected_Params Parms{};

	Parms.bYes = bYes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.TestDarkFatherEnding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::TestDarkFatherEnding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "TestDarkFatherEnding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.LoadEndingAccessSublevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::LoadEndingAccessSublevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "LoadEndingAccessSublevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.FadeOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::FadeOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "FadeOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.LoadStreamingLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bMakeVisibleAfterLoad                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bShouldBlockOnLoad                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::LoadStreamingLevel(class FName LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "LoadStreamingLevel");

	Params::ABPUsable_DarkFather_C_LoadStreamingLevel_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
	Parms.bShouldBlockOnLoad = bShouldBlockOnLoad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.StartDialogueAfterSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::StartDialogueAfterSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "StartDialogueAfterSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.HideTarnishedSeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::HideTarnishedSeal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "HideTarnishedSeal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ShowTarnishedSeal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::ShowTarnishedSeal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ShowTarnishedSeal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.UnloadStreamingLevel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldBlockOnUnload                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPUsable_DarkFather_C::UnloadStreamingLevel(class FName LevelName, bool bShouldBlockOnUnload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "UnloadStreamingLevel");

	Params::ABPUsable_DarkFather_C_UnloadStreamingLevel_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.bShouldBlockOnUnload = bShouldBlockOnUnload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.StartSealSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::StartSealSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "StartSealSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ShowRiposteTutorialDelayed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::ShowRiposteTutorialDelayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ShowRiposteTutorialDelayed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.OnTutorialDismissed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::OnTutorialDismissed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "OnTutorialDismissed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.FinishDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPUsable_DarkFather_C::FinishDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "FinishDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPUsable_DarkFather.BPUsable_DarkFather_C.ExecuteUbergraph_BPUsable_DarkFather
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_3                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_3                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult_1                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_2                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
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
// class UBriefFadeToBlack_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors_1                (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UnlockName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bYes                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMyNamedInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_LevelName_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bMakeVisibleAfterLoad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bShouldBlockOnLoad                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckMarkDarkFormFirstDialogueCompleted_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckMarkFlutedFirstDialogueCompleted_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALevelSequenceActor*         K2Node_DynamicCast_AsLevel_Sequence_Actor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C*K2Node_DynamicCast_AsTarnished_Seal_Anchor_Posed_Static_Mesh_Blueprint(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameModeUtilInterface_C>K2Node_DynamicCast_AsGame_Mode_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_LevelName                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bShouldBlockOnUnload                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameParry_UpgradeName                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUpgradeNameParry_UpgradeName_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULargeTutorial_C*            CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetArbNameInChangedSetPure_bIsInSet                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckMarkVeryFirstDialogueCompleted_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNewGamePlus_bIsNGPlus                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNewGamePlus_bIsNGPlus_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)

void ABPUsable_DarkFather_C::ExecuteUbergraph_BPUsable_DarkFather(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_3, class AActor* K2Node_ComponentBoundEvent_OtherActor_3, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_3, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_3, bool K2Node_ComponentBoundEvent_bFromSweep_1, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_2, class AActor* K2Node_ComponentBoundEvent_OtherActor_2, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_2, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_2, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_2, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_NotEqual_NameName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2, class FName K2Node_CustomEvent_UnlockName, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool K2Node_SwitchName_CmpSuccess_1, bool K2Node_Event_bYes, bool Temp_bool_Variable, TArray<struct FDHDialogueLine>& K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_GetMyNamedInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_LevelName_1, bool K2Node_CustomEvent_bMakeVisibleAfterLoad, bool K2Node_CustomEvent_bShouldBlockOnLoad, bool CallFunc_CheckMarkDarkFormFirstDialogueCompleted_ReturnValue, bool CallFunc_CheckMarkFlutedFirstDialogueCompleted_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_4, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class ATarnishedSeal_Anchor_PosedStaticMesh_Blueprint_C* K2Node_DynamicCast_AsTarnished_Seal_Anchor_Posed_Static_Mesh_Blueprint, bool K2Node_DynamicCast_bSuccess_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_6, class FName K2Node_CustomEvent_LevelName, bool K2Node_CustomEvent_bShouldBlockOnUnload, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class FName CallFunc_GetUpgradeNameParry_UpgradeName, class FName CallFunc_GetUpgradeNameParry_UpgradeName_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ULargeTutorial_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsActive_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_GetArbNameInChangedSetPure_bIsInSet, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, bool CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, bool CallFunc_CheckMarkVeryFirstDialogueCompleted_ReturnValue, bool CallFunc_IsNewGamePlus_bIsNGPlus, bool CallFunc_IsNewGamePlus_bIsNGPlus_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, class FName CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPUsable_DarkFather_C", "ExecuteUbergraph_BPUsable_DarkFather");

	Params::ABPUsable_DarkFather_C_ExecuteUbergraph_BPUsable_DarkFather_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_3 = K2Node_ComponentBoundEvent_OverlappedComponent_3;
	Parms.K2Node_ComponentBoundEvent_OtherActor_3 = K2Node_ComponentBoundEvent_OtherActor_3;
	Parms.K2Node_ComponentBoundEvent_OtherComp_3 = K2Node_ComponentBoundEvent_OtherComp_3;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_3 = K2Node_ComponentBoundEvent_OtherBodyIndex_3;
	Parms.K2Node_ComponentBoundEvent_bFromSweep_1 = K2Node_ComponentBoundEvent_bFromSweep_1;
	Parms.K2Node_ComponentBoundEvent_SweepResult_1 = K2Node_ComponentBoundEvent_SweepResult_1;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_2 = K2Node_ComponentBoundEvent_OverlappedComponent_2;
	Parms.K2Node_ComponentBoundEvent_OtherActor_2 = K2Node_ComponentBoundEvent_OtherActor_2;
	Parms.K2Node_ComponentBoundEvent_OtherComp_2 = K2Node_ComponentBoundEvent_OtherComp_2;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_2 = K2Node_ComponentBoundEvent_OtherBodyIndex_2;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
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
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors_1 = CallFunc_GetOverlappingActors_OverlappingActors_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_DynamicCast_As0_Base_2 = K2Node_DynamicCast_As0_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface = K2Node_DynamicCast_AsGame_Mode_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.K2Node_CustomEvent_UnlockName = K2Node_CustomEvent_UnlockName;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.K2Node_Event_bYes = K2Node_Event_bYes;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetMyNamedInt_ReturnValue = CallFunc_GetMyNamedInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_LevelName_1 = K2Node_CustomEvent_LevelName_1;
	Parms.K2Node_CustomEvent_bMakeVisibleAfterLoad = K2Node_CustomEvent_bMakeVisibleAfterLoad;
	Parms.K2Node_CustomEvent_bShouldBlockOnLoad = K2Node_CustomEvent_bShouldBlockOnLoad;
	Parms.CallFunc_CheckMarkDarkFormFirstDialogueCompleted_ReturnValue = CallFunc_CheckMarkDarkFormFirstDialogueCompleted_ReturnValue;
	Parms.CallFunc_CheckMarkFlutedFirstDialogueCompleted_ReturnValue = CallFunc_CheckMarkFlutedFirstDialogueCompleted_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsLevel_Sequence_Actor = K2Node_DynamicCast_AsLevel_Sequence_Actor;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsTarnished_Seal_Anchor_Posed_Static_Mesh_Blueprint = K2Node_DynamicCast_AsTarnished_Seal_Anchor_Posed_Static_Mesh_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.K2Node_DynamicCast_AsGame_Mode_Util_Interface_1 = K2Node_DynamicCast_AsGame_Mode_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CustomEvent_LevelName = K2Node_CustomEvent_LevelName;
	Parms.K2Node_CustomEvent_bShouldBlockOnUnload = K2Node_CustomEvent_bShouldBlockOnUnload;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_GetUpgradeNameParry_UpgradeName = CallFunc_GetUpgradeNameParry_UpgradeName;
	Parms.CallFunc_GetUpgradeNameParry_UpgradeName_1 = CallFunc_GetUpgradeNameParry_UpgradeName_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous_1 = CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_GetArbNameInChangedSetPure_bIsInSet = CallFunc_GetArbNameInChangedSetPure_bIsInSet;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;
	Parms.CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_ = CallFunc_DH_CheckAbritraryNameIsInChangedSet_IsInSet_;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.CallFunc_CheckMarkVeryFirstDialogueCompleted_ReturnValue = CallFunc_CheckMarkVeryFirstDialogueCompleted_ReturnValue;
	Parms.CallFunc_IsNewGamePlus_bIsNGPlus = CallFunc_IsNewGamePlus_bIsNGPlus;
	Parms.CallFunc_IsNewGamePlus_bIsNGPlus_1 = CallFunc_IsNewGamePlus_bIsNGPlus_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6;
	Parms.CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd = CallFunc_RemoveOneNectarFromInventory_UnlockAtSeqEnd;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;

	UObject::ProcessEvent(Func, &Parms);

}

}


