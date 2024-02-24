#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
// (Actor)

class UClass* ABP_PlayerState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerState_C");

	return Clss;
}


// BP_PlayerState_C BP_PlayerState.Default__BP_PlayerState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PlayerState_C* ABP_PlayerState_C::GetDefaultObj()
{
	static class ABP_PlayerState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PlayerState_C*>(ABP_PlayerState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerState.BP_PlayerState_C.GetMenusComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UMenusComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UMenusComponent* ABP_PlayerState_C::GetMenusComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetMenusComponent");

	Params::ABP_PlayerState_C_GetMenusComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerState.BP_PlayerState_C.GetQuestTracker
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IQuestTrackerInterface>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

TScriptInterface<class IQuestTrackerInterface> ABP_PlayerState_C::GetQuestTracker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetQuestTracker");

	Params::ABP_PlayerState_C_GetQuestTracker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlayerState.BP_PlayerState_C.CallFishCaught
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       CaughtFish                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CallFishCaught(struct FFish& CaughtFish, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallFishCaught");

	Params::ABP_PlayerState_C_CallFishCaught_Params Parms{};

	Parms.CaughtFish = CaughtFish;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.GetWeakpointComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               HasInterface                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_WeakPoint_C>Interface                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetWeakpointComponent");

	Params::ABP_PlayerState_C_GetWeakpointComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasInterface != nullptr)
		*HasInterface = Parms.HasInterface;

	if (Interface != nullptr)
		*Interface = Parms.Interface;

}


// Function BP_PlayerState.BP_PlayerState_C.GetPingInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               bHasInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Ping_C>PingInterface                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetPingInterface");

	Params::ABP_PlayerState_C_GetPingInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bHasInterface != nullptr)
		*bHasInterface = Parms.bHasInterface;

	if (PingInterface != nullptr)
		*PingInterface = Parms.PingInterface;

}


// Function BP_PlayerState.BP_PlayerState_C.GetBPPlayerController
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerController_C*      Player_Controller                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetBPPlayerController(class ABP_PlayerController_C** Player_Controller, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetBPPlayerController");

	Params::ABP_PlayerState_C_GetBPPlayerController_Params Parms{};

	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Player_Controller != nullptr)
		*Player_Controller = Parms.Player_Controller;

}


// Function BP_PlayerState.BP_PlayerState_C.GetMapTracker
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_MapTracker_C*            MapTracker                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      CallFunc_GetBPPlayerController_Player_Controller                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MapTracker_C*            CallFunc_GetMapTracker_MapTrackerComponent                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetMapTracker(class UBP_MapTracker_C** MapTracker, class ABP_PlayerController_C* CallFunc_GetBPPlayerController_Player_Controller, bool CallFunc_IsValid_ReturnValue, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetMapTracker");

	Params::ABP_PlayerState_C_GetMapTracker_Params Parms{};

	Parms.CallFunc_GetBPPlayerController_Player_Controller = CallFunc_GetBPPlayerController_Player_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMapTracker_MapTrackerComponent = CallFunc_GetMapTracker_MapTrackerComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MapTracker != nullptr)
		*MapTracker = Parms.MapTracker;

}


// Function BP_PlayerState.BP_PlayerState_C.GetGroupSystem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGroupComponentBase*         GroupComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetGroupSystem(class UGroupComponentBase** GroupComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetGroupSystem");

	Params::ABP_PlayerState_C_GetGroupSystem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GroupComponent != nullptr)
		*GroupComponent = Parms.GroupComponent;

}


// Function BP_PlayerState.BP_PlayerState_C.GetDebugModeStateInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_DebugModeStateComponent_C*DebugModeState                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetDebugModeStateInterface(class UBP_DebugModeStateComponent_C** DebugModeState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetDebugModeStateInterface");

	Params::ABP_PlayerState_C_GetDebugModeStateInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DebugModeState != nullptr)
		*DebugModeState = Parms.DebugModeState;

}


