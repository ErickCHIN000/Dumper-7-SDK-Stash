#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mission_Communication_T2.BP_Mission_Communication_T2_C
// (Actor)

class UClass* ABP_Mission_Communication_T2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mission_Communication_T2_C");

	return Clss;
}


// BP_Mission_Communication_T2_C BP_Mission_Communication_T2.Default__BP_Mission_Communication_T2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mission_Communication_T2_C* ABP_Mission_Communication_T2_C::GetDefaultObj()
{
	static class ABP_Mission_Communication_T2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mission_Communication_T2_C*>(ABP_Mission_Communication_T2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.UpdateDynamicQuests
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mission_Communication_T2_C::UpdateDynamicQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "UpdateDynamicQuests");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.UpdateSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GenerateNewDynamicQuestSeed_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_T2_C::UpdateSeed(int32 CallFunc_GenerateNewDynamicQuestSeed_ReturnValue, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "UpdateSeed");

	Params::ABP_Mission_Communication_T2_C_UpdateSeed_Params Parms{};

	Parms.CallFunc_GenerateNewDynamicQuestSeed_ReturnValue = CallFunc_GenerateNewDynamicQuestSeed_ReturnValue;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.RollQuest
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     Quest                                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               Stream                                                           (Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
// struct FDynamicQuestsRowHandle     SelectedQuest                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              ListID                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_CreateNewList_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsEnum          CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuest               CallFunc_GetDynamicQuestsStruct_DynamicQuests                    (None)
// enum class EValid                  CallFunc_GetDynamicQuestsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeightedListElement        K2Node_MakeStruct_WeightedListElement                            (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddElement_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeightedListElement        CallFunc_GetSelectedElement_ReturnValue                          (None)
// bool                               CallFunc_RemoveList_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     CallFunc_MakeDynamicQuests_ReturnValue                           (NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_T2_C::RollQuest(int32 Seed, struct FDynamicQuestsRowHandle* Quest, const struct FRandomStream& Stream, const struct FDynamicQuestsRowHandle& SelectedQuest, int32 ListID, int32 CallFunc_NumRows_ReturnValue, int32 CallFunc_CreateNewList_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FDynamicQuestsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDynamicQuestsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FDynamicQuest& CallFunc_GetDynamicQuestsStruct_DynamicQuests, enum class EValid CallFunc_GetDynamicQuestsStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FWeightedListElement& K2Node_MakeStruct_WeightedListElement, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_AddElement_ReturnValue, const struct FWeightedListElement& CallFunc_GetSelectedElement_ReturnValue, bool CallFunc_RemoveList_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDynamicQuestsRowHandle& CallFunc_MakeDynamicQuests_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "RollQuest");

	Params::ABP_Mission_Communication_T2_C_RollQuest_Params Parms{};

	Parms.Seed = Seed;
	Parms.Stream = Stream;
	Parms.SelectedQuest = SelectedQuest;
	Parms.ListID = ListID;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_CreateNewList_ReturnValue = CallFunc_CreateNewList_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetDynamicQuestsStruct_DynamicQuests = CallFunc_GetDynamicQuestsStruct_DynamicQuests;
	Parms.CallFunc_GetDynamicQuestsStruct_Paths = CallFunc_GetDynamicQuestsStruct_Paths;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_WeightedListElement = K2Node_MakeStruct_WeightedListElement;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddElement_ReturnValue = CallFunc_AddElement_ReturnValue;
	Parms.CallFunc_GetSelectedElement_ReturnValue = CallFunc_GetSelectedElement_ReturnValue;
	Parms.CallFunc_RemoveList_ReturnValue = CallFunc_RemoveList_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeDynamicQuests_ReturnValue = CallFunc_MakeDynamicQuests_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Quest != nullptr)
		*Quest = std::move(Parms.Quest);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.PopulateQuests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Seed                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRandomStream               RandomStream                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
// int32                              LocalSeed                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SeededRoll_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     CallFunc_RollQuest_Quest                                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_T2_C::PopulateQuests(int32 Seed, const struct FRandomStream& RandomStream, int32 LocalSeed, int32 CallFunc_SeededRoll_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FDynamicQuestsRowHandle& CallFunc_RollQuest_Quest, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "PopulateQuests");

	Params::ABP_Mission_Communication_T2_C_PopulateQuests_Params Parms{};

	Parms.Seed = Seed;
	Parms.RandomStream = RandomStream;
	Parms.LocalSeed = LocalSeed;
	Parms.CallFunc_SeededRoll_ReturnValue = CallFunc_SeededRoll_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_RollQuest_Quest = CallFunc_RollQuest_Quest;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_T2_C::Deployable_Interact(class AActor* Interactor, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "Deployable_Interact");

	Params::ABP_Mission_Communication_T2_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.SelectQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestsRowHandle     Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_T2_C::SelectQuest(const struct FDynamicQuestsRowHandle& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "SelectQuest");

	Params::ABP_Mission_Communication_T2_C_SelectQuest_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Mission_Communication_T2_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.GenericActionWithCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_T2_C::GenericActionWithCharacter(class AIcarusPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "GenericActionWithCharacter");

	Params::ABP_Mission_Communication_T2_C_GenericActionWithCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.GenericAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mission_Communication_T2_C::GenericAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "GenericAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mission_Communication_T2.BP_Mission_Communication_T2_C.ExecuteUbergraph_BP_Mission_Communication_T2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     K2Node_CustomEvent_Quest                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDynamicQuestDifficulty CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParametersAdvancedK2Node_MakeStruct_IcarusItemSpawnParametersAdvanced              (None)
// TArray<struct FIcarusStatReplicated>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// TArray<struct FAlterationsEnum>    K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FItemData                   CallFunc_CreateCustomItem_ReturnValue                            (ContainsInstancedReference)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_T2_C::ExecuteUbergraph_BP_Mission_Communication_T2(int32 EntryPoint, const struct FDynamicQuestsRowHandle& K2Node_CustomEvent_Quest, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, enum class EDynamicQuestDifficulty CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, const struct FItemData& K2Node_MakeStruct_ItemData, bool CallFunc_IsServer_ReturnValue_1, class AIcarusPlayerCharacter* K2Node_Event_Character, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, TArray<struct FAlterationsEnum>& K2Node_MakeArray_Array_1, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_T2_C", "ExecuteUbergraph_BP_Mission_Communication_T2");

	Params::ABP_Mission_Communication_T2_C_ExecuteUbergraph_BP_Mission_Communication_T2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced = K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_CreateCustomItem_ReturnValue = CallFunc_CreateCustomItem_ReturnValue;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


