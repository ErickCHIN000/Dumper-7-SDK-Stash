#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass de_iraya_send2cage.de_iraya_send2cage_C
// (Actor)

class UClass* ADe_iraya_send2cage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("de_iraya_send2cage_C");

	return Clss;
}


// de_iraya_send2cage_C de_iraya_send2cage.Default__de_iraya_send2cage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADe_iraya_send2cage_C* ADe_iraya_send2cage_C::GetDefaultObj()
{
	static class ADe_iraya_send2cage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADe_iraya_send2cage_C*>(ADe_iraya_send2cage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function de_iraya_send2cage.de_iraya_send2cage_C.call_event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_dlg_actor_C*             Dlg_actor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           Event_data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void ADe_iraya_send2cage_C::Call_event(class Abp_dlg_actor_C* Dlg_actor, const struct FS_dlg_event_info& Event_data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_iraya_send2cage_C", "call_event");

	Params::ADe_iraya_send2cage_C_Call_event_Params Parms{};

	Parms.Dlg_actor = Dlg_actor;
	Parms.Event_data = Event_data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function de_iraya_send2cage.de_iraya_send2cage_C.ExecuteUbergraph_de_iraya_send2cage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             K2Node_Event_dlg_actor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_dlg_event_info           K2Node_Event_event_data                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Fade_C*                  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_iraya_C*                CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIraya_placeholder_C*        CallFunc_GetActorOfClass_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocationAndRotation_SweepHitResult           (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocationAndRotation_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ANpc_ranno_C*                CallFunc_GetActorOfClass_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_layout_widget_is_valid                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UW_01_quest_layout_C*        CallFunc_get_layout_widget_quest_widget                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_TargetIndicatorComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_quest_is_valid                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_quest_found_index                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_quest_actor_C*           CallFunc_get_quest_quest_actor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// bool                               CallFunc_msl_get_actor_by_id_is_valid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_msl_get_actor_by_id_actor_reference                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_dlg_get_dlg_component_is_valid                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Ubp_dlg_component_C*         CallFunc_dlg_get_dlg_component_dlg_reference                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Interactable_C*          CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_get_dlg_is_valid                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_get_dlg_found_index                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_dlg_actor_C*             CallFunc_get_dlg_dlg_actor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ADe_iraya_send2cage_C::ExecuteUbergraph_de_iraya_send2cage(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, int32 Temp_int_Array_Index_Variable, class Abp_dlg_actor_C* K2Node_Event_dlg_actor, const struct FS_dlg_event_info& K2Node_Event_event_data, int32 Temp_int_Loop_Counter_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWB_Fade_C* CallFunc_Create_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANpc_iraya_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIraya_placeholder_C* CallFunc_GetActorOfClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, class ANpc_ranno_C* CallFunc_GetActorOfClass_ReturnValue_2, bool CallFunc_get_layout_widget_is_valid, class UW_01_quest_layout_C* CallFunc_get_layout_widget_quest_widget, bool CallFunc_IsValid_ReturnValue_2, class UBP_TargetIndicatorComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_get_quest_is_valid, int32 CallFunc_get_quest_found_index, class Abp_quest_actor_C* CallFunc_get_quest_quest_actor, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_msl_get_actor_by_id_is_valid, class AActor* CallFunc_msl_get_actor_by_id_actor_reference, class AActor* CallFunc_Array_Get_Item, bool CallFunc_dlg_get_dlg_component_is_valid, class Ubp_dlg_component_C* CallFunc_dlg_get_dlg_component_dlg_reference, class UAC_Interactable_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_get_dlg_is_valid, int32 CallFunc_get_dlg_found_index, class Abp_dlg_actor_C* CallFunc_get_dlg_dlg_actor, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("de_iraya_send2cage_C", "ExecuteUbergraph_de_iraya_send2cage");

	Params::ADe_iraya_send2cage_C_ExecuteUbergraph_de_iraya_send2cage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_dlg_actor = K2Node_Event_dlg_actor;
	Parms.K2Node_Event_event_data = K2Node_Event_event_data;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_1 = CallFunc_GetActorOfClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_K2_SetActorLocationAndRotation_SweepHitResult = CallFunc_K2_SetActorLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocationAndRotation_ReturnValue = CallFunc_K2_SetActorLocationAndRotation_ReturnValue;
	Parms.CallFunc_GetActorOfClass_ReturnValue_2 = CallFunc_GetActorOfClass_ReturnValue_2;
	Parms.CallFunc_get_layout_widget_is_valid = CallFunc_get_layout_widget_is_valid;
	Parms.CallFunc_get_layout_widget_quest_widget = CallFunc_get_layout_widget_quest_widget;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_get_quest_is_valid = CallFunc_get_quest_is_valid;
	Parms.CallFunc_get_quest_found_index = CallFunc_get_quest_found_index;
	Parms.CallFunc_get_quest_quest_actor = CallFunc_get_quest_quest_actor;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_msl_get_actor_by_id_is_valid = CallFunc_msl_get_actor_by_id_is_valid;
	Parms.CallFunc_msl_get_actor_by_id_actor_reference = CallFunc_msl_get_actor_by_id_actor_reference;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_dlg_get_dlg_component_is_valid = CallFunc_dlg_get_dlg_component_is_valid;
	Parms.CallFunc_dlg_get_dlg_component_dlg_reference = CallFunc_dlg_get_dlg_component_dlg_reference;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_get_dlg_is_valid = CallFunc_get_dlg_is_valid;
	Parms.CallFunc_get_dlg_found_index = CallFunc_get_dlg_found_index;
	Parms.CallFunc_get_dlg_dlg_actor = CallFunc_get_dlg_dlg_actor;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


