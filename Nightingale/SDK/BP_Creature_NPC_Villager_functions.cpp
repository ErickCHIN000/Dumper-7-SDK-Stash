#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C
// (Actor, Pawn)

class UClass* ABP_Creature_NPC_Villager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Creature_NPC_Villager_C");

	return Clss;
}


// BP_Creature_NPC_Villager_C BP_Creature_NPC_Villager.Default__BP_Creature_NPC_Villager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Creature_NPC_Villager_C* ABP_Creature_NPC_Villager_C::GetDefaultObj()
{
	static class ABP_Creature_NPC_Villager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Creature_NPC_Villager_C*>(ABP_Creature_NPC_Villager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.ShouldOptOutOfPersistenceStore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::ShouldOptOutOfPersistenceStore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "ShouldOptOutOfPersistenceStore");

	Params::ABP_Creature_NPC_Villager_C_ShouldOptOutOfPersistenceStore_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetContainerFromProvider
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Creature_NPC_Villager_C::GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetContainerFromProvider");

	Params::ABP_Creature_NPC_Villager_C_GetContainerFromProvider_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetDefaultContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IItemContainer> ABP_Creature_NPC_Villager_C::GetDefaultContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetDefaultContainer");

	Params::ABP_Creature_NPC_Villager_C_GetDefaultContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.HasContainer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Container                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::HasContainer(TScriptInterface<class IItemContainer>& Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "HasContainer");

	Params::ABP_Creature_NPC_Villager_C_HasContainer_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.HasContainerFromHandle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemContainerHandle        ContainerHandle                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "HasContainerFromHandle");

	Params::ABP_Creature_NPC_Villager_C_HasContainerFromHandle_Params Parms{};

	Parms.ContainerHandle = ContainerHandle;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetLeader
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXCharacter*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               CallFunc_GetLeader_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class ANWXCharacter* ABP_Creature_NPC_Villager_C::GetLeader(class ANWXCharacter* CallFunc_GetLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetLeader");

	Params::ABP_Creature_NPC_Villager_C_GetLeader_Params Parms{};

	Parms.CallFunc_GetLeader_ReturnValue = CallFunc_GetLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.FillPersistenceCache
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FCompanionPersistenceData   PersistenceCache                                                 (Parm, OutParm)
// struct FGuid                       CallFunc_GetCreatureUID_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetHomeRealmID_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetAllItems_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// struct FStringTableEntryHandle     CallFunc_GetNPCNameHandle_OutNameHandle                          (None)
// struct FDataTableRowHandle         CallFunc_GetSelectedArchetype_SelectedArchetype                  (NoDestructor, HasGetValueTypeHash)
// struct FCompanionPersistenceData   K2Node_MakeStruct_CompanionPersistenceData                       (None)

void ABP_Creature_NPC_Villager_C::FillPersistenceCache(struct FCompanionPersistenceData* PersistenceCache, const struct FGuid& CallFunc_GetCreatureUID_ReturnValue, const class FString& CallFunc_GetHomeRealmID_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle, const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const struct FCompanionPersistenceData& K2Node_MakeStruct_CompanionPersistenceData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "FillPersistenceCache");

	Params::ABP_Creature_NPC_Villager_C_FillPersistenceCache_Params Parms{};

	Parms.CallFunc_GetCreatureUID_ReturnValue = CallFunc_GetCreatureUID_ReturnValue;
	Parms.CallFunc_GetHomeRealmID_ReturnValue = CallFunc_GetHomeRealmID_ReturnValue;
	Parms.CallFunc_GetAllItems_self_CastInput = CallFunc_GetAllItems_self_CastInput;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetNPCNameHandle_OutNameHandle = CallFunc_GetNPCNameHandle_OutNameHandle;
	Parms.CallFunc_GetSelectedArchetype_SelectedArchetype = CallFunc_GetSelectedArchetype_SelectedArchetype;
	Parms.K2Node_MakeStruct_CompanionPersistenceData = K2Node_MakeStruct_CompanionPersistenceData;

	UObject::ProcessEvent(Func, &Parms);

	if (PersistenceCache != nullptr)
		*PersistenceCache = std::move(Parms.PersistenceCache);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.ReloadPersistenceCache
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCompanionPersistenceData   PersistenceCache                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FDataTableRowHandle         LSpawnerData                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               LUpdatedInstanceIDs                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RemoveAllItems_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveAllItems_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::ReloadPersistenceCache(struct FCompanionPersistenceData& PersistenceCache, const struct FDataTableRowHandle& LSpawnerData, const TArray<struct FGuid>& LUpdatedInstanceIDs, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_RemoveAllItems_self_CastInput, bool CallFunc_RemoveAllItems_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "ReloadPersistenceCache");

	Params::ABP_Creature_NPC_Villager_C_ReloadPersistenceCache_Params Parms{};

	Parms.PersistenceCache = PersistenceCache;
	Parms.LSpawnerData = LSpawnerData;
	Parms.LUpdatedInstanceIDs = LUpdatedInstanceIDs;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RemoveAllItems_self_CastInput = CallFunc_RemoveAllItems_self_CastInput;
	Parms.CallFunc_RemoveAllItems_ReturnValue = CallFunc_RemoveAllItems_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetAIFaction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

class FString ABP_Creature_NPC_Villager_C::GetAIFaction(const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetAIFaction");

	Params::ABP_Creature_NPC_Villager_C_GetAIFaction_Params Parms{};

	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetEquippedItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AEquippableItem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemConst_Weapon                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class AEquippableItem* ABP_Creature_NPC_Villager_C::GetEquippedItem(class AEquippableItem* CallFunc_GetItemConst_Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetEquippedItem");

	Params::ABP_Creature_NPC_Villager_C_GetEquippedItem_Params Parms{};

	Parms.CallFunc_GetItemConst_Weapon = CallFunc_GetItemConst_Weapon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetLeaderName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      LeaderName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLeaderName_LeaderName                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetLeaderName_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::GetLeaderName(class FString* LeaderName, const class FString& CallFunc_GetLeaderName_LeaderName, bool CallFunc_GetLeaderName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetLeaderName");

	Params::ABP_Creature_NPC_Villager_C_GetLeaderName_Params Parms{};

	Parms.CallFunc_GetLeaderName_LeaderName = CallFunc_GetLeaderName_LeaderName;
	Parms.CallFunc_GetLeaderName_ReturnValue = CallFunc_GetLeaderName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (LeaderName != nullptr)
		*LeaderName = std::move(Parms.LeaderName);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.CanBeDismissed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Recruiter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 LLeaderController                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetLeaderController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::CanBeDismissed(class AController* Recruiter, class AController* LLeaderController, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetLeaderController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "CanBeDismissed");

	Params::ABP_Creature_NPC_Villager_C_CanBeDismissed_Params Parms{};

	Parms.Recruiter = Recruiter;
	Parms.LLeaderController = LLeaderController;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLeaderController_ReturnValue = CallFunc_GetLeaderController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.CanBeRecruited
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DesiredLeader                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ERecruitmentFailureReasonOutFailureReason                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompanionManagementComponent*LCompanionManagement                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPreviousLeader_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInHomeRealm_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasCompanion_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompanionManagementComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               CallFunc_GetLeader_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanBeRecruited_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::CanBeRecruited(class AActor* DesiredLeader, enum class ERecruitmentFailureReason* OutFailureReason, class UCompanionManagementComponent* LCompanionManagement, bool CallFunc_IsPreviousLeader_ReturnValue, bool CallFunc_IsInHomeRealm_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasCompanion_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UCompanionManagementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXCharacter* CallFunc_GetLeader_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetCanBeRecruited_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "CanBeRecruited");

	Params::ABP_Creature_NPC_Villager_C_CanBeRecruited_Params Parms{};

	Parms.DesiredLeader = DesiredLeader;
	Parms.LCompanionManagement = LCompanionManagement;
	Parms.CallFunc_IsPreviousLeader_ReturnValue = CallFunc_IsPreviousLeader_ReturnValue;
	Parms.CallFunc_IsInHomeRealm_ReturnValue = CallFunc_IsInHomeRealm_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasCompanion_ReturnValue = CallFunc_HasCompanion_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLeader_ReturnValue = CallFunc_GetLeader_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCanBeRecruited_ReturnValue = CallFunc_GetCanBeRecruited_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFailureReason != nullptr)
		*OutFailureReason = Parms.OutFailureReason;

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.TryDismissCompanion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Recruiter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               LLeaderCharacter                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeDismissed_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               CallFunc_GetLeader_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::TryDismissCompanion(class AController* Recruiter, class ANWXCharacter* LLeaderCharacter, bool CallFunc_CanBeDismissed_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "TryDismissCompanion");

	Params::ABP_Creature_NPC_Villager_C_TryDismissCompanion_Params Parms{};

	Parms.Recruiter = Recruiter;
	Parms.LLeaderCharacter = LLeaderCharacter;
	Parms.CallFunc_CanBeDismissed_ReturnValue = CallFunc_CanBeDismissed_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLeader_ReturnValue = CallFunc_GetLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.TryRecruitCompanion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Recruiter                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERecruitmentFailureReasonCallFunc_CanBeRecruited_OutFailureReason                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeRecruited_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::TryRecruitCompanion(class AController* Recruiter, bool CallFunc_IsValid_ReturnValue, enum class ERecruitmentFailureReason CallFunc_CanBeRecruited_OutFailureReason, bool CallFunc_CanBeRecruited_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "TryRecruitCompanion");

	Params::ABP_Creature_NPC_Villager_C_TryRecruitCompanion_Params Parms{};

	Parms.Recruiter = Recruiter;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CanBeRecruited_OutFailureReason = CallFunc_CanBeRecruited_OutFailureReason;
	Parms.CallFunc_CanBeRecruited_ReturnValue = CallFunc_CanBeRecruited_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.AdjustMaxDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DesiredDistance                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasLeader_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_Creature_NPC_Villager_C::AdjustMaxDistance(float DesiredDistance, bool CallFunc_HasLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "AdjustMaxDistance");

	Params::ABP_Creature_NPC_Villager_C_AdjustMaxDistance_Params Parms{};

	Parms.DesiredDistance = DesiredDistance;
	Parms.CallFunc_HasLeader_ReturnValue = CallFunc_HasLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetDistanceToHome
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetHomeLocation_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_Creature_NPC_Villager_C::GetDistanceToHome(struct FVector& Location, const struct FVector& CallFunc_GetHomeLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetDistanceToHome");

	Params::ABP_Creature_NPC_Villager_C_GetDistanceToHome_Params Parms{};

	Parms.Location = Location;
	Parms.CallFunc_GetHomeLocation_ReturnValue = CallFunc_GetHomeLocation_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.HasLeader
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompanion_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_Creature_NPC_Villager_C::HasLeader(bool CallFunc_IsCompanion_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "HasLeader");

	Params::ABP_Creature_NPC_Villager_C_HasLeader_Params Parms{};

	Parms.CallFunc_IsCompanion_ReturnValue = CallFunc_IsCompanion_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.GetHomeLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               LLeader                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               CallFunc_GetLeader_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_Creature_NPC_Villager_C::GetHomeLocation(class ANWXCharacter* LLeader, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* CallFunc_GetLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "GetHomeLocation");

	Params::ABP_Creature_NPC_Villager_C_GetHomeLocation_Params Parms{};

	Parms.LLeader = LLeader;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLeader_ReturnValue = CallFunc_GetLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.CanInteractWithActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInteractionData            InteractionData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               InteractAvailable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanInteractWithActor_InteractAvailable                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompanionDisabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_CanInteractWithActor_InteractAvailable, bool CallFunc_IsCompanionDisabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "CanInteractWithActor");

	Params::ABP_Creature_NPC_Villager_C_CanInteractWithActor_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractionData = InteractionData;
	Parms.CallFunc_CanInteractWithActor_InteractAvailable = CallFunc_CanInteractWithActor_InteractAvailable;
	Parms.CallFunc_IsCompanionDisabled_ReturnValue = CallFunc_IsCompanionDisabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractAvailable != nullptr)
		*InteractAvailable = Parms.InteractAvailable;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.SpawnDeathChest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldSpawnDeathChest_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetAllItems_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_DeathChestSpawner_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_SetInterfacePropertyByName_Value_CastInput              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::SpawnDeathChest(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_ShouldSpawnDeathChest_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_DeathChestSpawner_C* CallFunc_FinishSpawningActor_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_SetInterfacePropertyByName_Value_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "SpawnDeathChest");

	Params::ABP_Creature_NPC_Villager_C_SpawnDeathChest_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_ShouldSpawnDeathChest_ReturnValue = CallFunc_ShouldSpawnDeathChest_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetAllItems_self_CastInput = CallFunc_GetAllItems_self_CastInput;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SetInterfacePropertyByName_Value_CastInput = CallFunc_SetInterfacePropertyByName_Value_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.CheckAndSetNPCSpawner
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         LSpawnerData                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawner_NPCGroup_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::CheckAndSetNPCSpawner(bool* Success, const struct FDataTableRowHandle& LSpawnerData, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_CreatureSpawner_NPCGroup_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "CheckAndSetNPCSpawner");

	Params::ABP_Creature_NPC_Villager_C_CheckAndSetNPCSpawner_Params Parms{};

	Parms.LSpawnerData = LSpawnerData;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.OnCompanionCanBeRecruitedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanBeRecruited                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::OnCompanionCanBeRecruitedHandler(bool CanBeRecruited)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "OnCompanionCanBeRecruitedHandler");

	Params::ABP_Creature_NPC_Villager_C_OnCompanionCanBeRecruitedHandler_Params Parms{};

	Parms.CanBeRecruited = CanBeRecruited;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.SetEmployeeManagementMenuAvailable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Available                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::SetEmployeeManagementMenuAvailable(bool Available, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "SetEmployeeManagementMenuAvailable");

	Params::ABP_Creature_NPC_Villager_C_SetEmployeeManagementMenuAvailable_Params Parms{};

	Parms.Available = Available;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.OnLinkedReferencesRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Villager_C::OnLinkedReferencesRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "OnLinkedReferencesRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.DEBUG_TryRecruitAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXCharacter*               Recruiter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::DEBUG_TryRecruitAI(class ANWXCharacter* Recruiter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "DEBUG_TryRecruitAI");

	Params::ABP_Creature_NPC_Villager_C_DEBUG_TryRecruitAI_Params Parms{};

	Parms.Recruiter = Recruiter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.DEBUG_TryDismissAI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXCharacter*               Recruiter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::DEBUG_TryDismissAI(class ANWXCharacter* Recruiter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "DEBUG_TryDismissAI");

	Params::ABP_Creature_NPC_Villager_C_DEBUG_TryDismissAI_Params Parms{};

	Parms.Recruiter = Recruiter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.CrossServerSetAssociatedEncounter
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Associated_Encounter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::CrossServerSetAssociatedEncounter(class AEncounterBase* Associated_Encounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "CrossServerSetAssociatedEncounter");

	Params::ABP_Creature_NPC_Villager_C_CrossServerSetAssociatedEncounter_Params Parms{};

	Parms.Associated_Encounter = Associated_Encounter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.Associated Encounter Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEncounterBase*              Encounter                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bResetTriggers                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::Associated_Encounter_Finished(class AEncounterBase* Encounter, bool bSuccess, bool bResetTriggers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "Associated Encounter Finished");

	Params::ABP_Creature_NPC_Villager_C_Associated_Encounter_Finished_Params Parms{};

	Parms.Encounter = Encounter;
	Parms.bSuccess = bSuccess;
	Parms.bResetTriggers = bResetTriggers;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.AssignOnCompanionRecruitedDelegate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 InDelegate                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::AssignOnCompanionRecruitedDelegate(FDelegateProperty_& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "AssignOnCompanionRecruitedDelegate");

	Params::ABP_Creature_NPC_Villager_C_AssignOnCompanionRecruitedDelegate_Params Parms{};

	Parms.InDelegate = InDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.AssignOnCompanionDismissedDelegate
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 InDelegate                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::AssignOnCompanionDismissedDelegate(FDelegateProperty_& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "AssignOnCompanionDismissedDelegate");

	Params::ABP_Creature_NPC_Villager_C_AssignOnCompanionDismissedDelegate_Params Parms{};

	Parms.InDelegate = InDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Villager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.TryReviveCompanion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Villager_C::TryReviveCompanion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "TryReviveCompanion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.PreReloadPersistenceCache
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FCompanionPersistenceData   PersistenceCache                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_Creature_NPC_Villager_C::PreReloadPersistenceCache(struct FCompanionPersistenceData& PersistenceCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "PreReloadPersistenceCache");

	Params::ABP_Creature_NPC_Villager_C_PreReloadPersistenceCache_Params Parms{};

	Parms.PersistenceCache = PersistenceCache;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "ReceiveEndPlay");

	Params::ABP_Creature_NPC_Villager_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.EmptyInventory
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Villager_C::EmptyInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "EmptyInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.ResetInventory
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Villager_C::ResetInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "ResetInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.OnPersistentDataRestored
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Creature_NPC_Villager_C::OnPersistentDataRestored()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "OnPersistentDataRestored");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Creature_NPC_Villager.BP_Creature_NPC_Villager_C.ExecuteUbergraph_BP_Creature_NPC_Villager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_Event_Recruiter_1                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXCharacter*               K2Node_Event_Recruiter                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryRecruitCompanion_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryDismissCompanion_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_Event_Associated_Encounter                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class AEncounterBase*              K2Node_CustomEvent_Encounter                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bResetTriggers                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Event_InDelegate_1                                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_Event_InDelegate                                          (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionPersistenceData   K2Node_Event_PersistenceCache                                    (ConstParm)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckAndSetNPCSpawner_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCanBeRecruited_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCData                 CallFunc_GetNPCDataFromDataTableRow_OutNPCData                   (None)
// enum class ENPCBlueprintHelperGetResultCallFunc_GetNPCDataFromDataTableRow_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNPCDataFromDataTableRow_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Creature_NPC_Villager_C::ExecuteUbergraph_BP_Creature_NPC_Villager(int32 EntryPoint, class ANWXCharacter* K2Node_Event_Recruiter_1, class ANWXCharacter* K2Node_Event_Recruiter, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_TryRecruitCompanion_ReturnValue, bool CallFunc_TryDismissCompanion_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FGameplayTag& Temp_struct_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AEncounterBase* K2Node_Event_Associated_Encounter, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class AEncounterBase* K2Node_CustomEvent_Encounter, bool K2Node_CustomEvent_bSuccess, bool K2Node_CustomEvent_bResetTriggers, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_Event_InDelegate_1, FDelegateProperty_ K2Node_Event_InDelegate, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue, const struct FCompanionPersistenceData& K2Node_Event_PersistenceCache, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_CheckAndSetNPCSpawner_Success, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_GetCanBeRecruited_ReturnValue, const struct FNWXNPCData& CallFunc_GetNPCDataFromDataTableRow_OutNPCData, enum class ENPCBlueprintHelperGetResult CallFunc_GetNPCDataFromDataTableRow_Branches, bool CallFunc_GetNPCDataFromDataTableRow_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Creature_NPC_Villager_C", "ExecuteUbergraph_BP_Creature_NPC_Villager");

	Params::ABP_Creature_NPC_Villager_C_ExecuteUbergraph_BP_Creature_NPC_Villager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Recruiter_1 = K2Node_Event_Recruiter_1;
	Parms.K2Node_Event_Recruiter = K2Node_Event_Recruiter;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_TryRecruitCompanion_ReturnValue = CallFunc_TryRecruitCompanion_ReturnValue;
	Parms.CallFunc_TryDismissCompanion_ReturnValue = CallFunc_TryDismissCompanion_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_Event_Associated_Encounter = K2Node_Event_Associated_Encounter;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CustomEvent_Encounter = K2Node_CustomEvent_Encounter;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_bResetTriggers = K2Node_CustomEvent_bResetTriggers;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_InDelegate_1 = K2Node_Event_InDelegate_1;
	Parms.K2Node_Event_InDelegate = K2Node_Event_InDelegate;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_PersistenceCache = K2Node_Event_PersistenceCache;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_CheckAndSetNPCSpawner_Success = CallFunc_CheckAndSetNPCSpawner_Success;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetCanBeRecruited_ReturnValue = CallFunc_GetCanBeRecruited_ReturnValue;
	Parms.CallFunc_GetNPCDataFromDataTableRow_OutNPCData = CallFunc_GetNPCDataFromDataTableRow_OutNPCData;
	Parms.CallFunc_GetNPCDataFromDataTableRow_Branches = CallFunc_GetNPCDataFromDataTableRow_Branches;
	Parms.CallFunc_GetNPCDataFromDataTableRow_ReturnValue = CallFunc_GetNPCDataFromDataTableRow_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


