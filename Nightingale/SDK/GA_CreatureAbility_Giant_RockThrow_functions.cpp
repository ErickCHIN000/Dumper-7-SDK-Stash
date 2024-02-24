#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Giant_RockThrow.GA_CreatureAbility_Giant_RockThrow_C
// (None)

class UClass* UGA_CreatureAbility_Giant_RockThrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Giant_RockThrow_C");

	return Clss;
}


// GA_CreatureAbility_Giant_RockThrow_C GA_CreatureAbility_Giant_RockThrow.Default__GA_CreatureAbility_Giant_RockThrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Giant_RockThrow_C* UGA_CreatureAbility_Giant_RockThrow_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Giant_RockThrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Giant_RockThrow_C*>(UGA_CreatureAbility_Giant_RockThrow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Giant_RockThrow.GA_CreatureAbility_Giant_RockThrow_C.SelectMontage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  TargetTransform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                SelectedMontage                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  LTransform                                                       (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTarget_Target                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_CreatureAbilityZoneCallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicMontageArray        CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_SelectMontageNearTarget_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Giant_RockThrow_C::SelectMontage(const struct FTransform& TargetTransform, class UAnimMontage** SelectedMontage, const struct FTransform& LTransform, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetTarget_Target, bool CallFunc_IsValid_ReturnValue_1, enum class Enum_CreatureAbilityZone CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone, const struct FDynamicMontageArray& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAnimMontage* CallFunc_SelectMontageNearTarget_ReturnValue, float CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Giant_RockThrow_C", "SelectMontage");

	Params::UGA_CreatureAbility_Giant_RockThrow_C_SelectMontage_Params Parms{};

	Parms.TargetTransform = TargetTransform;
	Parms.LTransform = LTransform;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTarget_Target = CallFunc_GetTarget_Target;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone = CallFunc_Get_Creature_Ability_Zone_8_Way_CreatureAbilityZone;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_SelectMontageNearTarget_ReturnValue = CallFunc_SelectMontageNearTarget_ReturnValue;
	Parms.CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast = CallFunc_SelectMontageNearTarget_Leeway_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedMontage != nullptr)
		*SelectedMontage = Parms.SelectedMontage;

}


// Function GA_CreatureAbility_Giant_RockThrow.GA_CreatureAbility_Giant_RockThrow_C.GetProjectileStart
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ProjectileStart                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetProjectileStart_ProjectileStart                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetProjectileStart_bSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Giant_RockThrow_C::GetProjectileStart(struct FTransform* ProjectileStart, bool* bSuccess, const struct FTransform& CallFunc_GetProjectileStart_ProjectileStart, bool CallFunc_GetProjectileStart_bSuccess, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Giant_RockThrow_C", "GetProjectileStart");

	Params::UGA_CreatureAbility_Giant_RockThrow_C_GetProjectileStart_Params Parms{};

	Parms.CallFunc_GetProjectileStart_ProjectileStart = CallFunc_GetProjectileStart_ProjectileStart;
	Parms.CallFunc_GetProjectileStart_bSuccess = CallFunc_GetProjectileStart_bSuccess;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ProjectileStart != nullptr)
		*ProjectileStart = std::move(Parms.ProjectileStart);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_CreatureAbility_Giant_RockThrow.GA_CreatureAbility_Giant_RockThrow_C.HandleEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatureAbilityActivate_bSuccess                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Giant_RockThrow_C::HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, const struct FGameplayTag& Temp_struct_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_CreatureAbilityActivate_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Giant_RockThrow_C", "HandleEvent");

	Params::UGA_CreatureAbility_Giant_RockThrow_C_HandleEvent_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.EventData = EventData;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_CreatureAbilityActivate_bSuccess = CallFunc_CreatureAbilityActivate_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Giant_RockThrow.GA_CreatureAbility_Giant_RockThrow_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Giant_RockThrow_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Giant_RockThrow_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_Giant_RockThrow_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Giant_RockThrow.GA_CreatureAbility_Giant_RockThrow_C.ExecuteUbergraph_GA_CreatureAbility_Giant_RockThrow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Giant_RockThrow_C::ExecuteUbergraph_GA_CreatureAbility_Giant_RockThrow(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Giant_RockThrow_C", "ExecuteUbergraph_GA_CreatureAbility_Giant_RockThrow");

	Params::UGA_CreatureAbility_Giant_RockThrow_C_ExecuteUbergraph_GA_CreatureAbility_Giant_RockThrow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}


