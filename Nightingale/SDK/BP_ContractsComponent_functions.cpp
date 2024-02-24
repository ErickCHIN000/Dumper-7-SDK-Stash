#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ContractsComponent.BP_ContractsComponent_C
// (None)

class UClass* UBP_ContractsComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContractsComponent_C");

	return Clss;
}


// BP_ContractsComponent_C BP_ContractsComponent.Default__BP_ContractsComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ContractsComponent_C* UBP_ContractsComponent_C::GetDefaultObj()
{
	static class UBP_ContractsComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ContractsComponent_C*>(UBP_ContractsComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ContractsComponent.BP_ContractsComponent_C.AddContractor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NpcActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ContractedActor                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContractsComponent_C::AddContractor(class AActor* NpcActor, bool* Success, class AActor* ContractedActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContractsComponent_C", "AddContractor");

	Params::UBP_ContractsComponent_C_AddContractor_Params Parms{};

	Parms.NpcActor = NpcActor;
	Parms.ContractedActor = ContractedActor;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_ContractsComponent.BP_ContractsComponent_C.RemoveContractor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      NpcActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContractsComponent_C::RemoveContractor(class AActor* NpcActor, bool* Success, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContractsComponent_C", "RemoveContractor");

	Params::UBP_ContractsComponent_C_RemoveContractor_Params Parms{};

	Parms.NpcActor = NpcActor;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_ContractsComponent.BP_ContractsComponent_C.IssueOrder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PingVerbs             Verb                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OrderTarget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Contractor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// enum class E_PingVerbs             RequestedActionStationType                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TargetedActor                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UBP_PingComponent_C*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Ping_C>K2Node_DynamicCast_AsBPI_Ping                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PingObjectType        CallFunc_GetPingObjectType_PingObjectType                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetPingObjectType_DataTableRowName                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_NPCInterfaces_C>K2Node_DynamicCast_AsBPI_NPCInterfaces                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_NPCContract_C>CallFunc_GetNPCContractInterface_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetOrderTarget_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContractsComponent_C::IssueOrder(enum class E_PingVerbs Verb, class AActor* OrderTarget, bool* Success, class AActor* Contractor, enum class E_PingVerbs RequestedActionStationType, class AActor* TargetedActor, class UBP_PingComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBPI_Ping_C> K2Node_DynamicCast_AsBPI_Ping, bool K2Node_DynamicCast_bSuccess, enum class E_PingObjectType CallFunc_GetPingObjectType_PingObjectType, class FName CallFunc_GetPingObjectType_DataTableRowName, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IBPI_NPCInterfaces_C> K2Node_DynamicCast_AsBPI_NPCInterfaces, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_NPCContract_C> CallFunc_GetNPCContractInterface_Interface, bool CallFunc_SetOrderTarget_Success, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContractsComponent_C", "IssueOrder");

	Params::UBP_ContractsComponent_C_IssueOrder_Params Parms{};

	Parms.Verb = Verb;
	Parms.OrderTarget = OrderTarget;
	Parms.Contractor = Contractor;
	Parms.RequestedActionStationType = RequestedActionStationType;
	Parms.TargetedActor = TargetedActor;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Ping = K2Node_DynamicCast_AsBPI_Ping;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPingObjectType_PingObjectType = CallFunc_GetPingObjectType_PingObjectType;
	Parms.CallFunc_GetPingObjectType_DataTableRowName = CallFunc_GetPingObjectType_DataTableRowName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsBPI_NPCInterfaces = K2Node_DynamicCast_AsBPI_NPCInterfaces;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetNPCContractInterface_Interface = CallFunc_GetNPCContractInterface_Interface;
	Parms.CallFunc_SetOrderTarget_Success = CallFunc_SetOrderTarget_Success;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_ContractsComponent.BP_ContractsComponent_C.RecruitNPC
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      BedActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      SpawnerClass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ContractsComponent_C::RecruitNPC(class AActor* BedActor, class UClass* SpawnerClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContractsComponent_C", "RecruitNPC");

	Params::UBP_ContractsComponent_C_RecruitNPC_Params Parms{};

	Parms.BedActor = BedActor;
	Parms.SpawnerClass = SpawnerClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContractsComponent.BP_ContractsComponent_C.ContractedActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ContractedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ContractsComponent_C::ContractedActorDestroyed(class AActor* ContractedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContractsComponent_C", "ContractedActorDestroyed");

	Params::UBP_ContractsComponent_C_ContractedActorDestroyed_Params Parms{};

	Parms.ContractedActor = ContractedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContractsComponent.BP_ContractsComponent_C.ContractedCreatureDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXAICharacter*             ContractedCreature                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ContractsComponent_C::ContractedCreatureDeath(class ANWXAICharacter* ContractedCreature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContractsComponent_C", "ContractedCreatureDeath");

	Params::UBP_ContractsComponent_C_ContractedCreatureDeath_Params Parms{};

	Parms.ContractedCreature = ContractedCreature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContractsComponent.BP_ContractsComponent_C.ExecuteUbergraph_BP_ContractsComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ContractedActor                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXAICharacter*             K2Node_CustomEvent_ContractedCreature                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_BedActor                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_SpawnerClass                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ContractsComponent_C::ExecuteUbergraph_BP_ContractsComponent(int32 EntryPoint, class AActor* K2Node_CustomEvent_ContractedActor, class ANWXAICharacter* K2Node_CustomEvent_ContractedCreature, bool CallFunc_Array_RemoveItem_ReturnValue, class AActor* K2Node_CustomEvent_BedActor, class UClass* K2Node_CustomEvent_SpawnerClass, bool CallFunc_Array_RemoveItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContractsComponent_C", "ExecuteUbergraph_BP_ContractsComponent");

	Params::UBP_ContractsComponent_C_ExecuteUbergraph_BP_ContractsComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ContractedActor = K2Node_CustomEvent_ContractedActor;
	Parms.K2Node_CustomEvent_ContractedCreature = K2Node_CustomEvent_ContractedCreature;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_CustomEvent_BedActor = K2Node_CustomEvent_BedActor;
	Parms.K2Node_CustomEvent_SpawnerClass = K2Node_CustomEvent_SpawnerClass;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


