#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DialogueStackManager.BP_DialogueStackManager_C
// (Actor)

class UClass* ABP_DialogueStackManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DialogueStackManager_C");

	return Clss;
}


// BP_DialogueStackManager_C BP_DialogueStackManager.Default__BP_DialogueStackManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DialogueStackManager_C* ABP_DialogueStackManager_C::GetDefaultObj()
{
	static class ABP_DialogueStackManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DialogueStackManager_C*>(ABP_DialogueStackManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.PrepareToBeKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_DialogueActorReferencesNewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::PrepareToBeKilled(const struct FStruct_DialogueActorReferences& NewParam, bool CallFunc_EqualEqual_NameName_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "PrepareToBeKilled");

	Params::ABP_DialogueStackManager_C_PrepareToBeKilled_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Pay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_SeperateParameters_ReturnValue                          (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class Enum_ItemNames          CallFunc_NameIDToitemEnum_Output                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ItemEnumToNameID_Name_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetItemData_Pure_Data                                   (None)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::Pay(const class FString& Input, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, TArray<class FString>& CallFunc_SeperateParameters_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, float CallFunc_Conv_StringToFloat_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<float>& K2Node_MakeArray_Array, enum class Enum_ItemNames CallFunc_NameIDToitemEnum_Output, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class FName CallFunc_ItemEnumToNameID_Name, class FName CallFunc_ItemEnumToNameID_Name_1, const struct FItemEntry& CallFunc_GetItemData_Pure_Data, float CallFunc_Remove_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Pay");

	Params::ABP_DialogueStackManager_C_Pay_Params Parms{};

	Parms.Input = Input;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_SeperateParameters_ReturnValue = CallFunc_SeperateParameters_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NameIDToitemEnum_Output = CallFunc_NameIDToitemEnum_Output;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.CallFunc_ItemEnumToNameID_Name_1 = CallFunc_ItemEnumToNameID_Name_1;
	Parms.CallFunc_GetItemData_Pure_Data = CallFunc_GetItemData_Pure_Data;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.DestroyItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::DestroyItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "DestroyItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.CheckForPlayerHealthPercentageTreshold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfPlayerHPIsAboveTreshold_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::CheckForPlayerHealthPercentageTreshold(const class FString& NewParam, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CheckIfPlayerHPIsAboveTreshold_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "CheckForPlayerHealthPercentageTreshold");

	Params::ABP_DialogueStackManager_C_CheckForPlayerHealthPercentageTreshold_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CheckIfPlayerHPIsAboveTreshold_ReturnValue = CallFunc_CheckIfPlayerHPIsAboveTreshold_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetItemHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::SetItemHidden(const class FString& A, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetItemHidden");

	Params::ABP_DialogueStackManager_C_SetItemHidden_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetInteractionUnlocked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::SetInteractionUnlocked(const class FString& A, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetInteractionUnlocked");

	Params::ABP_DialogueStackManager_C_SetInteractionUnlocked_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Invite
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GiftSetID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddCompanion_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::Invite(const class FString& GiftSetID, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class FName CallFunc_Conv_StringToName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_AddCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Invite");

	Params::ABP_DialogueStackManager_C_Invite_Params Parms{};

	Parms.GiftSetID = GiftSetID;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_AddCompanion_ReturnValue = CallFunc_AddCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.MakeDormant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::MakeDormant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "MakeDormant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.WakeUpFromDormancy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::WakeUpFromDormancy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "WakeUpFromDormancy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.FindEventToAttachTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::FindEventToAttachTo(class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "FindEventToAttachTo");

	Params::ABP_DialogueStackManager_C_FindEventToAttachTo_Params Parms{};

	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.GetQuestMarkerActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Aba_QuestMarker_C*           AsBa_Quest_Marker                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           K2Node_DynamicCast_AsBa_Quest_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::GetQuestMarkerActor(class Aba_QuestMarker_C** AsBa_Quest_Marker, class Aba_QuestMarker_C* K2Node_DynamicCast_AsBa_Quest_Marker, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "GetQuestMarkerActor");

	Params::ABP_DialogueStackManager_C_GetQuestMarkerActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsBa_Quest_Marker = K2Node_DynamicCast_AsBa_Quest_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBa_Quest_Marker != nullptr)
		*AsBa_Quest_Marker = Parms.AsBa_Quest_Marker;

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Set map marker secrecy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSecretAtStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_QuestMarker_C*           K2Node_DynamicCast_AsBa_Quest_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::Set_map_marker_secrecy(bool IsSecretAtStart, class Aba_QuestMarker_C* K2Node_DynamicCast_AsBa_Quest_Marker, bool K2Node_DynamicCast_bSuccess, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Set map marker secrecy");

	Params::ABP_DialogueStackManager_C_Set_map_marker_secrecy_Params Parms{};

	Parms.IsSecretAtStart = IsSecretAtStart;
	Parms.K2Node_DynamicCast_AsBa_Quest_Marker = K2Node_DynamicCast_AsBa_Quest_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetMapMarkerDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class Aba_QuestMarker_C*           K2Node_DynamicCast_AsBa_Quest_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::SetMapMarkerDescription(class FText Description, class Aba_QuestMarker_C* K2Node_DynamicCast_AsBa_Quest_Marker, bool K2Node_DynamicCast_bSuccess, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetMapMarkerDescription");

	Params::ABP_DialogueStackManager_C_SetMapMarkerDescription_Params Parms{};

	Parms.Description = Description;
	Parms.K2Node_DynamicCast_AsBa_Quest_Marker = K2Node_DynamicCast_AsBa_Quest_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.CustomGift
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GiftSetID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_Spawnable_00_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LootSet                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LootItem                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// struct FItemEntry                  CallFunc_GetItemData_Pure_Data                                   (None)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetRandomUpgrades_RandomUpgrades                        (ReferenceParm)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_4                                         (ReferenceParm)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::CustomGift(const class FString& GiftSetID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<float>& K2Node_MakeArray_Array, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, int32 Temp_int_Array_Index_Variable, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, const struct FDataTableRowHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSt_LootSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSt_LootItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<float>& K2Node_MakeArray_Array_2, class FName CallFunc_ItemEnumToNameID_Name, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FItemEntry& CallFunc_GetItemData_Pure_Data, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_3, TArray<class FName>& CallFunc_GetRandomUpgrades_RandomUpgrades, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "CustomGift");

	Params::ABP_DialogueStackManager_C_CustomGift_Params Parms{};

	Parms.GiftSetID = GiftSetID;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetItemData_Pure_Data = CallFunc_GetItemData_Pure_Data;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetRandomUpgrades_RandomUpgrades = CallFunc_GetRandomUpgrades_RandomUpgrades;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_ReturnValue = CallFunc_Add_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.GiveEvidence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NoteID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FNoteExperienceHandle       CallFunc_DiscoverEvidence_ExperienceHandle                       (NoDestructor)

void ABP_DialogueStackManager_C::GiveEvidence(const class FString& NoteID, int32 CallFunc_Conv_StringToInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, const struct FNoteExperienceHandle& CallFunc_DiscoverEvidence_ExperienceHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "GiveEvidence");

	Params::ABP_DialogueStackManager_C_GiveEvidence_Params Parms{};

	Parms.NoteID = NoteID;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_DiscoverEvidence_ExperienceHandle = CallFunc_DiscoverEvidence_ExperienceHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Gift
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      GiftSetID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FSt_LootSet                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABP_PickableItem_Spawnable_00_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_LootItem                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// struct FItemEntry                  CallFunc_GetItemData_Pure_Data                                   (None)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// TArray<class FName>                CallFunc_GetRandomUpgrades_RandomUpgrades                        (ReferenceParm)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array_4                                         (ReferenceParm)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::Gift(const class FString& GiftSetID, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FSt_LootSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TArray<float>& K2Node_MakeArray_Array, class ABP_PickableItem_Spawnable_00_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, const struct FSt_LootItem& CallFunc_Array_Get_Item, TArray<float>& K2Node_MakeArray_Array_2, class FName CallFunc_ItemEnumToNameID_Name, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FItemEntry& CallFunc_GetItemData_Pure_Data, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_3, TArray<class FName>& CallFunc_GetRandomUpgrades_RandomUpgrades, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, TArray<float>& K2Node_MakeArray_Array_4, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Gift");

	Params::ABP_DialogueStackManager_C_Gift_Params Parms{};

	Parms.GiftSetID = GiftSetID;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetItemData_Pure_Data = CallFunc_GetItemData_Pure_Data;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_GetRandomUpgrades_RandomUpgrades = CallFunc_GetRandomUpgrades_RandomUpgrades;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_ReturnValue = CallFunc_Add_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.FindMapForQuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               MapFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventMap               Map                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UDataTable*, enum class EEventMap>QuestTablesToEnum                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDataTable*>          K2Node_MakeArray_Array                                           (ReferenceParm)
// class UDataTable*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class UDataTable*, enum class EEventMap>K2Node_MakeVariable_MakeVariableOutput                           (None)
// enum class EEventMap               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UDataTable*>          CallFunc_Map_Keys_Keys                                           (ReferenceParm)

void ABP_DialogueStackManager_C::FindMapForQuest(const class FString& Quest, bool* MapFound, enum class EEventMap* Map, TMap<class UDataTable*, enum class EEventMap> QuestTablesToEnum, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UDataTable*>& K2Node_MakeArray_Array, class UDataTable* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, bool CallFunc_Less_IntInt_ReturnValue, TMap<class UDataTable*, enum class EEventMap> K2Node_MakeVariable_MakeVariableOutput, enum class EEventMap CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, TArray<class UDataTable*>& CallFunc_Map_Keys_Keys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "FindMapForQuest");

	Params::ABP_DialogueStackManager_C_FindMapForQuest_Params Parms{};

	Parms.Quest = Quest;
	Parms.QuestTablesToEnum = QuestTablesToEnum;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;

	UObject::ProcessEvent(Func, &Parms);

	if (MapFound != nullptr)
		*MapFound = Parms.MapFound;

	if (Map != nullptr)
		*Map = Parms.Map;

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.EnableQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Arguments                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      QuestID                                                          (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindMapForQuest_MapFound                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EEventMap               CallFunc_FindMapForQuest_Map                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EnableQuest_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::EnableQuest(const class FString& Arguments, const class FString& QuestID, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_Array_Get_Item, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_FindMapForQuest_MapFound, enum class EEventMap CallFunc_FindMapForQuest_Map, bool CallFunc_EnableQuest_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "EnableQuest");

	Params::ABP_DialogueStackManager_C_EnableQuest_Params Parms{};

	Parms.Arguments = Arguments;
	Parms.QuestID = QuestID;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_FindMapForQuest_MapFound = CallFunc_FindMapForQuest_MapFound;
	Parms.CallFunc_FindMapForQuest_Map = CallFunc_FindMapForQuest_Map;
	Parms.CallFunc_EnableQuest_ReturnValue = CallFunc_EnableQuest_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Resuscitate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ItemEnumToNameID_Name_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetItemData_Pure_Data                                   (None)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentStatsForCompanion2_Valid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCurrentStatsForCompanion2_ReturnValue                (None)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::Resuscitate(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, TArray<float>& K2Node_MakeArray_Array, uint8 CallFunc_MakeLiteralByte_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_PostEvent_ReturnValue, class FName CallFunc_ItemEnumToNameID_Name, class FName CallFunc_ItemEnumToNameID_Name_1, const struct FItemEntry& CallFunc_GetItemData_Pure_Data, float CallFunc_Remove_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Resuscitate");

	Params::ABP_DialogueStackManager_C_Resuscitate_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.CallFunc_ItemEnumToNameID_Name_1 = CallFunc_ItemEnumToNameID_Name_1;
	Parms.CallFunc_GetItemData_Pure_Data = CallFunc_GetItemData_Pure_Data;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCurrentStatsForCompanion2_Valid = CallFunc_GetCurrentStatsForCompanion2_Valid;
	Parms.CallFunc_GetCurrentStatsForCompanion2_ReturnValue = CallFunc_GetCurrentStatsForCompanion2_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetBaseDialogueActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences                 (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::SetBaseDialogueActors(const class FString& Temp_string_Variable, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue, bool K2Node_DynamicCast_bSuccess, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences, const class FString& CallFunc_Conv_NameToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetBaseDialogueActors");

	Params::ABP_DialogueStackManager_C_SetBaseDialogueActors_Params Parms{};

	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_DynamicCast_AsBP_Dialogue = K2Node_DynamicCast_AsBP_Dialogue;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_1 = K2Node_DynamicCast_AsBP_Dialogue_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences = K2Node_MakeStruct_struct_DialogueActorReferences;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ConfirmEvening
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// TArray<class Abp_EveningActionsRelayActor_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class Abp_EveningActionsRelayActor_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCurrentStatsForCompanion2_Valid                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCompanionEntry             CallFunc_GetCurrentStatsForCompanion2_ReturnValue                (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::ConfirmEvening(TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const class FString& CallFunc_SelectString_ReturnValue, TArray<class Abp_EveningActionsRelayActor_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Abp_EveningActionsRelayActor_C* CallFunc_Array_Get_Item, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ConfirmEvening");

	Params::ABP_DialogueStackManager_C_ConfirmEvening_Params Parms{};

	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCurrentStatsForCompanion2_Valid = CallFunc_GetCurrentStatsForCompanion2_Valid;
	Parms.CallFunc_GetCurrentStatsForCompanion2_ReturnValue = CallFunc_GetCurrentStatsForCompanion2_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue_1 = CallFunc_SelectString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Reveal secret on map marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_QuestMarker_C*           K2Node_DynamicCast_AsBa_Quest_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::Reveal_secret_on_map_marker(class Aba_QuestMarker_C* K2Node_DynamicCast_AsBa_Quest_Marker, bool K2Node_DynamicCast_bSuccess, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Reveal secret on map marker");

	Params::ABP_DialogueStackManager_C_Reveal_secret_on_map_marker_Params Parms{};

	Parms.K2Node_DynamicCast_AsBa_Quest_Marker = K2Node_DynamicCast_AsBa_Quest_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ConsumeDialogActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::ConsumeDialogActor(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ConsumeDialogActor");

	Params::ABP_DialogueStackManager_C_ConsumeDialogActor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Set map marker enabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewEnabled                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_QuestMarker_C*           K2Node_DynamicCast_AsBa_Quest_Marker                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::Set_map_marker_enabled(bool NewEnabled, class Aba_QuestMarker_C* K2Node_DynamicCast_AsBa_Quest_Marker, bool K2Node_DynamicCast_bSuccess, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Set map marker enabled");

	Params::ABP_DialogueStackManager_C_Set_map_marker_enabled_Params Parms{};

	Parms.NewEnabled = NewEnabled;
	Parms.K2Node_DynamicCast_AsBa_Quest_Marker = K2Node_DynamicCast_AsBa_Quest_Marker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetCustomName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCompanionDefinition        CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::SetCustomName(const struct FCompanionDefinition& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetCustomName");

	Params::ABP_DialogueStackManager_C_SetCustomName_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetCustomDialogue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*        Self2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SaveAsDefault                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EDayPart>        K2Node_MakeArray_Array                                           (ReferenceParm)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceK2Node_MakeStruct_struct_DialogueDataReference                   (UObjectWrapper, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::SetCustomDialogue(class UChildActorComponent* Self2, bool SaveAsDefault, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue, bool K2Node_DynamicCast_bSuccess, TArray<enum class EDayPart>& K2Node_MakeArray_Array, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FStruct_DialogueDataReference& K2Node_MakeStruct_struct_DialogueDataReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetCustomDialogue");

	Params::ABP_DialogueStackManager_C_SetCustomDialogue_Params Parms{};

	Parms.Self2 = Self2;
	Parms.SaveAsDefault = SaveAsDefault;
	Parms.K2Node_DynamicCast_AsBP_Dialogue = K2Node_DynamicCast_AsBP_Dialogue;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_1 = K2Node_DynamicCast_AsBP_Dialogue_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_struct_DialogueDataReference = K2Node_MakeStruct_struct_DialogueDataReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetDefaultDialog
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_DialogueDataReferenceInputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FStruct_DialogueDataReference>InputPin2                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::SetDefaultDialog(const struct FStruct_DialogueDataReference& InputPin, TArray<struct FStruct_DialogueDataReference>& InputPin2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetDefaultDialog");

	Params::ABP_DialogueStackManager_C_SetDefaultDialog_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.InputPin2 = InputPin2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.GetDialogueStacksFromTable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FStruct_DialogueDataReferenceCallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueDataReferenceCallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::GetDialogueStacksFromTable(TArray<class FString>& Array, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_Array_Get_Item, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FStruct_DialogueDataReference& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, const struct FStruct_DialogueDataReference& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "GetDialogueStacksFromTable");

	Params::ABP_DialogueStackManager_C_GetDialogueStacksFromTable_Params Parms{};

	Parms.Array = Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue = CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.FindCompanionActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_DialogueActorReferencesValue                                                            (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesCallFunc_Map_Find_Value                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::FindCompanionActor(struct FStruct_DialogueActorReferences* Value, bool Found, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FStruct_DialogueActorReferences& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "FindCompanionActor");

	Params::ABP_DialogueStackManager_C_FindCompanionActor_Params Parms{};

	Parms.Found = Found;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.HealMorale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Item                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::HealMorale(class FName Item, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "HealMorale");

	Params::ABP_DialogueStackManager_C_HealMorale_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Heal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetWorstOrBestHealingItem_Return                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorstOrBestHealingItem_FoundAny                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ItemNames          CallFunc_NameIDToitemEnum_Output                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_ItemEnumToNameID_Name                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetItemData_Pure_Data                                   (None)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class FName                        CallFunc_ItemEnumToNameID_Name_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::Heal(FDelegateProperty_ Temp_delegate_Variable, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, TArray<float>& K2Node_MakeArray_Array, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FName CallFunc_GetWorstOrBestHealingItem_Return, bool CallFunc_GetWorstOrBestHealingItem_FoundAny, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class Enum_ItemNames CallFunc_NameIDToitemEnum_Output, class FName CallFunc_ItemEnumToNameID_Name, const struct FItemEntry& CallFunc_GetItemData_Pure_Data, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class FName CallFunc_ItemEnumToNameID_Name_1, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, float CallFunc_Remove_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_PostEvent_ReturnValue, bool CallFunc_HaveBuffCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Heal");

	Params::ABP_DialogueStackManager_C_Heal_Params Parms{};

	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetWorstOrBestHealingItem_Return = CallFunc_GetWorstOrBestHealingItem_Return;
	Parms.CallFunc_GetWorstOrBestHealingItem_FoundAny = CallFunc_GetWorstOrBestHealingItem_FoundAny;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_NameIDToitemEnum_Output = CallFunc_NameIDToitemEnum_Output;
	Parms.CallFunc_ItemEnumToNameID_Name = CallFunc_ItemEnumToNameID_Name;
	Parms.CallFunc_GetItemData_Pure_Data = CallFunc_GetItemData_Pure_Data;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_ItemEnumToNameID_Name_1 = CallFunc_ItemEnumToNameID_Name_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue = CallFunc_HaveBuffCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.PrintNewStatuses
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         DataTableRowHandle                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_new                 (ReferenceParm)
// TArray<class FName>                CallFunc_GetBuffsToReportForCompanion_Output_ex                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)

void ABP_DialogueStackManager_C::PrintNewStatuses(struct FDataTableRowHandle& DataTableRowHandle, int32 Temp_int_Array_Index_Variable, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 Temp_int_Loop_Counter_Variable, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_new, TArray<class FName>& CallFunc_GetBuffsToReportForCompanion_Output_ex, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_BooleanAND_ReturnValue, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "PrintNewStatuses");

	Params::ABP_DialogueStackManager_C_PrintNewStatuses_Params Parms{};

	Parms.DataTableRowHandle = DataTableRowHandle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_new = CallFunc_GetBuffsToReportForCompanion_Output_new;
	Parms.CallFunc_GetBuffsToReportForCompanion_Output_ex = CallFunc_GetBuffsToReportForCompanion_Output_ex;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.BindToDialogueActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Dialogue_C*              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::BindToDialogueActor(class ABP_Dialogue_C* InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "BindToDialogueActor");

	Params::ABP_DialogueStackManager_C_BindToDialogueActor_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.IsDialogueActiveOnCurrentDayPart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_DialogueDataReferenceStruct_DialogueDataReference                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_DialogueStackManager_C::IsDialogueActiveOnCurrentDayPart(struct FStruct_DialogueDataReference& Struct_DialogueDataReference, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "IsDialogueActiveOnCurrentDayPart");

	Params::ABP_DialogueStackManager_C_IsDialogueActiveOnCurrentDayPart_Params Parms{};

	Parms.Struct_DialogueDataReference = Struct_DialogueDataReference;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.CreateDialogueActorClone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Dialogue_C*              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              OutputPin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::CreateDialogueActorClone(class ABP_Dialogue_C* InputPin, class ABP_Dialogue_C** OutputPin, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Dialogue_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "CreateDialogueActorClone");

	Params::ABP_DialogueStackManager_C_CreateDialogueActorClone_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.UpdateDialogueFlagsDefiningCurrentCompanionsState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHealthPhase            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PlayerHasHealingItem_Has_Healing_Item                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn      (ReferenceParm)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// enum class EHealthPhase            CallFunc_GetCurrentHealthPhase_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           K2Node_DynamicCast_AsCGGame_Instance_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HaveBuffCompanion_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::UpdateDialogueFlagsDefiningCurrentCompanionsState(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EHealthPhase Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_PlayerHasHealingItem_Has_Healing_Item, TArray<class FName>& CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, enum class EHealthPhase CallFunc_GetCurrentHealthPhase_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UCGGameInstance_C* K2Node_DynamicCast_AsCGGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_HaveBuffCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "UpdateDialogueFlagsDefiningCurrentCompanionsState");

	Params::ABP_DialogueStackManager_C_UpdateDialogueFlagsDefiningCurrentCompanionsState_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGGame_Instance = K2Node_DynamicCast_AsCGGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_1 = K2Node_DynamicCast_AsCGGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_PlayerHasHealingItem_Has_Healing_Item = CallFunc_PlayerHasHealingItem_Has_Healing_Item;
	Parms.CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn = CallFunc_PlayerHasHealingItem_HealingItemsInPossesionReturn;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetCurrentHealthPhase_ReturnValue = CallFunc_GetCurrentHealthPhase_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsCGGame_Instance_2 = K2Node_DynamicCast_AsCGGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_HaveBuffCompanion_ReturnValue = CallFunc_HaveBuffCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.AddPresetRow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AddToBottom                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceCallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::AddPresetRow(class FName RowName, bool AddToBottom, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_DialogueDataReference& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "AddPresetRow");

	Params::ABP_DialogueStackManager_C_AddPresetRow_Params Parms{};

	Parms.RowName = RowName;
	Parms.AddToBottom = AddToBottom;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::UserConstructionScript(class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_3, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "UserConstructionScript");

	Params::ABP_DialogueStackManager_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1 = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2 = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_3 = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_3;
	Parms.K2Node_DynamicCast_AsBP_Dialogue = K2Node_DynamicCast_AsBP_Dialogue;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.InterpLocation__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::InterpLocation__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "InterpLocation__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.InterpLocation__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::InterpLocation__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "InterpLocation__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.InternalStartPlaying
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::InternalStartPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "InternalStartPlaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.DialogueStack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::DialogueStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "DialogueStack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.Break
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::Break()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "Break");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.BndEvt__HolleringDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_DialogueStackManager_C::BndEvt__HolleringDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "BndEvt__HolleringDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_DialogueStackManager_C_BndEvt__HolleringDistance_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.InternalStartAfterTutorial
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::InternalStartAfterTutorial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "InternalStartAfterTutorial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.InteractionOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::InteractionOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "InteractionOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.TutorialEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::TutorialEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "TutorialEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetPlayerAndStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::SetPlayerAndStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetPlayerAndStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.HealthTutorialEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::HealthTutorialEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "HealthTutorialEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SpendEvening
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::SpendEvening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SpendEvening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.DecisionMadeYes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::DecisionMadeYes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "DecisionMadeYes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.DecisionMadeNo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::DecisionMadeNo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "DecisionMadeNo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.BackToBaseDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::BackToBaseDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "BackToBaseDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ForcedDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomStartPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        StartPointOverride                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::ForcedDialogue(bool CustomStartPoint, class FName StartPointOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ForcedDialogue");

	Params::ABP_DialogueStackManager_C_ForcedDialogue_Params Parms{};

	Parms.CustomStartPoint = CustomStartPoint;
	Parms.StartPointOverride = StartPointOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.SetBasicsOnly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::SetBasicsOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "SetBasicsOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.OnInteractionPressedComponent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMainPawnCpp*                PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             ComponentHit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "OnInteractionPressedComponent");

	Params::ABP_DialogueStackManager_C_OnInteractionPressedComponent_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.ComponentHit = ComponentHit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.BindToSpawnItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::BindToSpawnItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "BindToSpawnItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ItemOnHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InSpawnedPickable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::ItemOnHand(class AActor* InSpawnedPickable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ItemOnHand");

	Params::ABP_DialogueStackManager_C_ItemOnHand_Params Parms{};

	Parms.InSpawnedPickable = InSpawnedPickable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.TakenIntem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PickableItem_00_C*       Actor_reference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DialogueStackManager_C::TakenIntem(class ABP_PickableItem_00_C* Actor_reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "TakenIntem");

	Params::ABP_DialogueStackManager_C_TakenIntem_Params Parms{};

	Parms.Actor_reference = Actor_reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.UnlockItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::UnlockItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "UnlockItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ReleasePlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::ReleasePlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ReleasePlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.OnDeath_Event_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ComponentOwner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGDamageEvent              InDamageEvent                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_DialogueStackManager_C::OnDeath_Event_0(class AActor* ComponentOwner, struct FCGDamageEvent& InDamageEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "OnDeath_Event_0");

	Params::ABP_DialogueStackManager_C_OnDeath_Event_0_Params Parms{};

	Parms.ComponentOwner = ComponentOwner;
	Parms.InDamageEvent = InDamageEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ExecuteUbergraph_BP_DialogueStackManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPAnimQuery                K2Node_MakeStruct_FPAnimQuery                                    (NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QueryActivity_OutQueryResult                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFPAnimQuery>        CallFunc_QueryActivity_OutQueryQueue                             (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueStackDataRepositoryCallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueDataReferenceCallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences                 (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueDataReferenceCallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_Output    (HasGetValueTypeHash)
// bool                               CallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_5                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_ParseIntoArray_ReturnValue                              (ReferenceParm)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              CallFunc_CreateDialogueActorClone_OutputPin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesK2Node_MakeStruct_struct_DialogueActorReferences_1               (IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow_1                        (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPAnimQuery                K2Node_MakeStruct_FPAnimQuery_1                                  (NoDestructor)
// bool                               CallFunc_QueryActivity_OutQueryResult_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFPAnimQuery>        CallFunc_QueryActivity_OutQueryQueue_1                           (ReferenceParm)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_CustomStartPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_StartPointOverride                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_6                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfCompanionHasSomethingImportantToSay_Has          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_7                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDayPart                CallFunc_GetDayPart_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_8                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable_4                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPawnCpp*                K2Node_Event_PlayerPawn                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_Event_ComponentHit                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_QuestMarker_C*           CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFPAnimQuery                K2Node_MakeStruct_FPAnimQuery_2                                  (NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_FindCompanionActor_Value                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_QueryActivity_OutQueryResult_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFPAnimQuery>        CallFunc_QueryActivity_OutQueryQueue_2                           (ReferenceParm)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_InSpawnedPickable                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_C*       K2Node_DynamicCast_AsBP_Pickable_Item_00                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_C*       K2Node_CustomEvent_Actor_reference                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_col_ViewableObjectInteractivePoint_01_C*K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Dialogue_C*              K2Node_DynamicCast_AsBP_Dialogue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_9                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ConstParm, ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_DialogueActorReferences>CallFunc_Map_Values_Values                                       (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DialogueActorReferencesCallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_10                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FCompanionEntry>     CallFunc_GetAvailableCompanions_ReturnValue                      (ReferenceParm)
// struct FCompanionEntry             CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_11                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ComponentOwner                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCGDamageEvent              K2Node_CustomEvent_InDamageEvent                                 (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_RemoveCompanion_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_DialogueActorReferences>CallFunc_Map_Values_Values_1                                     (ReferenceParm)
// struct FStruct_DialogueActorReferencesCallFunc_Array_Get_Item_2                                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_12                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class ACGMovementState>CallFunc_GetCurrentMovementState_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DialogueStackManager_C::ExecuteUbergraph_BP_DialogueStackManager(int32 EntryPoint, const class FString& Temp_string_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, bool CallFunc_QueryActivity_OutQueryResult, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FStruct_DialogueStackDataRepository& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_DialogueDataReference& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& Temp_string_Variable_1, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, const struct FStruct_DialogueDataReference& CallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_Output, bool CallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Array_Index_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const class FString& Temp_string_Variable_2, class FName CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, TArray<class FString>& CallFunc_ParseIntoArray_ReturnValue, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_3, bool K2Node_DynamicCast_bSuccess_3, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_4, bool K2Node_DynamicCast_bSuccess_4, class ABP_Dialogue_C* CallFunc_CreateDialogueActorClone_OutputPin, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_5, bool K2Node_DynamicCast_bSuccess_5, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_6, bool K2Node_DynamicCast_bSuccess_6, const struct FStruct_DialogueActorReferences& K2Node_MakeStruct_struct_DialogueActorReferences_1, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_7, bool K2Node_DynamicCast_bSuccess_7, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_8, bool K2Node_DynamicCast_bSuccess_8, const class FString& Temp_string_Variable_3, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, TArray<float>& K2Node_MakeArray_Array, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery_1, bool CallFunc_QueryActivity_OutQueryResult_1, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12, int32 Temp_int_Array_Index_Variable_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_9, bool K2Node_DynamicCast_bSuccess_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_10, bool K2Node_DynamicCast_bSuccess_10, bool K2Node_CustomEvent_CustomStartPoint, class FName K2Node_CustomEvent_StartPointOverride, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_11, bool K2Node_DynamicCast_bSuccess_11, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, bool CallFunc_CheckIfCompanionHasSomethingImportantToSay_Has, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, enum class EDayPart CallFunc_GetDayPart_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, class FName Temp_name_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const class FString& Temp_string_Variable_4, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19, class UClass* CallFunc_GetObjectClass_ReturnValue_1, const struct FFPAnimQuery& K2Node_MakeStruct_FPAnimQuery_2, const struct FStruct_DialogueActorReferences& CallFunc_FindCompanionActor_Value, bool CallFunc_QueryActivity_OutQueryResult_2, TArray<struct FFPAnimQuery>& CallFunc_QueryActivity_OutQueryQueue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess_12, class AActor* K2Node_CustomEvent_InSpawnedPickable, class ABP_PickableItem_00_C* K2Node_DynamicCast_AsBP_Pickable_Item_00, bool K2Node_DynamicCast_bSuccess_13, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class ABP_PickableItem_00_C* K2Node_CustomEvent_Actor_reference, int32 Temp_int_Loop_Counter_Variable_2, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess_14, int32 CallFunc_Add_IntInt_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20, class ABP_Dialogue_C* K2Node_DynamicCast_AsBP_Dialogue_12, bool K2Node_DynamicCast_bSuccess_15, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22, const class FString& Temp_string_Variable_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_Map_Find_Value_6, bool CallFunc_Map_Find_ReturnValue_6, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue, TArray<struct FStruct_DialogueActorReferences>& CallFunc_Map_Values_Values, bool CallFunc_BooleanAND_ReturnValue_4, const struct FStruct_DialogueActorReferences& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_16, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, const struct FCompanionEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_11, class AActor* K2Node_CustomEvent_ComponentOwner, const struct FCGDamageEvent& K2Node_CustomEvent_InDamageEvent, bool CallFunc_RemoveCompanion_ReturnValue, TArray<struct FStruct_DialogueActorReferences>& CallFunc_Map_Values_Values_1, const struct FStruct_DialogueActorReferences& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_12, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ExecuteUbergraph_BP_DialogueStackManager");

	Params::ABP_DialogueStackManager_C_ExecuteUbergraph_BP_DialogueStackManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.K2Node_MakeStruct_FPAnimQuery = K2Node_MakeStruct_FPAnimQuery;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_QueryActivity_OutQueryResult = CallFunc_QueryActivity_OutQueryResult;
	Parms.CallFunc_QueryActivity_OutQueryQueue = CallFunc_QueryActivity_OutQueryQueue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue = CallFunc_GetCurrentMovementState_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_1 = CallFunc_EqualEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Map_Remove_ReturnValue = CallFunc_Map_Remove_ReturnValue;
	Parms.CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue = CallFunc_IsDialogueActiveOnCurrentDayPart_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences = K2Node_MakeStruct_struct_DialogueActorReferences;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5;
	Parms.CallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_Output = CallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_Output;
	Parms.CallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_ReturnValue = CallFunc_GetMoraleFeedbackDialogueAndRemoveItFromStack_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_5 = CallFunc_GetCGGameInstance_AsCGGame_Instance_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_8;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_9;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_10;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_11;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBP_Dialogue = K2Node_DynamicCast_AsBP_Dialogue;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_ParseIntoArray_ReturnValue = CallFunc_ParseIntoArray_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_1 = K2Node_DynamicCast_AsBP_Dialogue_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_2 = K2Node_DynamicCast_AsBP_Dialogue_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_3 = K2Node_DynamicCast_AsBP_Dialogue_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_4 = K2Node_DynamicCast_AsBP_Dialogue_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_CreateDialogueActorClone_OutputPin = CallFunc_CreateDialogueActorClone_OutputPin;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_5 = K2Node_DynamicCast_AsBP_Dialogue_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_6 = K2Node_DynamicCast_AsBP_Dialogue_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_MakeStruct_struct_DialogueActorReferences_1 = K2Node_MakeStruct_struct_DialogueActorReferences_1;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_7 = K2Node_DynamicCast_AsBP_Dialogue_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_8 = K2Node_DynamicCast_AsBP_Dialogue_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FPAnimQuery_1 = K2Node_MakeStruct_FPAnimQuery_1;
	Parms.CallFunc_QueryActivity_OutQueryResult_1 = CallFunc_QueryActivity_OutQueryResult_1;
	Parms.CallFunc_QueryActivity_OutQueryQueue_1 = CallFunc_QueryActivity_OutQueryQueue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_12;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_13;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_9 = K2Node_DynamicCast_AsBP_Dialogue_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_14;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_15;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_16;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_17;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_10 = K2Node_DynamicCast_AsBP_Dialogue_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_CustomEvent_CustomStartPoint = K2Node_CustomEvent_CustomStartPoint;
	Parms.K2Node_CustomEvent_StartPointOverride = K2Node_CustomEvent_StartPointOverride;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_11 = K2Node_DynamicCast_AsBP_Dialogue_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_6 = CallFunc_GetCGGameInstance_AsCGGame_Instance_6;
	Parms.CallFunc_CheckIfCompanionHasSomethingImportantToSay_Has = CallFunc_CheckIfCompanionHasSomethingImportantToSay_Has;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_7 = CallFunc_GetCGGameInstance_AsCGGame_Instance_7;
	Parms.CallFunc_GetDayPart_ReturnValue = CallFunc_GetDayPart_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_8 = CallFunc_GetCGGameInstance_AsCGGame_Instance_8;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Map_Find_Value_5 = CallFunc_Map_Find_Value_5;
	Parms.CallFunc_Map_Find_ReturnValue_5 = CallFunc_Map_Find_ReturnValue_5;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1 = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1;
	Parms.K2Node_Event_PlayerPawn = K2Node_Event_PlayerPawn;
	Parms.K2Node_Event_ComponentHit = K2Node_Event_ComponentHit;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2 = CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_18;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_19;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.K2Node_MakeStruct_FPAnimQuery_2 = K2Node_MakeStruct_FPAnimQuery_2;
	Parms.CallFunc_FindCompanionActor_Value = CallFunc_FindCompanionActor_Value;
	Parms.CallFunc_QueryActivity_OutQueryResult_2 = CallFunc_QueryActivity_OutQueryResult_2;
	Parms.CallFunc_QueryActivity_OutQueryQueue_2 = CallFunc_QueryActivity_OutQueryQueue_2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_CustomEvent_InSpawnedPickable = K2Node_CustomEvent_InSpawnedPickable;
	Parms.K2Node_DynamicCast_AsBP_Pickable_Item_00 = K2Node_DynamicCast_AsBP_Pickable_Item_00;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_CustomEvent_Actor_reference = K2Node_CustomEvent_Actor_reference;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01 = K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_20;
	Parms.K2Node_DynamicCast_AsBP_Dialogue_12 = K2Node_DynamicCast_AsBP_Dialogue_12;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_9 = CallFunc_GetCGGameInstance_AsCGGame_Instance_9;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_21;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_22;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_6 = CallFunc_Map_Find_Value_6;
	Parms.CallFunc_Map_Find_ReturnValue_6 = CallFunc_Map_Find_ReturnValue_6;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_23;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_24;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue_1 = CallFunc_GetCurrentMovementState_ReturnValue_1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter_1 = K2Node_DynamicCast_AsCGAICharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_10 = CallFunc_GetCGGameInstance_AsCGGame_Instance_10;
	Parms.CallFunc_GetAvailableCompanions_ReturnValue = CallFunc_GetAvailableCompanions_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_11 = CallFunc_GetCGGameInstance_AsCGGame_Instance_11;
	Parms.K2Node_CustomEvent_ComponentOwner = K2Node_CustomEvent_ComponentOwner;
	Parms.K2Node_CustomEvent_InDamageEvent = K2Node_CustomEvent_InDamageEvent;
	Parms.CallFunc_RemoveCompanion_ReturnValue = CallFunc_RemoveCompanion_ReturnValue;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_12 = CallFunc_GetCGGameInstance_AsCGGame_Instance_12;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_25;
	Parms.CallFunc_GetCurrentMovementState_ReturnValue_2 = CallFunc_GetCurrentMovementState_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue_2 = CallFunc_EqualEqual_ClassClass_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ConversationEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::ConversationEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ConversationEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DialogueStackManager.BP_DialogueStackManager_C.ConversationStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_DialogueStackManager_C::ConversationStarted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DialogueStackManager_C", "ConversationStarted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


