#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C
// (Actor)

class UClass* ABP_Mission_Communication_Upgradeable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mission_Communication_Upgradeable_C");

	return Clss;
}


// BP_Mission_Communication_Upgradeable_C BP_Mission_Communication_Upgradeable.Default__BP_Mission_Communication_Upgradeable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mission_Communication_Upgradeable_C* ABP_Mission_Communication_Upgradeable_C::GetDefaultObj()
{
	static class ABP_Mission_Communication_Upgradeable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mission_Communication_Upgradeable_C*>(ABP_Mission_Communication_Upgradeable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.UpdateCommunicatorUpgradeAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnProspectAvailability Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_Upgradeable_C::UpdateCommunicatorUpgradeAudio(enum class EOnProspectAvailability Temp_byte_Variable, class UFMODEvent* Temp_object_Variable, class UFMODEvent* Temp_object_Variable_1, class UFMODEvent* Temp_object_Variable_2, class UFMODEvent* Temp_object_Variable_3, class UFMODEvent* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "UpdateCommunicatorUpgradeAudio");

	Params::ABP_Mission_Communication_Upgradeable_C_UpdateCommunicatorUpgradeAudio_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.OnRep_UpgradeStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_Upgradeable_C::OnRep_UpgradeStatus(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "OnRep_UpgradeStatus");

	Params::ABP_Mission_Communication_Upgradeable_C_OnRep_UpgradeStatus_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.UpdateDynamicQuests
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mission_Communication_Upgradeable_C::UpdateDynamicQuests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "UpdateDynamicQuests");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.UpdateSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GenerateNewDynamicQuestSeed_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_Upgradeable_C::UpdateSeed(int32 CallFunc_GenerateNewDynamicQuestSeed_ReturnValue, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "UpdateSeed");

	Params::ABP_Mission_Communication_Upgradeable_C_UpdateSeed_Params Parms{};

	Parms.CallFunc_GenerateNewDynamicQuestSeed_ReturnValue = CallFunc_GenerateNewDynamicQuestSeed_ReturnValue;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.RollQuest
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

void ABP_Mission_Communication_Upgradeable_C::RollQuest(int32 Seed, struct FDynamicQuestsRowHandle* Quest, const struct FRandomStream& Stream, const struct FDynamicQuestsRowHandle& SelectedQuest, int32 ListID, int32 CallFunc_NumRows_ReturnValue, int32 CallFunc_CreateNewList_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FDynamicQuestsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDynamicQuestsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FDynamicQuest& CallFunc_GetDynamicQuestsStruct_DynamicQuests, enum class EValid CallFunc_GetDynamicQuestsStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FWeightedListElement& K2Node_MakeStruct_WeightedListElement, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_AddElement_ReturnValue, const struct FWeightedListElement& CallFunc_GetSelectedElement_ReturnValue, bool CallFunc_RemoveList_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDynamicQuestsRowHandle& CallFunc_MakeDynamicQuests_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "RollQuest");

	Params::ABP_Mission_Communication_Upgradeable_C_RollQuest_Params Parms{};

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


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.PopulateQuests
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

void ABP_Mission_Communication_Upgradeable_C::PopulateQuests(int32 Seed, const struct FRandomStream& RandomStream, int32 LocalSeed, int32 CallFunc_SeededRoll_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FDynamicQuestsRowHandle& CallFunc_RollQuest_Quest, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "PopulateQuests");

	Params::ABP_Mission_Communication_Upgradeable_C_PopulateQuests_Params Parms{};

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


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.Deployable_Interact
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Interactor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_Upgradeable_C::Deployable_Interact(class AActor* Interactor, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "Deployable_Interact");

	Params::ABP_Mission_Communication_Upgradeable_C_Deployable_Interact_Params Parms{};

	Parms.Interactor = Interactor;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.GenericAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mission_Communication_Upgradeable_C::GenericAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "GenericAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.GenericActionWithCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_Upgradeable_C::GenericActionWithCharacter(class AIcarusPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "GenericActionWithCharacter");

	Params::ABP_Mission_Communication_Upgradeable_C_GenericActionWithCharacter_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.SelectQuest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDynamicQuestsRowHandle     Quest                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_Upgradeable_C::SelectQuest(const struct FDynamicQuestsRowHandle& Quest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "SelectQuest");

	Params::ABP_Mission_Communication_Upgradeable_C_SelectQuest_Params Parms{};

	Parms.Quest = Quest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.IcarusBeginPlay
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void ABP_Mission_Communication_Upgradeable_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.OnInventoryItemChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_Upgradeable_C::OnInventoryItemChanged(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "OnInventoryItemChanged");

	Params::ABP_Mission_Communication_Upgradeable_C_OnInventoryItemChanged_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.OnEnergyStateUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsActive                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_Upgradeable_C::OnEnergyStateUpdated(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "OnEnergyStateUpdated");

	Params::ABP_Mission_Communication_Upgradeable_C_OnEnergyStateUpdated_Params Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.ExecuteUbergraph_BP_Mission_Communication_Upgradeable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsActive                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicQuestsRowHandle     K2Node_CustomEvent_Quest                                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDynamicQuestDifficulty CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetIcarusGameStateSurvival_bValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusGameStateSurvival*    CallFunc_GetIcarusGameStateSurvival_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mission_Communication_Upgradeable_C::ExecuteUbergraph_BP_Mission_Communication_Upgradeable(int32 EntryPoint, bool K2Node_Event_IsActive, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerCharacter* K2Node_Event_Character, const struct FDynamicQuestsRowHandle& K2Node_CustomEvent_Quest, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, enum class EDynamicQuestDifficulty CallFunc_Array_Get_Item, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetIcarusGameStateSurvival_bValid_1, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItem_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EDataValid CallFunc_ItemDataValid_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "ExecuteUbergraph_BP_Mission_Communication_Upgradeable");

	Params::ABP_Mission_Communication_Upgradeable_C_ExecuteUbergraph_BP_Mission_Communication_Upgradeable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsActive = K2Node_Event_IsActive;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_CustomEvent_Quest = K2Node_CustomEvent_Quest;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid = CallFunc_GetIcarusGameStateSurvival_bValid;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue = CallFunc_GetIcarusGameStateSurvival_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetIcarusGameStateSurvival_bValid_1 = CallFunc_GetIcarusGameStateSurvival_bValid_1;
	Parms.CallFunc_GetIcarusGameStateSurvival_ReturnValue_1 = CallFunc_GetIcarusGameStateSurvival_ReturnValue_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ItemDataValid_Paths_1 = CallFunc_ItemDataValid_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mission_Communication_Upgradeable.BP_Mission_Communication_Upgradeable_C.UpgradeStatusUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnProspectAvailability UpgradeStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mission_Communication_Upgradeable_C::UpgradeStatusUpdated__DelegateSignature(enum class EOnProspectAvailability UpgradeStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mission_Communication_Upgradeable_C", "UpgradeStatusUpdated__DelegateSignature");

	Params::ABP_Mission_Communication_Upgradeable_C_UpgradeStatusUpdated__DelegateSignature_Params Parms{};

	Parms.UpgradeStatus = UpgradeStatus;

	UObject::ProcessEvent(Func, &Parms);

}

}


