#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass example_tps_character_parent.example_tps_character_parent_C
// (Actor, Pawn)

class UClass* AExample_tps_character_parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("example_tps_character_parent_C");

	return Clss;
}


// example_tps_character_parent_C example_tps_character_parent.Default__example_tps_character_parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AExample_tps_character_parent_C* AExample_tps_character_parent_C::GetDefaultObj()
{
	static class AExample_tps_character_parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AExample_tps_character_parent_C*>(AExample_tps_character_parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function example_tps_character_parent.example_tps_character_parent_C.rotate_character
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Target_rotation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Is_moving                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AExample_tps_character_parent_C::Rotate_character(const struct FRotator& Target_rotation, bool Is_moving, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "rotate_character");

	Params::AExample_tps_character_parent_C_Rotate_character_Params Parms{};

	Parms.Target_rotation = Target_rotation;
	Parms.Is_moving = Is_moving;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_RInterpTo_ReturnValue = CallFunc_RInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function example_tps_character_parent.example_tps_character_parent_C.get_control_direction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Axis_x                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Axis_y                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Stick_value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Stick_direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DegAtan2_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Multiply_RotatorInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AExample_tps_character_parent_C::Get_control_direction(float Axis_x, float Axis_y, float* Stick_value, struct FRotator* Stick_direction, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_DegAtan2_ReturnValue, float CallFunc_Abs_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FRotator& CallFunc_Multiply_RotatorInt_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "get_control_direction");

	Params::AExample_tps_character_parent_C_Get_control_direction_Params Parms{};

	Parms.Axis_x = Axis_x;
	Parms.Axis_y = Axis_y;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_DegAtan2_ReturnValue = CallFunc_DegAtan2_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Multiply_RotatorInt_ReturnValue = CallFunc_Multiply_RotatorInt_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Stick_value != nullptr)
		*Stick_value = Parms.Stick_value;

	if (Stick_direction != nullptr)
		*Stick_direction = std::move(Parms.Stick_direction);

}


// Function example_tps_character_parent.example_tps_character_parent_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AExample_tps_character_parent_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_savegame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_tps_character_parent.example_tps_character_parent_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AExample_tps_character_parent_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature");

	Params::AExample_tps_character_parent_C_BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_begingame__DelegateSignature_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function example_tps_character_parent.example_tps_character_parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AExample_tps_character_parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_tps_character_parent.example_tps_character_parent_C.ed_parent_begingame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Loaded_save_file                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AExample_tps_character_parent_C::Ed_parent_begingame(bool Loaded_save_file)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "ed_parent_begingame");

	Params::AExample_tps_character_parent_C_Ed_parent_begingame_Params Parms{};

	Parms.Loaded_save_file = Loaded_save_file;

	UObject::ProcessEvent(Func, &Parms);

}


// Function example_tps_character_parent.example_tps_character_parent_C.ed_parent_savegame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AExample_tps_character_parent_C::Ed_parent_savegame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "ed_parent_savegame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_tps_character_parent.example_tps_character_parent_C.BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_loadgame__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AExample_tps_character_parent_C::BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_loadgame__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "BndEvt__bp_msl_identifier_component_K2Node_ComponentBoundEvent_0_ed_loadgame__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_tps_character_parent.example_tps_character_parent_C.BndEvt__Interaction_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AExample_tps_character_parent_C::BndEvt__Interaction_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "BndEvt__Interaction_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AExample_tps_character_parent_C_BndEvt__Interaction_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function example_tps_character_parent.example_tps_character_parent_C.BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AExample_tps_character_parent_C::BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "BndEvt__bp_dlg_component_K2Node_ComponentBoundEvent_0_ed_dlg_init__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_tps_character_parent.example_tps_character_parent_C.EventCheckInteractionObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AExample_tps_character_parent_C::EventCheckInteractionObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "EventCheckInteractionObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function example_tps_character_parent.example_tps_character_parent_C.ExecuteUbergraph_example_tps_character_parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_ComponentBoundEvent_loaded_save_file                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_loaded_save_file                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_NPC_Interaction_C>K2Node_DynamicCast_AsBPI_NPC_Interaction                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UComp_NPC_Controller_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_NPC_Interaction_C>K2Node_DynamicCast_AsBPI_NPC_Interaction_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference)
// class UPhysicalAnimationComponent* CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPhysicalAnimationData      K2Node_MakeStruct_PhysicalAnimationData                          (NoDestructor)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_NPC_Controller_C*      CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AExample_tps_character_parent_C::ExecuteUbergraph_example_tps_character_parent(int32 EntryPoint, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, bool K2Node_ComponentBoundEvent_loaded_save_file, TArray<class USkeletalMeshComponent*>& K2Node_MakeArray_Array_1, bool K2Node_CustomEvent_loaded_save_file, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, bool CallFunc_DoesImplementInterface_ReturnValue, TScriptInterface<class IBPI_NPC_Interaction_C> K2Node_DynamicCast_AsBPI_NPC_Interaction, bool K2Node_DynamicCast_bSuccess, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_NPC_Interaction_C> K2Node_DynamicCast_AsBPI_NPC_Interaction_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array_2, class UPhysicalAnimationComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FPhysicalAnimationData& K2Node_MakeStruct_PhysicalAnimationData, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("example_tps_character_parent_C", "ExecuteUbergraph_example_tps_character_parent");

	Params::AExample_tps_character_parent_C_ExecuteUbergraph_example_tps_character_parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_ComponentBoundEvent_loaded_save_file = K2Node_ComponentBoundEvent_loaded_save_file;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_loaded_save_file = K2Node_CustomEvent_loaded_save_file;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_NPC_Interaction = K2Node_DynamicCast_AsBPI_NPC_Interaction;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_NPC_Interaction_1 = K2Node_DynamicCast_AsBPI_NPC_Interaction_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_PhysicalAnimationData = K2Node_MakeStruct_PhysicalAnimationData;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


