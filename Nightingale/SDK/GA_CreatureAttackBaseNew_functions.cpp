#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C
// (None)

class UClass* UGA_CreatureAttackBaseNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAttackBaseNew_C");

	return Clss;
}


// GA_CreatureAttackBaseNew_C GA_CreatureAttackBaseNew.Default__GA_CreatureAttackBaseNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAttackBaseNew_C* UGA_CreatureAttackBaseNew_C::GetDefaultObj()
{
	static class UGA_CreatureAttackBaseNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAttackBaseNew_C*>(UGA_CreatureAttackBaseNew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C.SetSquadFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureSpawnerBase_C*   LSpawner                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>CallFunc_IsFriend_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriend_bIsFriend                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureSpawnerBase_C*   K2Node_DynamicCast_AsBP_Creature_Spawner_Base                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAttackBaseNew_C::SetSquadFocus(class ABP_CreatureSpawnerBase_C* LSpawner, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput, bool CallFunc_IsFriend_bIsFriend, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAttackBaseNew_C", "SetSquadFocus");

	Params::UGA_CreatureAttackBaseNew_C_SetSquadFocus_Params Parms{};

	Parms.LSpawner = LSpawner;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsFriend_self_CastInput = CallFunc_IsFriend_self_CastInput;
	Parms.CallFunc_IsFriend_bIsFriend = CallFunc_IsFriend_bIsFriend;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Spawner_Base = K2Node_DynamicCast_AsBP_Creature_Spawner_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C.CreatureAbilityError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Error_Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               EndAbility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            NWXLogLevel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UGA_CreatureAttackBaseNew_C::CreatureAbilityError(const class FString& Error_Text, bool EndAbility, enum class ENWXLogLevel NWXLogLevel, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAttackBaseNew_C", "CreatureAbilityError");

	Params::UGA_CreatureAttackBaseNew_C_CreatureAbilityError_Params Parms{};

	Parms.Error_Text = Error_Text;
	Parms.EndAbility = EndAbility;
	Parms.NWXLogLevel = NWXLogLevel;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C.ApplyKnockback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       ReduceKnockbackTag                                               (Edit, BlueprintVisible)
// struct FGameplayTagContainer       Temp_struct_Variable                                             (None)
// TScriptInterface<class IGameplayTagAssetInterface>K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FS_CreatureKnockbackData    K2Node_MakeStruct_S_CreatureKnockbackData                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAttackBaseNew_C::ApplyKnockback(const struct FGameplayTagContainer& ReduceKnockbackTag, const struct FGameplayTagContainer& Temp_struct_Variable, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasAnyTags_ReturnValue, double CallFunc_SelectFloat_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FS_CreatureKnockbackData& K2Node_MakeStruct_S_CreatureKnockbackData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAttackBaseNew_C", "ApplyKnockback");

	Params::UGA_CreatureAttackBaseNew_C_ApplyKnockback_Params Parms{};

	Parms.ReduceKnockbackTag = ReduceKnockbackTag;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_S_CreatureKnockbackData = K2Node_MakeStruct_S_CreatureKnockbackData;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast = K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C.ApplyDamageToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LAbilityDamage                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       LEffectTags                                                      (Edit, BlueprintVisible)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayEffectCue>  Temp_struct_Variable_2                                           (ConstParm, ReferenceParm)
// struct FGameplayTag                Temp_struct_Variable_3                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAICompanionInterface>K2Node_DynamicCast_AsAICompanion_Interface                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_StrengthTag_StrengthTag                                 (NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_GetOwnedGameplayTags_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       (None)
// struct FGameplayAttribute          Temp_struct_Variable_4                                           (ConstParm, HasGetValueTypeHash)
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateItemAttributeValue_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>CallFunc_IsFriend_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriend_bIsFriend                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Targeter_C>CallFunc_IsFriend_self_CastInput_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFriend_bIsFriend_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetAbilityDamage_Damage                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IDamageEventInterface>K2Node_DynamicCast_AsDamage_Event_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagValueContainer          CallFunc_DamageActor_AggregatedDamageTags                        (None)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_Value_ImplicitCast                                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DamageActor_BaseDamage_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAttackBaseNew_C::ApplyDamageToTarget(double LAbilityDamage, const struct FGameplayTagContainer& LEffectTags, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, const struct FGameplayTag& CallFunc_StrengthTag_StrengthTag, double CallFunc_SelectFloat_ReturnValue, double CallFunc_FMax_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, const struct FGameplayAttribute& Temp_struct_Variable_4, class AEquippableItem* Temp_object_Variable, bool CallFunc_ActorHasTag_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_CalculateItemAttributeValue_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput, bool CallFunc_IsFriend_bIsFriend, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput_1, bool CallFunc_IsFriend_bIsFriend_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetAbilityDamage_Damage, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_Add_Value_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAttackBaseNew_C", "ApplyDamageToTarget");

	Params::UGA_CreatureAttackBaseNew_C_ApplyDamageToTarget_Params Parms{};

	Parms.LAbilityDamage = LAbilityDamage;
	Parms.LEffectTags = LEffectTags;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_DynamicCast_AsAICompanion_Interface = K2Node_DynamicCast_AsAICompanion_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_StrengthTag_StrengthTag = CallFunc_StrengthTag_StrengthTag;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetOwnedGameplayTags_self_CastInput = CallFunc_GetOwnedGameplayTags_self_CastInput;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_ActorHasTag_ReturnValue_2 = CallFunc_ActorHasTag_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CalculateItemAttributeValue_ReturnValue = CallFunc_CalculateItemAttributeValue_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsFriend_self_CastInput = CallFunc_IsFriend_self_CastInput;
	Parms.CallFunc_IsFriend_bIsFriend = CallFunc_IsFriend_bIsFriend;
	Parms.CallFunc_IsFriend_self_CastInput_1 = CallFunc_IsFriend_self_CastInput_1;
	Parms.CallFunc_IsFriend_bIsFriend_1 = CallFunc_IsFriend_bIsFriend_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAbilityDamage_Damage = CallFunc_GetAbilityDamage_Damage;
	Parms.K2Node_DynamicCast_AsDamage_Event_Interface = K2Node_DynamicCast_AsDamage_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DamageActor_AggregatedDamageTags = CallFunc_DamageActor_AggregatedDamageTags;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_Value_ImplicitCast = CallFunc_Add_Value_ImplicitCast;
	Parms.CallFunc_DamageActor_BaseDamage_ImplicitCast = CallFunc_DamageActor_BaseDamage_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C.PlayPhysicalResponse
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_CreatureBase_C*          Striker                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          AllHits                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayEffectContextHandleLContext                                                         (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeNWXEffectContext_ReturnValue                        (None)
// TArray<struct FGameplayTag>        CallFunc_Keys_ReturnValue                                        (ReferenceParm)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromArray_ReturnValue           (None)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UGA_CreatureAttackBaseNew_C::PlayPhysicalResponse(class ABP_CreatureBase_C* Striker, TArray<struct FHitResult>& AllHits, const struct FGameplayEffectContextHandle& LContext, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeNWXEffectContext_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Keys_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAttackBaseNew_C", "PlayPhysicalResponse");

	Params::UGA_CreatureAttackBaseNew_C_PlayPhysicalResponse_Params Parms{};

	Parms.Striker = Striker;
	Parms.AllHits = AllHits;
	Parms.LContext = LContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeNWXEffectContext_ReturnValue = CallFunc_MakeNWXEffectContext_ReturnValue;
	Parms.CallFunc_Keys_ReturnValue = CallFunc_Keys_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromArray_ReturnValue = CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_CreatureAttackBaseNew_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAttackBaseNew_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_CreatureAttackBaseNew_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAttackBaseNew.GA_CreatureAttackBaseNew_C.ExecuteUbergraph_GA_CreatureAttackBaseNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// class UANS_CreatureConeTrace_C*    K2Node_DynamicCast_AsANS_Creature_Cone_Trace                     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UANS_CreatureBeamTrace_C*    K2Node_DynamicCast_AsANS_Creature_Beam_Trace                     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UANS_KnightSocketTrace_C*    K2Node_DynamicCast_AsANS_Knight_Socket_Trace                     (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UANS_CreatureSocketTrace_C*  K2Node_DynamicCast_AsANS_Creature_Socket_Trace                   (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MeleeTag_MeleeTag                                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_GetAllHitResultsFromTargetData_ReturnValue              (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue   (None)
// struct FGameplayTag                CallFunc_MeleeTag_MeleeTag_1                                     (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_End                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags                (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_IsBlockable                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_End_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_1                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_1             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Beam_Length                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_Data_Use_Target                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Tracking_Rate                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_2                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_2             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_Start_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTraceData_Override_Data_Socket_End_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetTraceData_Override_Data_Radius_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetTraceData_Override_Data_Attack_Tag_3                 (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3              (None)
// struct FS_CreatureKnockbackData    CallFunc_GetTraceData_Override_Data_Knockback_Data_3             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetTraceData_Override_IsBlockable_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAttackBaseNew_C::ExecuteUbergraph_GA_CreatureAttackBaseNew(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, const struct FHitResult& CallFunc_Array_Get_Item, const struct FGameplayEventData& K2Node_Event_EventData, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, class UANS_CreatureConeTrace_C* K2Node_DynamicCast_AsANS_Creature_Cone_Trace, bool K2Node_DynamicCast_bSuccess, class UANS_CreatureBeamTrace_C* K2Node_DynamicCast_AsANS_Creature_Beam_Trace, bool K2Node_DynamicCast_bSuccess_1, class UANS_KnightSocketTrace_C* K2Node_DynamicCast_AsANS_Knight_Socket_Trace, bool K2Node_DynamicCast_bSuccess_2, class UANS_CreatureSocketTrace_C* K2Node_DynamicCast_AsANS_Creature_Socket_Trace, bool K2Node_DynamicCast_bSuccess_3, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable_1, const struct FGameplayTag& CallFunc_MeleeTag_MeleeTag, bool CallFunc_Array_IsEmpty_ReturnValue, TArray<struct FHitResult>& CallFunc_GetAllHitResultsFromTargetData_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue, const struct FGameplayTag& CallFunc_MeleeTag_MeleeTag_1, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, class FName CallFunc_GetTraceData_Override_Data_Socket_End, double CallFunc_GetTraceData_Override_Data_Radius, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, bool CallFunc_GetTraceData_Override_IsBlockable, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_1, class FName CallFunc_GetTraceData_Override_Data_Socket_End_1, double CallFunc_GetTraceData_Override_Data_Radius_1, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_1, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_1, const struct FGameplayTag& K2Node_Select_Default, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_2, double CallFunc_GetTraceData_Override_Data_Beam_Length, double CallFunc_GetTraceData_Override_Data_Radius_2, bool CallFunc_GetTraceData_Override_Data_Use_Target, double CallFunc_GetTraceData_Override_Data_Tracking_Rate, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_2, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_2, class FName CallFunc_GetTraceData_Override_Data_Socket_Start_3, class FName CallFunc_GetTraceData_Override_Data_Socket_End_2, double CallFunc_GetTraceData_Override_Data_Radius_3, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag_3, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data_3, bool CallFunc_GetTraceData_Override_IsBlockable_1, const struct FGameplayTag& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAttackBaseNew_C", "ExecuteUbergraph_GA_CreatureAttackBaseNew");

	Params::UGA_CreatureAttackBaseNew_C_ExecuteUbergraph_GA_CreatureAttackBaseNew_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_DynamicCast_AsANS_Creature_Cone_Trace = K2Node_DynamicCast_AsANS_Creature_Cone_Trace;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsANS_Creature_Beam_Trace = K2Node_DynamicCast_AsANS_Creature_Beam_Trace;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsANS_Knight_Socket_Trace = K2Node_DynamicCast_AsANS_Knight_Socket_Trace;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsANS_Creature_Socket_Trace = K2Node_DynamicCast_AsANS_Creature_Socket_Trace;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_MeleeTag_MeleeTag = CallFunc_MeleeTag_MeleeTag;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_GetAllHitResultsFromTargetData_ReturnValue = CallFunc_GetAllHitResultsFromTargetData_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue = CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue;
	Parms.CallFunc_MeleeTag_MeleeTag_1 = CallFunc_MeleeTag_MeleeTag_1;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start = CallFunc_GetTraceData_Override_Data_Socket_Start;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_End = CallFunc_GetTraceData_Override_Data_Socket_End;
	Parms.CallFunc_GetTraceData_Override_Data_Radius = CallFunc_GetTraceData_Override_Data_Radius;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag = CallFunc_GetTraceData_Override_Data_Attack_Tag;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags = CallFunc_GetTraceData_Override_Data_Gameplay_Tags;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data = CallFunc_GetTraceData_Override_Data_Knockback_Data;
	Parms.CallFunc_GetTraceData_Override_IsBlockable = CallFunc_GetTraceData_Override_IsBlockable;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_1 = CallFunc_GetTraceData_Override_Data_Socket_Start_1;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_End_1 = CallFunc_GetTraceData_Override_Data_Socket_End_1;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_1 = CallFunc_GetTraceData_Override_Data_Radius_1;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_1 = CallFunc_GetTraceData_Override_Data_Attack_Tag_1;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_1;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_1 = CallFunc_GetTraceData_Override_Data_Knockback_Data_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_2 = CallFunc_GetTraceData_Override_Data_Socket_Start_2;
	Parms.CallFunc_GetTraceData_Override_Data_Beam_Length = CallFunc_GetTraceData_Override_Data_Beam_Length;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_2 = CallFunc_GetTraceData_Override_Data_Radius_2;
	Parms.CallFunc_GetTraceData_Override_Data_Use_Target = CallFunc_GetTraceData_Override_Data_Use_Target;
	Parms.CallFunc_GetTraceData_Override_Data_Tracking_Rate = CallFunc_GetTraceData_Override_Data_Tracking_Rate;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_2 = CallFunc_GetTraceData_Override_Data_Attack_Tag_2;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_2;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_2 = CallFunc_GetTraceData_Override_Data_Knockback_Data_2;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_Start_3 = CallFunc_GetTraceData_Override_Data_Socket_Start_3;
	Parms.CallFunc_GetTraceData_Override_Data_Socket_End_2 = CallFunc_GetTraceData_Override_Data_Socket_End_2;
	Parms.CallFunc_GetTraceData_Override_Data_Radius_3 = CallFunc_GetTraceData_Override_Data_Radius_3;
	Parms.CallFunc_GetTraceData_Override_Data_Attack_Tag_3 = CallFunc_GetTraceData_Override_Data_Attack_Tag_3;
	Parms.CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3 = CallFunc_GetTraceData_Override_Data_Gameplay_Tags_3;
	Parms.CallFunc_GetTraceData_Override_Data_Knockback_Data_3 = CallFunc_GetTraceData_Override_Data_Knockback_Data_3;
	Parms.CallFunc_GetTraceData_Override_IsBlockable_1 = CallFunc_GetTraceData_Override_IsBlockable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


