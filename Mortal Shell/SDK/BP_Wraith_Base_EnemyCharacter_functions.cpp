#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C
// (Actor, Pawn)

class UClass* ABP_Wraith_Base_EnemyCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wraith_Base_EnemyCharacter_C");

	return Clss;
}


// BP_Wraith_Base_EnemyCharacter_C BP_Wraith_Base_EnemyCharacter.Default__BP_Wraith_Base_EnemyCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Wraith_Base_EnemyCharacter_C* ABP_Wraith_Base_EnemyCharacter_C::GetDefaultObj()
{
	static class ABP_Wraith_Base_EnemyCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Wraith_Base_EnemyCharacter_C*>(ABP_Wraith_Base_EnemyCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Wraith_Teleport
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_TeleportTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Wraith_Base_EnemyCharacter_C::Wraith_Teleport(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Wraith_Teleport");

	Params::ABP_Wraith_Base_EnemyCharacter_C_Wraith_Teleport_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation = CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue = CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue;
	Parms.CallFunc_K2_TeleportTo_ReturnValue = CallFunc_K2_TeleportTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.DissolveNailProjectiles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANailProjectile_Box_C*       K2Node_DynamicCast_AsNail_Projectile_Box                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::DissolveNailProjectiles(float Amount, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ANailProjectile_Box_C* K2Node_DynamicCast_AsNail_Projectile_Box, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "DissolveNailProjectiles");

	Params::ABP_Wraith_Base_EnemyCharacter_C_DissolveNailProjectiles_Params Parms{};

	Parms.Amount = Amount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsNail_Projectile_Box = K2Node_DynamicCast_AsNail_Projectile_Box;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.GetStandardAudioComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAudioComponentLocation Audio_Component_Location                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponIdentity         WeaponIdentity__only_for_weapons_                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepSocket         FootstepSocket__only_for_feet_                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Audio_Component                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Wraith_Base_EnemyCharacter_C::GetStandardAudioComponent(enum class EAudioComponentLocation Audio_Component_Location, enum class EWeaponIdentity WeaponIdentity__only_for_weapons_, enum class EFootstepSocket FootstepSocket__only_for_feet_, class UAudioComponent** Audio_Component, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "GetStandardAudioComponent");

	Params::ABP_Wraith_Base_EnemyCharacter_C_GetStandardAudioComponent_Params Parms{};

	Parms.Audio_Component_Location = Audio_Component_Location;
	Parms.WeaponIdentity__only_for_weapons_ = WeaponIdentity__only_for_weapons_;
	Parms.FootstepSocket__only_for_feet_ = FootstepSocket__only_for_feet_;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Audio_Component != nullptr)
		*Audio_Component = Parms.Audio_Component;

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.GetSpellCooldownGameTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAsFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_Wraith_Base_EnemyCharacter_C::GetSpellCooldownGameTime(class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetValueAsFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "GetSpellCooldownGameTime");

	Params::ABP_Wraith_Base_EnemyCharacter_C_GetSpellCooldownGameTime_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValueAsFloat_ReturnValue = CallFunc_GetValueAsFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.SetSpellCooldownGameTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FloatValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Wraith_Base_EnemyCharacter_C::SetSpellCooldownGameTime(float FloatValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "SetSpellCooldownGameTime");

	Params::ABP_Wraith_Base_EnemyCharacter_C_SetSpellCooldownGameTime_Params Parms{};

	Parms.FloatValue = FloatValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.GetMeleeTraceEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "GetMeleeTraceEnd");

	Params::ABP_Wraith_Base_EnemyCharacter_C_GetMeleeTraceEnd_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.GetMeleeTraceStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "GetMeleeTraceStart");

	Params::ABP_Wraith_Base_EnemyCharacter_C_GetMeleeTraceStart_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Timeline_3__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Timeline_3__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Timeline_3__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Timeline_3__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Timeline_3__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Timeline_3__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Timeline_HealRiposteDeath__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Timeline_HealRiposteDeath__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Timeline_HealRiposteDeath__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Timeline_HealRiposteDeath__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Timeline_HealRiposteDeath__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Timeline_HealRiposteDeath__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Timeline_HealRiposteDeath__Death__EventFunc
