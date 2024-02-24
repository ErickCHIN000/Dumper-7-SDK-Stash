#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bac_Loot_Component.bac_Loot_Component_C
// (None)

class UClass* Ubac_Loot_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bac_Loot_Component_C");

	return Clss;
}


// bac_Loot_Component_C bac_Loot_Component.Default__bac_Loot_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubac_Loot_Component_C* Ubac_Loot_Component_C::GetDefaultObj()
{
	static class Ubac_Loot_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubac_Loot_Component_C*>(Ubac_Loot_Component_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bac_Loot_Component.bac_Loot_Component_C.SetIsLootEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLootEnabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubac_Loot_Component_C::SetIsLootEnabled(bool IsLootEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bac_Loot_Component_C", "SetIsLootEnabled");

	Params::Ubac_Loot_Component_C_SetIsLootEnabled_Params Parms{};

	Parms.IsLootEnabled = IsLootEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bac_Loot_Component.bac_Loot_Component_C.Spawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         LootSetID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              LootType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        AttachTo                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CustomOffset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MinItemsToSpawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxItemsToSpawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseAdditionalLootPerDifficulty                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubac_Loot_Component_C::Spawn(const struct FDataTableRowHandle& LootSetID, int32 LootType, class UStaticMeshComponent* AttachTo, float CustomOffset, int32 MinItemsToSpawn, int32 MaxItemsToSpawn, bool UseAdditionalLootPerDifficulty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bac_Loot_Component_C", "Spawn");

	Params::Ubac_Loot_Component_C_Spawn_Params Parms{};

	Parms.LootSetID = LootSetID;
	Parms.LootType = LootType;
	Parms.AttachTo = AttachTo;
	Parms.CustomOffset = CustomOffset;
	Parms.MinItemsToSpawn = MinItemsToSpawn;
	Parms.MaxItemsToSpawn = MaxItemsToSpawn;
	Parms.UseAdditionalLootPerDifficulty = UseAdditionalLootPerDifficulty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bac_Loot_Component.bac_Loot_Component_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Ubac_Loot_Component_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bac_Loot_Component_C", "ReceiveEndPlay");

	Params::Ubac_Loot_Component_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bac_Loot_Component.bac_Loot_Component_C.ExecuteUbergraph_bac_Loot_Component
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_LootSetID                                     (NoDestructor)
// int32                              K2Node_CustomEvent_LootType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_CustomEvent_AttachTo                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CustomOffset                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MinItemsToSpawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxItemsToSpawn                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_UseAdditionalLootPerDifficulty                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ia_Interactable_Loot_02_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_LootSet                 CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_ia_Interactable_Loot_02_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Ubac_Loot_Component_C::ExecuteUbergraph_bac_Loot_Component(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, const struct FDataTableRowHandle& K2Node_CustomEvent_LootSetID, int32 K2Node_CustomEvent_LootType, class UStaticMeshComponent* K2Node_CustomEvent_AttachTo, float K2Node_CustomEvent_CustomOffset, int32 K2Node_CustomEvent_MinItemsToSpawn, int32 K2Node_CustomEvent_MaxItemsToSpawn, bool K2Node_CustomEvent_UseAdditionalLootPerDifficulty, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 K2Node_Select_Default, class Aba_ia_Interactable_Loot_02_C* CallFunc_FinishSpawningActor_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FSt_LootSet& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_DoesSocketExist_ReturnValue, int32 K2Node_Select_Default_1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class Aba_ia_Interactable_Loot_02_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bac_Loot_Component_C", "ExecuteUbergraph_bac_Loot_Component");

	Params::Ubac_Loot_Component_C_ExecuteUbergraph_bac_Loot_Component_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_LootSetID = K2Node_CustomEvent_LootSetID;
	Parms.K2Node_CustomEvent_LootType = K2Node_CustomEvent_LootType;
	Parms.K2Node_CustomEvent_AttachTo = K2Node_CustomEvent_AttachTo;
	Parms.K2Node_CustomEvent_CustomOffset = K2Node_CustomEvent_CustomOffset;
	Parms.K2Node_CustomEvent_MinItemsToSpawn = K2Node_CustomEvent_MinItemsToSpawn;
	Parms.K2Node_CustomEvent_MaxItemsToSpawn = K2Node_CustomEvent_MaxItemsToSpawn;
	Parms.K2Node_CustomEvent_UseAdditionalLootPerDifficulty = K2Node_CustomEvent_UseAdditionalLootPerDifficulty;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


