#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_POIMapMarker.BP_POIMapMarker_C
// (Actor)

class UClass* ABP_POIMapMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_POIMapMarker_C");

	return Clss;
}


// BP_POIMapMarker_C BP_POIMapMarker.Default__BP_POIMapMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_POIMapMarker_C* ABP_POIMapMarker_C::GetDefaultObj()
{
	static class ABP_POIMapMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_POIMapMarker_C*>(ABP_POIMapMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_POIMapMarker.BP_POIMapMarker_C.GetDiscoverableRadius
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDiscoverable                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Radius                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_POIMapMarker_C::GetDiscoverableRadius(bool* IsDiscoverable, int32* Radius, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_POIMapMarker_C", "GetDiscoverableRadius");

	Params::ABP_POIMapMarker_C_GetDiscoverableRadius_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDiscoverable != nullptr)
		*IsDiscoverable = Parms.IsDiscoverable;

	if (Radius != nullptr)
		*Radius = Parms.Radius;

}


// Function BP_POIMapMarker.BP_POIMapMarker_C.BndEvt__BP_POIMapMarker_DiscoverableRadius_K2Node_ComponentBoundEvent_0_DiscoveredByPlayerDynamicDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_POIMapMarker_C::BndEvt__BP_POIMapMarker_DiscoverableRadius_K2Node_ComponentBoundEvent_0_DiscoveredByPlayerDynamicDelegate__DelegateSignature(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_POIMapMarker_C", "BndEvt__BP_POIMapMarker_DiscoverableRadius_K2Node_ComponentBoundEvent_0_DiscoveredByPlayerDynamicDelegate__DelegateSignature");

	Params::ABP_POIMapMarker_C_BndEvt__BP_POIMapMarker_DiscoverableRadius_K2Node_ComponentBoundEvent_0_DiscoveredByPlayerDynamicDelegate__DelegateSignature_Params Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_POIMapMarker.BP_POIMapMarker_C.BndEvt__BP_POIMapMarker_LevelAware_K2Node_ComponentBoundEvent_1_OnLevelStreamingCompleteSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_POIMapMarker_C::BndEvt__BP_POIMapMarker_LevelAware_K2Node_ComponentBoundEvent_1_OnLevelStreamingCompleteSignature__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_POIMapMarker_C", "BndEvt__BP_POIMapMarker_LevelAware_K2Node_ComponentBoundEvent_1_OnLevelStreamingCompleteSignature__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_POIMapMarker.BP_POIMapMarker_C.ExecuteUbergraph_BP_POIMapMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapPinData                 CallFunc_GetMapPinData_ReturnValue                               (None)
// class AStreamingLevelProxyActor*   CallFunc_GetLevelProxy_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HasTagContainer_C>K2Node_DynamicCast_AsBPI_Has_Tag_Container                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTagContainer_GameplayTagContainer                    (None)
// bool                               CallFunc_GetDiscoverableRadius_IsDiscoverable                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetDiscoverableRadius_Radius                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_ComponentBoundEvent_PlayerState                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             K2Node_DynamicCast_AsNWXPlayer_State                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILocationTrackerInterface>CallFunc_Server_AddMapPinData_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_POIMapMarker_C::ExecuteUbergraph_BP_POIMapMarker(int32 EntryPoint, const struct FMapPinData& CallFunc_GetMapPinData_ReturnValue, class AStreamingLevelProxyActor* CallFunc_GetLevelProxy_ReturnValue, TScriptInterface<class IBPI_HasTagContainer_C> K2Node_DynamicCast_AsBPI_Has_Tag_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetTagContainer_GameplayTagContainer, bool CallFunc_GetDiscoverableRadius_IsDiscoverable, int32 CallFunc_GetDiscoverableRadius_Radius, class APlayerState* K2Node_ComponentBoundEvent_PlayerState, class ANWXPlayerState* K2Node_DynamicCast_AsNWXPlayer_State, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class ILocationTrackerInterface> CallFunc_Server_AddMapPinData_self_CastInput, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_POIMapMarker_C", "ExecuteUbergraph_BP_POIMapMarker");

	Params::ABP_POIMapMarker_C_ExecuteUbergraph_BP_POIMapMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMapPinData_ReturnValue = CallFunc_GetMapPinData_ReturnValue;
	Parms.CallFunc_GetLevelProxy_ReturnValue = CallFunc_GetLevelProxy_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Has_Tag_Container = K2Node_DynamicCast_AsBPI_Has_Tag_Container;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTagContainer_GameplayTagContainer = CallFunc_GetTagContainer_GameplayTagContainer;
	Parms.CallFunc_GetDiscoverableRadius_IsDiscoverable = CallFunc_GetDiscoverableRadius_IsDiscoverable;
	Parms.CallFunc_GetDiscoverableRadius_Radius = CallFunc_GetDiscoverableRadius_Radius;
	Parms.K2Node_ComponentBoundEvent_PlayerState = K2Node_ComponentBoundEvent_PlayerState;
	Parms.K2Node_DynamicCast_AsNWXPlayer_State = K2Node_DynamicCast_AsNWXPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Server_AddMapPinData_self_CastInput = CallFunc_Server_AddMapPinData_self_CastInput;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


