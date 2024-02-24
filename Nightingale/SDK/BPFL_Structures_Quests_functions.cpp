#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Structures_Quests.BPFL_Structures_Quests_C
// (None)

class UClass* UBPFL_Structures_Quests_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Structures_Quests_C");

	return Clss;
}


// BPFL_Structures_Quests_C BPFL_Structures_Quests.Default__BPFL_Structures_Quests_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Structures_Quests_C* UBPFL_Structures_Quests_C::GetDefaultObj()
{
	static class UBPFL_Structures_Quests_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Structures_Quests_C*>(UBPFL_Structures_Quests_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_Structures_Quests.BPFL_Structures_Quests_C.UpdateContributerObjectiveProgress
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetOwningPlayerState_OutPlayerState                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceConsumerInterface>CallFunc_GetConstructionResourcesManager_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<class APlayerState*>        CallFunc_GetContributingPlayerStates_PlayerStates                (ReferenceParm)
// TScriptInterface<class IBPI_TaskTracking_C>K2Node_DynamicCast_AsBPI_Task_Tracking                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           K2Node_DynamicCast_AsBP_Player_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_TaskTracking_C>K2Node_DynamicCast_AsBPI_Task_Tracking_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Structures_Quests_C::UpdateContributerObjectiveProgress(class UObject* Object, class AActor* Owning_Actor, int32 Piece_ID, class UObject* __WorldContext, bool NewLocalVar_0, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, class APlayerState* CallFunc_GetOwningPlayerState_OutPlayerState, bool CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IStructureResourceConsumerInterface> CallFunc_GetConstructionResourcesManager_ReturnValue, TArray<class APlayerState*>& CallFunc_GetContributingPlayerStates_PlayerStates, TScriptInterface<class IBPI_TaskTracking_C> K2Node_DynamicCast_AsBPI_Task_Tracking, bool K2Node_DynamicCast_bSuccess_1, class APlayerState* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_PlayerState_C* K2Node_DynamicCast_AsBP_Player_State, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_TaskTracking_C> K2Node_DynamicCast_AsBPI_Task_Tracking_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Structures_Quests_C", "UpdateContributerObjectiveProgress");

	Params::UBPFL_Structures_Quests_C_UpdateContributerObjectiveProgress_Params Parms{};

	Parms.Object = Object;
	Parms.Owning_Actor = Owning_Actor;
	Parms.Piece_ID = Piece_ID;
	Parms.__WorldContext = __WorldContext;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerState_OutPlayerState = CallFunc_GetOwningPlayerState_OutPlayerState;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetConstructionResourcesManager_ReturnValue = CallFunc_GetConstructionResourcesManager_ReturnValue;
	Parms.CallFunc_GetContributingPlayerStates_PlayerStates = CallFunc_GetContributingPlayerStates_PlayerStates;
	Parms.K2Node_DynamicCast_AsBPI_Task_Tracking = K2Node_DynamicCast_AsBPI_Task_Tracking;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_State = K2Node_DynamicCast_AsBP_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Task_Tracking_1 = K2Node_DynamicCast_AsBPI_Task_Tracking_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