// (BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Timeline_HealRiposteDeath__Death__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Timeline_HealRiposteDeath__Death__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Timeline_2_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Timeline_2_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Timeline_2_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Timeline_2_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Timeline_2_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Timeline_2_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyEnd_229552E040CB4341ABA17A9A380701A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyEnd_229552E040CB4341ABA17A9A380701A8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyEnd_229552E040CB4341ABA17A9A380701A8");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyEnd_229552E040CB4341ABA17A9A380701A8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyBegin_229552E040CB4341ABA17A9A380701A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyBegin_229552E040CB4341ABA17A9A380701A8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyBegin_229552E040CB4341ABA17A9A380701A8");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyBegin_229552E040CB4341ABA17A9A380701A8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnInterrupted_229552E040CB4341ABA17A9A380701A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnInterrupted_229552E040CB4341ABA17A9A380701A8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnInterrupted_229552E040CB4341ABA17A9A380701A8");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnInterrupted_229552E040CB4341ABA17A9A380701A8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnBlendOut_229552E040CB4341ABA17A9A380701A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnBlendOut_229552E040CB4341ABA17A9A380701A8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnBlendOut_229552E040CB4341ABA17A9A380701A8");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnBlendOut_229552E040CB4341ABA17A9A380701A8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCompleted_229552E040CB4341ABA17A9A380701A8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnCompleted_229552E040CB4341ABA17A9A380701A8(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCompleted_229552E040CB4341ABA17A9A380701A8");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnCompleted_229552E040CB4341ABA17A9A380701A8_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyEnd_A3B0F0474C87AD5857920CA871518269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyEnd_A3B0F0474C87AD5857920CA871518269(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyEnd_A3B0F0474C87AD5857920CA871518269");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyEnd_A3B0F0474C87AD5857920CA871518269_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyBegin_A3B0F0474C87AD5857920CA871518269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyBegin_A3B0F0474C87AD5857920CA871518269(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyBegin_A3B0F0474C87AD5857920CA871518269");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyBegin_A3B0F0474C87AD5857920CA871518269_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnInterrupted_A3B0F0474C87AD5857920CA871518269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnInterrupted_A3B0F0474C87AD5857920CA871518269(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnInterrupted_A3B0F0474C87AD5857920CA871518269");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnInterrupted_A3B0F0474C87AD5857920CA871518269_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnBlendOut_A3B0F0474C87AD5857920CA871518269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnBlendOut_A3B0F0474C87AD5857920CA871518269(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnBlendOut_A3B0F0474C87AD5857920CA871518269");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnBlendOut_A3B0F0474C87AD5857920CA871518269_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCompleted_A3B0F0474C87AD5857920CA871518269
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnCompleted_A3B0F0474C87AD5857920CA871518269(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCompleted_A3B0F0474C87AD5857920CA871518269");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnCompleted_A3B0F0474C87AD5857920CA871518269_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyEnd_34DA5AF14D05998D1A46EEB4F8B3C651
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyEnd_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyEnd_34DA5AF14D05998D1A46EEB4F8B3C651");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyEnd_34DA5AF14D05998D1A46EEB4F8B3C651_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyBegin_34DA5AF14D05998D1A46EEB4F8B3C651
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyBegin_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyBegin_34DA5AF14D05998D1A46EEB4F8B3C651");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyBegin_34DA5AF14D05998D1A46EEB4F8B3C651_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnInterrupted_34DA5AF14D05998D1A46EEB4F8B3C651
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnInterrupted_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnInterrupted_34DA5AF14D05998D1A46EEB4F8B3C651");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnInterrupted_34DA5AF14D05998D1A46EEB4F8B3C651_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnBlendOut_34DA5AF14D05998D1A46EEB4F8B3C651
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnBlendOut_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnBlendOut_34DA5AF14D05998D1A46EEB4F8B3C651");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnBlendOut_34DA5AF14D05998D1A46EEB4F8B3C651_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCompleted_34DA5AF14D05998D1A46EEB4F8B3C651
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnCompleted_34DA5AF14D05998D1A46EEB4F8B3C651(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCompleted_34DA5AF14D05998D1A46EEB4F8B3C651");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnCompleted_34DA5AF14D05998D1A46EEB4F8B3C651_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyEnd_634D88C44FE75E5155922289451C7CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyEnd_634D88C44FE75E5155922289451C7CD2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyEnd_634D88C44FE75E5155922289451C7CD2");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyEnd_634D88C44FE75E5155922289451C7CD2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyBegin_634D88C44FE75E5155922289451C7CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyBegin_634D88C44FE75E5155922289451C7CD2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyBegin_634D88C44FE75E5155922289451C7CD2");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyBegin_634D88C44FE75E5155922289451C7CD2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnInterrupted_634D88C44FE75E5155922289451C7CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnInterrupted_634D88C44FE75E5155922289451C7CD2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnInterrupted_634D88C44FE75E5155922289451C7CD2");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnInterrupted_634D88C44FE75E5155922289451C7CD2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnBlendOut_634D88C44FE75E5155922289451C7CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnBlendOut_634D88C44FE75E5155922289451C7CD2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnBlendOut_634D88C44FE75E5155922289451C7CD2");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnBlendOut_634D88C44FE75E5155922289451C7CD2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCompleted_634D88C44FE75E5155922289451C7CD2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnCompleted_634D88C44FE75E5155922289451C7CD2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCompleted_634D88C44FE75E5155922289451C7CD2");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnCompleted_634D88C44FE75E5155922289451C7CD2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyEnd_0420B4234CCC8660B4521DA3DD964E5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyEnd_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyEnd_0420B4234CCC8660B4521DA3DD964E5D");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyEnd_0420B4234CCC8660B4521DA3DD964E5D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyBegin_0420B4234CCC8660B4521DA3DD964E5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyBegin_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyBegin_0420B4234CCC8660B4521DA3DD964E5D");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyBegin_0420B4234CCC8660B4521DA3DD964E5D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnInterrupted_0420B4234CCC8660B4521DA3DD964E5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnInterrupted_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnInterrupted_0420B4234CCC8660B4521DA3DD964E5D");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnInterrupted_0420B4234CCC8660B4521DA3DD964E5D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnBlendOut_0420B4234CCC8660B4521DA3DD964E5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnBlendOut_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnBlendOut_0420B4234CCC8660B4521DA3DD964E5D");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnBlendOut_0420B4234CCC8660B4521DA3DD964E5D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCompleted_0420B4234CCC8660B4521DA3DD964E5D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnCompleted_0420B4234CCC8660B4521DA3DD964E5D(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCompleted_0420B4234CCC8660B4521DA3DD964E5D");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnCompleted_0420B4234CCC8660B4521DA3DD964E5D_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyEnd_93AFC8C747ECE45D4F3242B0393FFD9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyEnd_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyEnd_93AFC8C747ECE45D4F3242B0393FFD9E");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyEnd_93AFC8C747ECE45D4F3242B0393FFD9E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyBegin_93AFC8C747ECE45D4F3242B0393FFD9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyBegin_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyBegin_93AFC8C747ECE45D4F3242B0393FFD9E");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyBegin_93AFC8C747ECE45D4F3242B0393FFD9E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnInterrupted_93AFC8C747ECE45D4F3242B0393FFD9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnInterrupted_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnInterrupted_93AFC8C747ECE45D4F3242B0393FFD9E");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnInterrupted_93AFC8C747ECE45D4F3242B0393FFD9E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnBlendOut_93AFC8C747ECE45D4F3242B0393FFD9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnBlendOut_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnBlendOut_93AFC8C747ECE45D4F3242B0393FFD9E");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnBlendOut_93AFC8C747ECE45D4F3242B0393FFD9E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCompleted_93AFC8C747ECE45D4F3242B0393FFD9E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnCompleted_93AFC8C747ECE45D4F3242B0393FFD9E(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCompleted_93AFC8C747ECE45D4F3242B0393FFD9E");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnCompleted_93AFC8C747ECE45D4F3242B0393FFD9E_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyEnd_033833704C62B27E7DDD2EBB1A6E08B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyEnd_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyEnd_033833704C62B27E7DDD2EBB1A6E08B1");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyEnd_033833704C62B27E7DDD2EBB1A6E08B1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnNotifyBegin_033833704C62B27E7DDD2EBB1A6E08B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnNotifyBegin_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnNotifyBegin_033833704C62B27E7DDD2EBB1A6E08B1");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnNotifyBegin_033833704C62B27E7DDD2EBB1A6E08B1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnInterrupted_033833704C62B27E7DDD2EBB1A6E08B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnInterrupted_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnInterrupted_033833704C62B27E7DDD2EBB1A6E08B1");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnInterrupted_033833704C62B27E7DDD2EBB1A6E08B1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnBlendOut_033833704C62B27E7DDD2EBB1A6E08B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnBlendOut_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnBlendOut_033833704C62B27E7DDD2EBB1A6E08B1");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnBlendOut_033833704C62B27E7DDD2EBB1A6E08B1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCompleted_033833704C62B27E7DDD2EBB1A6E08B1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::OnCompleted_033833704C62B27E7DDD2EBB1A6E08B1(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCompleted_033833704C62B27E7DDD2EBB1A6E08B1");

	Params::ABP_Wraith_Base_EnemyCharacter_C_OnCompleted_033833704C62B27E7DDD2EBB1A6E08B1_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.AttackIfPlayerClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::AttackIfPlayerClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "AttackIfPlayerClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.InitAfterSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     SpawnerRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            PhaseToSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPermanentlyDeadOnceKilled_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldWander_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AggroRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   TriggerToActivateOnAggro                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPatrol_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void ABP_Wraith_Base_EnemyCharacter_C::InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "InitAfterSpawn");

	Params::ABP_Wraith_Base_EnemyCharacter_C_InitAfterSpawn_Params Parms{};

	Parms.SpawnerRef = SpawnerRef;
	Parms.UniqueId = UniqueId;
	Parms.PhaseToSpawn = PhaseToSpawn;
	Parms.bPermanentlyDeadOnceKilled_ = bPermanentlyDeadOnceKilled_;
	Parms.PatrolPointA = PatrolPointA;
	Parms.bShouldWander_ = bShouldWander_;
	Parms.PatrolPointB = PatrolPointB;
	Parms.AggroRadius = AggroRadius;
	Parms.TriggerToActivateOnAggro = TriggerToActivateOnAggro;
	Parms.ShouldPatrol_ = ShouldPatrol_;
	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnCastEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::OnCastEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnCastEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.OnAttackMontageInterrupted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::OnAttackMontageInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "OnAttackMontageInterrupted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.TeleportAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::TeleportAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "TeleportAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "PlayAttackMontage");

	Params::ABP_Wraith_Base_EnemyCharacter_C_PlayAttackMontage_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.RangedAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::RangedAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "RangedAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.MeleeAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::MeleeAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "MeleeAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.SelectAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceFromPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::SelectAttack(float DistanceFromPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "SelectAttack");

	Params::ABP_Wraith_Base_EnemyCharacter_C_SelectAttack_Params Parms{};

	Parms.DistanceFromPlayer = DistanceFromPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Time_Freeze_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DurationBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::Time_Freeze_Start(float DurationBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Time_Freeze_Start");

	Params::ABP_Wraith_Base_EnemyCharacter_C_Time_Freeze_Start_Params Parms{};

	Parms.DurationBonus = DurationBonus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.PlayLightHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::PlayLightHitReaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "PlayLightHitReaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.ForceHeavyStaggerDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     DirectionToSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::ForceHeavyStaggerDamage(const struct FVector& DirectionToSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "ForceHeavyStaggerDamage");

	Params::ABP_Wraith_Base_EnemyCharacter_C_ForceHeavyStaggerDamage_Params Parms{};

	Parms.DirectionToSource = DirectionToSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.SpawnParticles
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::SpawnParticles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "SpawnParticles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.PlayDeathblowReactionAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             RiposteWeapon                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           RipostePowerType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Wraith_Base_EnemyCharacter_C::PlayDeathblowReactionAnimation(enum class EComboTypes RiposteWeapon, enum class ERiposteTypes RipostePowerType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "PlayDeathblowReactionAnimation");

	Params::ABP_Wraith_Base_EnemyCharacter_C_PlayDeathblowReactionAnimation_Params Parms{};

	Parms.RiposteWeapon = RiposteWeapon;
	Parms.RipostePowerType = RipostePowerType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.HeavyHitReactionDeathMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::HeavyHitReactionDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "HeavyHitReactionDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.PlayDeathMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::PlayDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "PlayDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Wraith_Base_EnemyCharacter_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "EnemyDeath");

	Params::ABP_Wraith_Base_EnemyCharacter_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.CastSpell
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::CastSpell()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "CastSpell");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.Teleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::Teleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "Teleport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.WraithDodge
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Wraith_Base_EnemyCharacter_C::WraithDodge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "WraithDodge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Wraith_Base_EnemyCharacter.BP_Wraith_Base_EnemyCharacter_C.ExecuteUbergraph_BP_Wraith_Base_EnemyCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_31                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_30                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAdvancedEnemySpawner_C*     K2Node_Event_SpawnerRef                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_UniqueID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            K2Node_Event_PhaseToSpawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPermanentlyDeadOnceKilled_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldWander_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AggroRadius                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   K2Node_Event_TriggerToActivateOnAggro                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldPatrol_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSpellCooldownGameTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_MontageToPlay                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartingPosition                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StartingSection                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_34                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DistanceFromPlayer                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DurationBonus                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_DirectionToSource                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors                             (ReferenceParm, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAttachedActors_OutActors_1                           (ReferenceParm, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_32                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_33                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_3                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_RiposteWeapon                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_RipostePowerType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class ABP_DarkSphereProjectile_C*  CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Killer                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldPlayDeathAnim                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWraith_Skeleton_AnimBlueprint_C*K2Node_DynamicCast_AsWraith_Skeleton_Anim_Blueprint              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Wraith_Base_EnemyCharacter_C::ExecuteUbergraph_BP_Wraith_Base_EnemyCharacter(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_31, class FName K2Node_CustomEvent_NotifyName_30, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, int32 Temp_int_Variable, bool K2Node_SwitchName_CmpSuccess, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, class UAnimMontage* Temp_object_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_29, class FName K2Node_CustomEvent_NotifyName_28, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_24, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable_2, class FName K2Node_CustomEvent_NotifyName_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_3, bool CallFunc_EqualEqual_NameName_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class FName Temp_name_Variable_4, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName Temp_name_Variable_5, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class FName Temp_name_Variable_6, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetSpellCooldownGameTime_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, float CallFunc_GetGameTimeInSeconds_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class UAnimMontage* K2Node_Event_MontageToPlay, float K2Node_Event_PlayRate, float K2Node_Event_StartingPosition, class FName K2Node_Event_StartingSection, class FName K2Node_CustomEvent_NotifyName_34, float K2Node_Event_DistanceFromPlayer, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float K2Node_Event_DurationBonus, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UAnimMontage* K2Node_Select_Default, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed, const struct FVector& K2Node_Event_DirectionToSource, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors_1, class FName K2Node_CustomEvent_NotifyName_32, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, class FName K2Node_CustomEvent_NotifyName_33, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, enum class EComboTypes K2Node_Event_RiposteWeapon, enum class ERiposteTypes K2Node_Event_RipostePowerType, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class ABP_DarkSphereProjectile_C* CallFunc_FinishSpawningActor_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, bool CallFunc_IsValid_ReturnValue_4, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AActor* K2Node_Event_Killer, bool K2Node_Event_bShouldPlayDeathAnim, class UWraith_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsWraith_Skeleton_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_2, class AController* CallFunc_GetController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2, bool K2Node_DynamicCast_bSuccess_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_RandomBool_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, class AController* CallFunc_GetController_ReturnValue_2, float CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2, bool CallFunc_IsValid_ReturnValue_10, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, class UAnimMontage* K2Node_Select_Default_2, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Wraith_Base_EnemyCharacter_C", "ExecuteUbergraph_BP_Wraith_Base_EnemyCharacter");

	Params::ABP_Wraith_Base_EnemyCharacter_C_ExecuteUbergraph_BP_Wraith_Base_EnemyCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_31 = K2Node_CustomEvent_NotifyName_31;
	Parms.K2Node_CustomEvent_NotifyName_30 = K2Node_CustomEvent_NotifyName_30;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_Event_SpawnerRef = K2Node_Event_SpawnerRef;
	Parms.K2Node_Event_UniqueID = K2Node_Event_UniqueID;
	Parms.K2Node_Event_PhaseToSpawn = K2Node_Event_PhaseToSpawn;
	Parms.K2Node_Event_bPermanentlyDeadOnceKilled_ = K2Node_Event_bPermanentlyDeadOnceKilled_;
	Parms.K2Node_Event_PatrolPointA = K2Node_Event_PatrolPointA;
	Parms.K2Node_Event_bShouldWander_ = K2Node_Event_bShouldWander_;
	Parms.K2Node_Event_PatrolPointB = K2Node_Event_PatrolPointB;
	Parms.K2Node_Event_AggroRadius = K2Node_Event_AggroRadius;
	Parms.K2Node_Event_TriggerToActivateOnAggro = K2Node_Event_TriggerToActivateOnAggro;
	Parms.K2Node_Event_ShouldPatrol_ = K2Node_Event_ShouldPatrol_;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSpellCooldownGameTime_ReturnValue = CallFunc_GetSpellCooldownGameTime_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_2 = CallFunc_GetGameTimeInSeconds_ReturnValue_2;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_3 = CallFunc_GetGameTimeInSeconds_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_MontageToPlay = K2Node_Event_MontageToPlay;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.K2Node_Event_StartingPosition = K2Node_Event_StartingPosition;
	Parms.K2Node_Event_StartingSection = K2Node_Event_StartingSection;
	Parms.K2Node_CustomEvent_NotifyName_34 = K2Node_CustomEvent_NotifyName_34;
	Parms.K2Node_Event_DistanceFromPlayer = K2Node_Event_DistanceFromPlayer;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.K2Node_Event_DurationBonus = K2Node_Event_DurationBonus;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed;
	Parms.K2Node_Event_DirectionToSource = K2Node_Event_DirectionToSource;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_1;
	Parms.CallFunc_GetAttachedActors_OutActors = CallFunc_GetAttachedActors_OutActors;
	Parms.CallFunc_GetAttachedActors_OutActors_1 = CallFunc_GetAttachedActors_OutActors_1;
	Parms.K2Node_CustomEvent_NotifyName_32 = K2Node_CustomEvent_NotifyName_32;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.K2Node_CustomEvent_NotifyName_33 = K2Node_CustomEvent_NotifyName_33;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_2 = CallFunc_SpawnEmitterAttached_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_3 = CallFunc_SpawnEmitterAttached_ReturnValue_3;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.K2Node_Event_RiposteWeapon = K2Node_Event_RiposteWeapon;
	Parms.K2Node_Event_RipostePowerType = K2Node_Event_RipostePowerType;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_Event_Killer = K2Node_Event_Killer;
	Parms.K2Node_Event_bShouldPlayDeathAnim = K2Node_Event_bShouldPlayDeathAnim;
	Parms.K2Node_DynamicCast_AsWraith_Skeleton_Anim_Blueprint = K2Node_DynamicCast_AsWraith_Skeleton_Anim_Blueprint;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetMaterial_ReturnValue_2 = CallFunc_GetMaterial_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetMaterial_ReturnValue_3 = CallFunc_GetMaterial_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2 = CallFunc_UpdateCurrentMontagePlayLength_PlayLengthAtDefaultPlaybackSpeed_2;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;

	UObject::ProcessEvent(Func, &Parms);

}

}


