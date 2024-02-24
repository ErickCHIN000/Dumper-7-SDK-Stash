#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTT_ConstructStructureConstructed.BTT_ConstructStructureConstructed_C
// (None)

class UClass* UBTT_ConstructStructureConstructed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTT_ConstructStructureConstructed_C");

	return Clss;
}


// BTT_ConstructStructureConstructed_C BTT_ConstructStructureConstructed.Default__BTT_ConstructStructureConstructed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTT_ConstructStructureConstructed_C* UBTT_ConstructStructureConstructed_C::GetDefaultObj()
{
	static class UBTT_ConstructStructureConstructed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTT_ConstructStructureConstructed_C*>(UBTT_ConstructStructureConstructed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTT_ConstructStructureConstructed.BTT_ConstructStructureConstructed_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBTT_ConstructStructureConstructed_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_ConstructStructureConstructed_C", "ReceiveExecuteAI");

	Params::UBTT_ConstructStructureConstructed_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTT_ConstructStructureConstructed.BTT_ConstructStructureConstructed_C.ExecuteUbergraph_BTT_ConstructStructureConstructed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIC_Creature_NPC_Villager_C*K2Node_DynamicCast_AsAIC_Creature_NPC_Villager                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXActor*                   K2Node_DynamicCast_AsNWXActor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceHandlingInterface>K2Node_DynamicCast_AsStructure_Resource_Handling_Interface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddConstructionResources_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_AddConstructionResources_OutUnusedResources             (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_AddConstructionResources_OutAddedResources              (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_RemoveItemsWithReference_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTT_ConstructStructureConstructed_C::ExecuteUbergraph_BTT_ConstructStructureConstructed(int32 EntryPoint, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 Temp_int_Array_Index_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, int32 Temp_int_Loop_Counter_Variable, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class AAIC_Creature_NPC_Villager_C* K2Node_DynamicCast_AsAIC_Creature_NPC_Villager, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, class ANWXActor* K2Node_DynamicCast_AsNWXActor, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IStructureResourceHandlingInterface> K2Node_DynamicCast_AsStructure_Resource_Handling_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_AddConstructionResources_bSuccess, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutUnusedResources, TArray<struct FInventoryEntry>& CallFunc_AddConstructionResources_OutAddedResources, const struct FInventoryEntry& CallFunc_Array_Get_Item, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, int32 CallFunc_RemoveItemsWithReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTT_ConstructStructureConstructed_C", "ExecuteUbergraph_BTT_ConstructStructureConstructed");

	Params::UBTT_ConstructStructureConstructed_C_ExecuteUbergraph_BTT_ConstructStructureConstructed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIC_Creature_NPC_Villager = K2Node_DynamicCast_AsAIC_Creature_NPC_Villager;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXActor = K2Node_DynamicCast_AsNWXActor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Handling_Interface = K2Node_DynamicCast_AsStructure_Resource_Handling_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_AddConstructionResources_bSuccess = CallFunc_AddConstructionResources_bSuccess;
	Parms.CallFunc_AddConstructionResources_OutUnusedResources = CallFunc_AddConstructionResources_OutUnusedResources;
	Parms.CallFunc_AddConstructionResources_OutAddedResources = CallFunc_AddConstructionResources_OutAddedResources;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_RemoveItemsWithReference_ReturnValue = CallFunc_RemoveItemsWithReference_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