// Function BP_PlayerState.BP_PlayerState_C.GetRespawnPoint
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ANWXPlayerStart*             RespawnPoint                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetRespawnPoint(class ANWXPlayerStart** RespawnPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetRespawnPoint");

	Params::ABP_PlayerState_C_GetRespawnPoint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RespawnPoint != nullptr)
		*RespawnPoint = Parms.RespawnPoint;

}


// Function BP_PlayerState.BP_PlayerState_C.GetOwningCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         Character                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AnimCharacter_C*         K2Node_DynamicCast_AsBP_Anim_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetOwningCharacter(bool* bSuccess, class ABP_AnimCharacter_C** Character, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetOwningCharacter");

	Params::ABP_PlayerState_C_GetOwningCharacter_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Anim_Character = K2Node_DynamicCast_AsBP_Anim_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function BP_PlayerState.BP_PlayerState_C.IsCharacterInStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_CharacterGameStatus   CharacterState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::IsCharacterInStatus(enum class E_CharacterGameStatus CharacterState, bool* IsActive, bool Found, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_CharacterStateEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "IsCharacterInStatus");

	Params::ABP_PlayerState_C_IsCharacterInStatus_Params Parms{};

	Parms.CharacterState = CharacterState;
	Parms.Found = Found;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function BP_PlayerState.BP_PlayerState_C.OnPawnRespawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OnPawnRespawned()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnPawnRespawned");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.OnCharacterStatesChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CharacterStateEntry      MostRecentState                                                  (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::OnCharacterStatesChanged(const struct FS_CharacterStateEntry& MostRecentState, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FS_CharacterStateEntry& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnCharacterStatesChanged");

	Params::ABP_PlayerState_C_OnCharacterStatesChanged_Params Parms{};

	Parms.MostRecentState = MostRecentState;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.RemoveCharacterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     StateReporter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      CallFunc_GetExistentStateForStateReporter_CharacterState         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExistentStateForStateReporter_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetExistentStateForStateReporter_Found                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::RemoveCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus State, const struct FS_CharacterStateEntry& CallFunc_GetExistentStateForStateReporter_CharacterState, int32 CallFunc_GetExistentStateForStateReporter_Index, bool CallFunc_GetExistentStateForStateReporter_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "RemoveCharacterState");

	Params::ABP_PlayerState_C_RemoveCharacterState_Params Parms{};

	Parms.StateReporter = StateReporter;
	Parms.State = State;
	Parms.CallFunc_GetExistentStateForStateReporter_CharacterState = CallFunc_GetExistentStateForStateReporter_CharacterState;
	Parms.CallFunc_GetExistentStateForStateReporter_Index = CallFunc_GetExistentStateForStateReporter_Index;
	Parms.CallFunc_GetExistentStateForStateReporter_Found = CallFunc_GetExistentStateForStateReporter_Found;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnRep_CharacterStatesList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OnRep_CharacterStatesList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnRep_CharacterStatesList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.AddCharacterState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     StateReporter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      CallFunc_GetExistentStateForStateReporter_CharacterState         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetExistentStateForStateReporter_Index                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetExistentStateForStateReporter_Found                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      K2Node_MakeStruct_S_CharacterStateEntry                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::AddCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus State, const struct FS_CharacterStateEntry& CallFunc_GetExistentStateForStateReporter_CharacterState, int32 CallFunc_GetExistentStateForStateReporter_Index, bool CallFunc_GetExistentStateForStateReporter_Found, const struct FS_CharacterStateEntry& K2Node_MakeStruct_S_CharacterStateEntry, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "AddCharacterState");

	Params::ABP_PlayerState_C_AddCharacterState_Params Parms{};

	Parms.StateReporter = StateReporter;
	Parms.State = State;
	Parms.CallFunc_GetExistentStateForStateReporter_CharacterState = CallFunc_GetExistentStateForStateReporter_CharacterState;
	Parms.CallFunc_GetExistentStateForStateReporter_Index = CallFunc_GetExistentStateForStateReporter_Index;
	Parms.CallFunc_GetExistentStateForStateReporter_Found = CallFunc_GetExistentStateForStateReporter_Found;
	Parms.K2Node_MakeStruct_S_CharacterStateEntry = K2Node_MakeStruct_S_CharacterStateEntry;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.GetExistentStateForStateReporter
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     StateReporter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      CharacterState                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      FoundCharacterState                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              FoundStateIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CharacterStateEntry      K2Node_MakeStruct_S_CharacterStateEntry                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::GetExistentStateForStateReporter(class UObject* StateReporter, enum class E_CharacterGameStatus State, struct FS_CharacterStateEntry* CharacterState, int32* Index, bool* Found, const struct FS_CharacterStateEntry& FoundCharacterState, int32 FoundStateIndex, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_CharacterStateEntry& K2Node_MakeStruct_S_CharacterStateEntry, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GetExistentStateForStateReporter");

	Params::ABP_PlayerState_C_GetExistentStateForStateReporter_Params Parms{};

	Parms.StateReporter = StateReporter;
	Parms.State = State;
	Parms.FoundCharacterState = FoundCharacterState;
	Parms.FoundStateIndex = FoundStateIndex;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_S_CharacterStateEntry = K2Node_MakeStruct_S_CharacterStateEntry;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterState != nullptr)
		*CharacterState = std::move(Parms.CharacterState);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function BP_PlayerState.BP_PlayerState_C.OnRep_bServerReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void ABP_PlayerState_C::OnRep_bServerReady(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnRep_bServerReady");

	Params::ABP_PlayerState_C_OnRep_bServerReady_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.Run_CodexTelemetry_CodexViewed
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCodexBaseDataAsset*         Codex_Data_Asset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::Run_CodexTelemetry_CodexViewed(class UCodexBaseDataAsset* Codex_Data_Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "Run_CodexTelemetry_CodexViewed");

	Params::ABP_PlayerState_C_Run_CodexTelemetry_CodexViewed_Params Parms{};

	Parms.Codex_Data_Asset = Codex_Data_Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.Server_AddCharacterState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     StateReporter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   CharacterState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::Server_AddCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus CharacterState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "Server_AddCharacterState");

	Params::ABP_PlayerState_C_Server_AddCharacterState_Params Parms{};

	Parms.StateReporter = StateReporter;
	Parms.CharacterState = CharacterState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.Server_RemoveCharacterState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     StateReporter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   CharacterState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::Server_RemoveCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus CharacterState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "Server_RemoveCharacterState");

	Params::ABP_PlayerState_C_Server_RemoveCharacterState_Params Parms{};

	Parms.StateReporter = StateReporter;
	Parms.CharacterState = CharacterState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallGiveTag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Gameplay_Tag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CallGiveTag(const struct FGameplayTag& Gameplay_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallGiveTag");

	Params::ABP_PlayerState_C_CallGiveTag_Params Parms{};

	Parms.Gameplay_Tag = Gameplay_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallCreatureKilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Information                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerState_C::CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallCreatureKilled");

	Params::ABP_PlayerState_C_CallCreatureKilled_Params Parms{};

	Parms.Creature_Information = Creature_Information;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallStructureBlueprintPlaced
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StructureDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallStructureBlueprintPlaced");

	Params::ABP_PlayerState_C_CallStructureBlueprintPlaced_Params Parms{};

	Parms.StructureDataHandle = StructureDataHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallResourceHarvested
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallResourceHarvested");

	Params::ABP_PlayerState_C_CallResourceHarvested_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallStructureCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallStructureCompleted");

	Params::ABP_PlayerState_C_CallStructureCompleted_Params Parms{};

	Parms.Owning_Actor = Owning_Actor;
	Parms.Piece_ID = Piece_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallItemDeposited_InWorldContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ContainerTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallItemDeposited_InWorldContainer");

	Params::ABP_PlayerState_C_CallItemDeposited_InWorldContainer_Params Parms{};

	Parms.ItemRowHandle = ItemRowHandle;
	Parms.Quantity = Quantity;
	Parms.ContainerTag = ContainerTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CrossServer_StructureBlueprintPlaced
// (Net, NetReliable, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StructureDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CrossServer_StructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CrossServer_StructureBlueprintPlaced");

	Params::ABP_PlayerState_C_CrossServer_StructureBlueprintPlaced_Params Parms{};

	Parms.StructureDataHandle = StructureDataHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CrossServer_CallCreatureKilled
// (Net, NetReliable, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Info                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerState_C::CrossServer_CallCreatureKilled(const struct FDataTableRowHandle& Creature_Info, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CrossServer_CallCreatureKilled");

	Params::ABP_PlayerState_C_CrossServer_CallCreatureKilled_Params Parms{};

	Parms.Creature_Info = Creature_Info;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CrossServer_CallTagGiven
// (Net, NetReliable, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CrossServer_CallTagGiven(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CrossServer_CallTagGiven");

	Params::ABP_PlayerState_C_CrossServer_CallTagGiven_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallWeakpointHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       WeakpointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       CreatureTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayerState_C::CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallWeakpointHit");

	Params::ABP_PlayerState_C_CallWeakpointHit_Params Parms{};

	Parms.WeakpointType = WeakpointType;
	Parms.CreatureTags = CreatureTags;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CrossServer_WeakpointHit
// (Net, NetReliable, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       WeakpointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       CreatureTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerState_C::CrossServer_WeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CrossServer_WeakpointHit");

	Params::ABP_PlayerState_C_CrossServer_WeakpointHit_Params Parms{};

	Parms.WeakpointType = WeakpointType;
	Parms.CreatureTags = CreatureTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CallOnGlyphRevealed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::CallOnGlyphRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallOnGlyphRevealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.CallOnSpellCast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>SpellCast                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerState_C::CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallOnSpellCast");

	Params::ABP_PlayerState_C_CallOnSpellCast_Params Parms{};

	Parms.SpellCast = SpellCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.CrossServer_OnGlyphReveal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::CrossServer_OnGlyphReveal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CrossServer_OnGlyphReveal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.CallOnInteractedWithPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CallOnInteractedWithPlayer(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CallOnInteractedWithPlayer");

	Params::ABP_PlayerState_C_CallOnInteractedWithPlayer_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.OnReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OnReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.GameStateReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::GameStateReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "GameStateReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.OnBroadcastClientReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OnBroadcastClientReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnBroadcastClientReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.ClientInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::ClientInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "ClientInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.ServerInit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::ServerInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "ServerInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.OnInventoryReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::OnInventoryReady(bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnInventoryReady");

	Params::ABP_PlayerState_C_OnInventoryReady_Params Parms{};

	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.ExecuteUbergraph_BP_PlayerState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCodexBaseDataAsset*         K2Node_CustomEvent_Codex_Data_Asset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_StateReporter_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   K2Node_CustomEvent_CharacterState_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_StateReporter                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class E_CharacterGameStatus   K2Node_CustomEvent_CharacterState                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_Gameplay_Tag                                        (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_Event_Creature_Information                                (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_CreatureTagContainer                                (None)
// struct FGameplayTagContainer       K2Node_Event_KillerTagContainer                                  (None)
// struct FDataTableRowHandle         K2Node_Event_StructureDataHandle                                 (NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_Event_ItemEntry                                           (None)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Owning_Actor                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Piece_ID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          K2Node_Event_ItemRowHandle                                       (HasGetValueTypeHash)
// int32                              K2Node_Event_Quantity                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ContainerTag                                        (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_StructureDataHandle                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_CustomEvent_Creature_Info                                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_CreatureTagContainer                          (None)
// struct FGameplayTagContainer       K2Node_CustomEvent_KillerTagContainer                            (None)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_Tag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_WeakpointType                                       (None)
// struct FGameplayTagContainer       K2Node_Event_CreatureTags                                        (None)
// struct FHitResult                  K2Node_Event_HitResult                                           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayTagContainer       K2Node_CustomEvent_WeakpointType                                 (None)
// struct FGameplayTagContainer       K2Node_CustomEvent_CreatureTags                                  (None)
// TSoftObjectPtr<class UTechniqueDataAsset>K2Node_Event_SpellCast                                           (HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_InteractingPawn                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GameState_C*             K2Node_DynamicCast_AsBP_Game_State                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_10                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_11                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBasicAwaiter*               CallFunc_GetInventoryAwaiter_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDelegateHandleBPWrapper    CallFunc_AwaitBP_Handle                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetFunctionName_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue_2                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::ExecuteUbergraph_BP_PlayerState(int32 EntryPoint, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCodexBaseDataAsset* K2Node_CustomEvent_Codex_Data_Asset, bool CallFunc_HasAuthority_ReturnValue_2, class UObject* K2Node_CustomEvent_StateReporter_1, enum class E_CharacterGameStatus K2Node_CustomEvent_CharacterState_1, class UObject* K2Node_CustomEvent_StateReporter, enum class E_CharacterGameStatus K2Node_CustomEvent_CharacterState, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, const struct FDataTableRowHandle& K2Node_CustomEvent_StructureDataHandle, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_3, const struct FDataTableRowHandle& K2Node_CustomEvent_Creature_Info, const struct FGameplayTagContainer& K2Node_CustomEvent_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_CustomEvent_KillerTagContainer, bool CallFunc_IsServer_ReturnValue_4, const struct FGameplayTag& K2Node_CustomEvent_Tag, bool CallFunc_HasAuthority_ReturnValue_6, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, const struct FGameplayTagContainer& K2Node_CustomEvent_WeakpointType, const struct FGameplayTagContainer& K2Node_CustomEvent_CreatureTags, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue_7, bool CallFunc_HasAuthority_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_7, class APawn* K2Node_Event_InteractingPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_9, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_10, bool CallFunc_HasAuthority_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_9, bool K2Node_CustomEvent_Success, bool CallFunc_IsServer_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "ExecuteUbergraph_BP_PlayerState");

	Params::ABP_PlayerState_C_ExecuteUbergraph_BP_PlayerState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Codex_Data_Asset = K2Node_CustomEvent_Codex_Data_Asset;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_CustomEvent_StateReporter_1 = K2Node_CustomEvent_StateReporter_1;
	Parms.K2Node_CustomEvent_CharacterState_1 = K2Node_CustomEvent_CharacterState_1;
	Parms.K2Node_CustomEvent_StateReporter = K2Node_CustomEvent_StateReporter;
	Parms.K2Node_CustomEvent_CharacterState = K2Node_CustomEvent_CharacterState;
	Parms.K2Node_Event_Gameplay_Tag = K2Node_Event_Gameplay_Tag;
	Parms.K2Node_Event_Creature_Information = K2Node_Event_Creature_Information;
	Parms.K2Node_Event_CreatureTagContainer = K2Node_Event_CreatureTagContainer;
	Parms.K2Node_Event_KillerTagContainer = K2Node_Event_KillerTagContainer;
	Parms.K2Node_Event_StructureDataHandle = K2Node_Event_StructureDataHandle;
	Parms.K2Node_Event_ItemEntry = K2Node_Event_ItemEntry;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_Owning_Actor = K2Node_Event_Owning_Actor;
	Parms.K2Node_Event_Piece_ID = K2Node_Event_Piece_ID;
	Parms.K2Node_Event_ItemRowHandle = K2Node_Event_ItemRowHandle;
	Parms.K2Node_Event_Quantity = K2Node_Event_Quantity;
	Parms.K2Node_Event_ContainerTag = K2Node_Event_ContainerTag;
	Parms.K2Node_CustomEvent_StructureDataHandle = K2Node_CustomEvent_StructureDataHandle;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.K2Node_CustomEvent_Creature_Info = K2Node_CustomEvent_Creature_Info;
	Parms.K2Node_CustomEvent_CreatureTagContainer = K2Node_CustomEvent_CreatureTagContainer;
	Parms.K2Node_CustomEvent_KillerTagContainer = K2Node_CustomEvent_KillerTagContainer;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.K2Node_CustomEvent_Tag = K2Node_CustomEvent_Tag;
	Parms.CallFunc_HasAuthority_ReturnValue_6 = CallFunc_HasAuthority_ReturnValue_6;
	Parms.K2Node_Event_WeakpointType = K2Node_Event_WeakpointType;
	Parms.K2Node_Event_CreatureTags = K2Node_Event_CreatureTags;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_CustomEvent_WeakpointType = K2Node_CustomEvent_WeakpointType;
	Parms.K2Node_CustomEvent_CreatureTags = K2Node_CustomEvent_CreatureTags;
	Parms.K2Node_Event_SpellCast = K2Node_Event_SpellCast;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_HasAuthority_ReturnValue_7 = CallFunc_HasAuthority_ReturnValue_7;
	Parms.CallFunc_HasAuthority_ReturnValue_8 = CallFunc_HasAuthority_ReturnValue_8;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_9 = CallFunc_HasAuthority_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsBP_Game_State = K2Node_DynamicCast_AsBP_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_10 = CallFunc_HasAuthority_ReturnValue_10;
	Parms.CallFunc_HasAuthority_ReturnValue_11 = CallFunc_HasAuthority_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetInventoryAwaiter_ReturnValue = CallFunc_GetInventoryAwaiter_ReturnValue;
	Parms.CallFunc_AwaitBP_Awaitable_CastInput = CallFunc_AwaitBP_Awaitable_CastInput;
	Parms.CallFunc_AwaitBP_Handle = CallFunc_AwaitBP_Handle;
	Parms.CallFunc_GetFunctionName_ReturnValue_1 = CallFunc_GetFunctionName_ReturnValue_1;
	Parms.CallFunc_GetFunctionName_ReturnValue_2 = CallFunc_GetFunctionName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnSpellCasted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>Spell_Casted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_PlayerState_C::OnSpellCasted__DelegateSignature(TSoftObjectPtr<class UTechniqueDataAsset> Spell_Casted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnSpellCasted__DelegateSignature");

	Params::ABP_PlayerState_C_OnSpellCasted__DelegateSignature_Params Parms{};

	Parms.Spell_Casted = Spell_Casted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnInteractedWithPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::OnInteractedWithPlayer__DelegateSignature(class APawn* InteractingPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnInteractedWithPlayer__DelegateSignature");

	Params::ABP_PlayerState_C_OnInteractedWithPlayer__DelegateSignature_Params Parms{};

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnFishCaught__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFish                       CaughtFish                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABP_PlayerState_C::OnFishCaught__DelegateSignature(const struct FFish& CaughtFish)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnFishCaught__DelegateSignature");

	Params::ABP_PlayerState_C_OnFishCaught__DelegateSignature_Params Parms{};

	Parms.CaughtFish = CaughtFish;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnGlyphReveal__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OnGlyphReveal__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnGlyphReveal__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.WeakpointHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       WeakpointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       CreatureTags                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_PlayerState_C::WeakpointHit__DelegateSignature(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "WeakpointHit__DelegateSignature");

	Params::ABP_PlayerState_C_WeakpointHit__DelegateSignature_Params Parms{};

	Parms.WeakpointType = WeakpointType;
	Parms.CreatureTags = CreatureTags;
	Parms.HitResult = HitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnPlayerInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       InteractionTags                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     InteractionTarget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::OnPlayerInteraction__DelegateSignature(const struct FGameplayTagContainer& InteractionTags, class UObject* InteractionTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnPlayerInteraction__DelegateSignature");

	Params::ABP_PlayerState_C_OnPlayerInteraction__DelegateSignature_Params Parms{};

	Parms.InteractionTags = InteractionTags;
	Parms.InteractionTarget = InteractionTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnPawnDamageReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerState_C::OnPawnDamageReceived__DelegateSignature(double Damage, const struct FGameplayTagContainer& EffectTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnPawnDamageReceived__DelegateSignature");

	Params::ABP_PlayerState_C_OnPawnDamageReceived__DelegateSignature_Params Parms{};

	Parms.Damage = Damage;
	Parms.EffectTags = EffectTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnItemAbilityUsed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTechniqueDataAsset>Technique                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerState_C::OnItemAbilityUsed__DelegateSignature(TSoftObjectPtr<class UTechniqueDataAsset> Technique, const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnItemAbilityUsed__DelegateSignature");

	Params::ABP_PlayerState_C_OnItemAbilityUsed__DelegateSignature_Params Parms{};

	Parms.Technique = Technique;
	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnControllerFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OnControllerFound__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnControllerFound__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.ItemDepositedWorldContainer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemRowHandle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Quantity                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ContainerTag                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::ItemDepositedWorldContainer__DelegateSignature(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "ItemDepositedWorldContainer__DelegateSignature");

	Params::ABP_PlayerState_C_ItemDepositedWorldContainer__DelegateSignature_Params Parms{};

	Parms.ItemRowHandle = ItemRowHandle;
	Parms.Quantity = Quantity;
	Parms.ContainerTag = ContainerTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.StructureCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Owning_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Piece_ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::StructureCompleted__DelegateSignature(class AActor* Owning_Actor, int32 Piece_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "StructureCompleted__DelegateSignature");

	Params::ABP_PlayerState_C_StructureCompleted__DelegateSignature_Params Parms{};

	Parms.Owning_Actor = Owning_Actor;
	Parms.Piece_ID = Piece_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.ResourceHarvested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::ResourceHarvested__DelegateSignature(const struct FInventoryEntry& ItemEntry, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "ResourceHarvested__DelegateSignature");

	Params::ABP_PlayerState_C_ResourceHarvested__DelegateSignature_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.StructureBlueprintPlaced__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         StructureDataHandle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::StructureBlueprintPlaced__DelegateSignature(const struct FDataTableRowHandle& StructureDataHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "StructureBlueprintPlaced__DelegateSignature");

	Params::ABP_PlayerState_C_StructureBlueprintPlaced__DelegateSignature_Params Parms{};

	Parms.StructureDataHandle = StructureDataHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OnRespawnPointSet__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OnRespawnPointSet__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OnRespawnPointSet__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.CreatureKilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         Creature_Info                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CreatureTagContainer                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer       KillerTagContainer                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_PlayerState_C::CreatureKilled__DelegateSignature(const struct FDataTableRowHandle& Creature_Info, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CreatureKilled__DelegateSignature");

	Params::ABP_PlayerState_C_CreatureKilled__DelegateSignature_Params Parms{};

	Parms.Creature_Info = Creature_Info;
	Parms.CreatureTagContainer = CreatureTagContainer;
	Parms.KillerTagContainer = KillerTagContainer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.TagGiven__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::TagGiven__DelegateSignature(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "TagGiven__DelegateSignature");

	Params::ABP_PlayerState_C_TagGiven__DelegateSignature_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerState.BP_PlayerState_C.OwnerReplicated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::OwnerReplicated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "OwnerReplicated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.PlayerStateReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PlayerState_C::PlayerStateReady__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "PlayerStateReady__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PlayerState.BP_PlayerState_C.CharacterStatesUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CharacterStateEntry      MostRecentState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PlayerState_C::CharacterStatesUpdated__DelegateSignature(const struct FS_CharacterStateEntry& MostRecentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerState_C", "CharacterStatesUpdated__DelegateSignature");

	Params::ABP_PlayerState_C_CharacterStatesUpdated__DelegateSignature_Params Parms{};

	Parms.MostRecentState = MostRecentState;

	UObject::ProcessEvent(Func, &Parms);

}

}


