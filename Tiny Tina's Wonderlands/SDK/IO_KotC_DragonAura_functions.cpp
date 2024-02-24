#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IO_KotC_DragonAura.IO_KotC_DragonAura_C
// (Actor)

class UClass* AIO_KotC_DragonAura_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IO_KotC_DragonAura_C");

	return Clss;
}


// IO_KotC_DragonAura_C IO_KotC_DragonAura.Default__IO_KotC_DragonAura_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AIO_KotC_DragonAura_C* AIO_KotC_DragonAura_C::GetDefaultObj()
{
	static class AIO_KotC_DragonAura_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AIO_KotC_DragonAura_C*>(AIO_KotC_DragonAura_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.ExternalRemoveDragonAuraTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DragonAuraTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveDragonAuraEffect_Res                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::ExternalRemoveDragonAuraTarget(class AActor* DragonAuraTarget, bool* Res, bool CallFunc_RemoveDragonAuraEffect_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "ExternalRemoveDragonAuraTarget");

	Params::AIO_KotC_DragonAura_C_ExternalRemoveDragonAuraTarget_Params Parms{};

	Parms.DragonAuraTarget = DragonAuraTarget;
	Parms.CallFunc_RemoveDragonAuraEffect_Res = CallFunc_RemoveDragonAuraEffect_Res;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.IsActorInMyDragonAura
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::IsActorInMyDragonAura(class AActor* Actor, bool* Res, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, bool CallFunc_LessEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "IsActorInMyDragonAura");

	Params::AIO_KotC_DragonAura_C_IsActorInMyDragonAura_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.ResetAuraDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::ResetAuraDuration(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "ResetAuraDuration");

	Params::AIO_KotC_DragonAura_C_ResetAuraDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.PlayAuraAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enter                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetAssociatedPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void AIO_KotC_DragonAura_C::PlayAuraAudio(class AActor* TargetPlayer, bool Enter, bool Temp_bool_Variable, class APawn* CallFunc_GetAssociatedPawn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, class UWwiseEvent* K2Node_Select_Default, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "PlayAuraAudio");

	Params::AIO_KotC_DragonAura_C_PlayAuraAudio_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Enter = Enter;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAssociatedPawn_ReturnValue = CallFunc_GetAssociatedPawn_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.SetGroundDecalState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::SetGroundDecalState(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "SetGroundDecalState");

	Params::AIO_KotC_DragonAura_C_SetGroundDecalState_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.GetAuraGrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      Ability                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasGrade                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAbility_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_FindAbility_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPassive_Parent_C>K2Node_DynamicCast_AsIPassive_Parent                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSkillGrade_Res                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::GetAuraGrade(class UClass* Ability, bool* HasGrade, int32* Res, class AActor* CallFunc_GetOwner_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_HasAbility_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetSkillGrade_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "GetAuraGrade");

	Params::AIO_KotC_DragonAura_C_GetAuraGrade_Params Parms{};

	Parms.Ability = Ability;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_HasAbility_ReturnValue = CallFunc_HasAbility_ReturnValue;
	Parms.CallFunc_FindAbility_ReturnValue = CallFunc_FindAbility_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPassive_Parent = K2Node_DynamicCast_AsIPassive_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSkillGrade_Res = CallFunc_GetSkillGrade_Res;

	UObject::ProcessEvent(Func, &Parms);

	if (HasGrade != nullptr)
		*HasGrade = Parms.HasGrade;

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.AddModifierToList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGbxAttributeModifierHandle NewModifier                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ModifierIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::AddModifierToList(struct FGbxAttributeModifierHandle& NewModifier, int32 Index, int32* ModifierIndex, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "AddModifierToList");

	Params::AIO_KotC_DragonAura_C_AddModifierToList_Params Parms{};

	Parms.NewModifier = NewModifier;
	Parms.Index = Index;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifierIndex != nullptr)
		*ModifierIndex = Parms.ModifierIndex;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.InitAuraAugments
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableValueHandle       Passive11_ScaleBonus                                             (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_GetAuraGrade_HasGrade                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAuraGrade_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAuraGrade_HasGrade1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAuraGrade_Res1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::InitAuraAugments(const struct FDataTableValueHandle& Passive11_ScaleBonus, bool CallFunc_GetAuraGrade_HasGrade, int32 CallFunc_GetAuraGrade_Res, bool CallFunc_GetAuraGrade_HasGrade1, int32 CallFunc_GetAuraGrade_Res1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "InitAuraAugments");

	Params::AIO_KotC_DragonAura_C_InitAuraAugments_Params Parms{};

	Parms.Passive11_ScaleBonus = Passive11_ScaleBonus;
	Parms.CallFunc_GetAuraGrade_HasGrade = CallFunc_GetAuraGrade_HasGrade;
	Parms.CallFunc_GetAuraGrade_Res = CallFunc_GetAuraGrade_Res;
	Parms.CallFunc_GetAuraGrade_HasGrade1 = CallFunc_GetAuraGrade_HasGrade1;
	Parms.CallFunc_GetAuraGrade_Res1 = CallFunc_GetAuraGrade_Res1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.RemvoeAllDragonAuraTargets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemvoeAllDragonAuraTargets_Res                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveDragonAuraEffect_Res                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::RemvoeAllDragonAuraTargets(bool* Res, bool CallFunc_RemvoeAllDragonAuraTargets_Res, class AActor* CallFunc_Array_Get_Item, bool CallFunc_RemoveDragonAuraEffect_Res, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "RemvoeAllDragonAuraTargets");

	Params::AIO_KotC_DragonAura_C_RemvoeAllDragonAuraTargets_Params Parms{};

	Parms.CallFunc_RemvoeAllDragonAuraTargets_Res = CallFunc_RemvoeAllDragonAuraTargets_Res;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_RemoveDragonAuraEffect_Res = CallFunc_RemoveDragonAuraEffect_Res;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.RemoveDragonAuraEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DragonAuraTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UnregisterDragonAuraStatusEffect_Res                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_DragonAuraModifiers CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::RemoveDragonAuraEffect(class AActor* DragonAuraTarget, bool* Res, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_UnregisterDragonAuraStatusEffect_Res, bool CallFunc_Not_PreBool_ReturnValue, const struct FStruct_DragonAuraModifiers& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "RemoveDragonAuraEffect");

	Params::AIO_KotC_DragonAura_C_RemoveDragonAuraEffect_Params Parms{};

	Parms.DragonAuraTarget = DragonAuraTarget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_UnregisterDragonAuraStatusEffect_Res = CallFunc_UnregisterDragonAuraStatusEffect_Res;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.AddDragonAuraEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DragonAuraTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LocalIndex                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LocalTarget                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAttributeModifierHandle CallFunc_RegisterDragonAuraCDM_AttributeHandle                   (None)
// bool                               CallFunc_RegisterDragonAuraCDM_Res                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierToList_ModifierIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_KnightOfTheClaw_C>K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGbxAttributeModifierHandle CallFunc_RegisterDragonAuraStatusEffect_AttributeHandle          (None)
// bool                               CallFunc_RegisterDragonAuraStatusEffect_Res                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FGbxAttributeModifierHandle>K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_AddModifierToList_ModifierIndex1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DragonAuraModifiers K2Node_MakeStruct_Struct_DragonAuraModifiers                     (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::AddDragonAuraEffect(class AActor* DragonAuraTarget, bool* Res, int32 LocalIndex, class AActor* LocalTarget, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess, const struct FGbxAttributeModifierHandle& CallFunc_RegisterDragonAuraCDM_AttributeHandle, bool CallFunc_RegisterDragonAuraCDM_Res, int32 CallFunc_AddModifierToList_ModifierIndex, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1, bool K2Node_DynamicCast_bSuccess1, const struct FGbxAttributeModifierHandle& CallFunc_RegisterDragonAuraStatusEffect_AttributeHandle, bool CallFunc_RegisterDragonAuraStatusEffect_Res, bool CallFunc_NotEqual_ObjectObject_ReturnValue, TArray<struct FGbxAttributeModifierHandle>& K2Node_MakeArray_Array, int32 CallFunc_AddModifierToList_ModifierIndex1, const struct FStruct_DragonAuraModifiers& K2Node_MakeStruct_Struct_DragonAuraModifiers, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "AddDragonAuraEffect");

	Params::AIO_KotC_DragonAura_C_AddDragonAuraEffect_Params Parms{};

	Parms.DragonAuraTarget = DragonAuraTarget;
	Parms.LocalIndex = LocalIndex;
	Parms.LocalTarget = LocalTarget;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RegisterDragonAuraCDM_AttributeHandle = CallFunc_RegisterDragonAuraCDM_AttributeHandle;
	Parms.CallFunc_RegisterDragonAuraCDM_Res = CallFunc_RegisterDragonAuraCDM_Res;
	Parms.CallFunc_AddModifierToList_ModifierIndex = CallFunc_AddModifierToList_ModifierIndex;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1 = K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_RegisterDragonAuraStatusEffect_AttributeHandle = CallFunc_RegisterDragonAuraStatusEffect_AttributeHandle;
	Parms.CallFunc_RegisterDragonAuraStatusEffect_Res = CallFunc_RegisterDragonAuraStatusEffect_Res;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_AddModifierToList_ModifierIndex1 = CallFunc_AddModifierToList_ModifierIndex1;
	Parms.K2Node_MakeStruct_Struct_DragonAuraModifiers = K2Node_MakeStruct_Struct_DragonAuraModifiers;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue1 = CallFunc_Array_Add_ReturnValue1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.OnRep_DragonAuraState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::OnRep_DragonAuraState(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "OnRep_DragonAuraState");

	Params::AIO_KotC_DragonAura_C_OnRep_DragonAuraState_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.SetDragonAuraState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKotCDragonAuraStates   State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::SetDragonAuraState(enum class EKotCDragonAuraStates State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "SetDragonAuraState");

	Params::AIO_KotC_DragonAura_C_SetDragonAuraState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.DespawnDragonAura
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::DespawnDragonAura()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "DespawnDragonAura");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.OnStateSpawning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::OnStateSpawning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "OnStateSpawning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.OnStateActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::OnStateActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "OnStateActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.OnStateDespawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::OnStateDespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "OnStateDespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura
// (BlueprintEvent)
// Parameters:
// class AActor*                      TouchingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             ComponentTouched                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura");

	Params::AIO_KotC_DragonAura_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura_Params Parms{};

	Parms.TouchingActor = TouchingActor;
	Parms.bIsPlayer = bIsPlayer;
	Parms.ComponentTouched = ComponentTouched;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura
// (BlueprintEvent)
// Parameters:
// class AActor*                      LeavingActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsPlayer                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura(class AActor* LeavingActor, bool bIsPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura");

	Params::AIO_KotC_DragonAura_C_BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_IO_KotC_DragonAura_Params Parms{};

	Parms.LeavingActor = LeavingActor;
	Parms.bIsPlayer = bIsPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.RefreshAugments
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::RefreshAugments()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "RefreshAugments");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.DebugAura
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::DebugAura()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "DebugAura");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.DragonAuraRefreshAllValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::DragonAuraRefreshAllValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "DragonAuraRefreshAllValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.DraggonAura_OnDownStateStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AIO_KotC_DragonAura_C::DraggonAura_OnDownStateStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "DraggonAura_OnDownStateStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.Audio_Rep_Aura
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enter                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIO_KotC_DragonAura_C::Audio_Rep_Aura(class AActor* TargetPlayer, bool Enter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "Audio_Rep_Aura");

	Params::AIO_KotC_DragonAura_C_Audio_Rep_Aura_Params Parms{};

	Parms.TargetPlayer = TargetPlayer;
	Parms.Enter = Enter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.OnOwnerDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::OnOwnerDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "OnOwnerDestroyed");

	Params::AIO_KotC_DragonAura_C_OnOwnerDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.DebugAura_Added
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::DebugAura_Added(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "DebugAura_Added");

	Params::AIO_KotC_DragonAura_C_DebugAura_Added_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.DebugAura_Removed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::DebugAura_Removed(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "DebugAura_Removed");

	Params::AIO_KotC_DragonAura_C_DebugAura_Removed_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IO_KotC_DragonAura.IO_KotC_DragonAura_C.ExecuteUbergraph_IO_KotC_DragonAura
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      Temp_string_Variable1                                            (ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateAttributeInitializer_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_TouchingActor                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsPlayer1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             K2Node_ComponentBoundEvent_ComponentTouched                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_LeavingActor                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsPlayer                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveDragonAuraEffect_Res                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddDragonAuraEffect_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemvoeAllDragonAuraTargets_Res                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateAttributeInitializer_ReturnValue1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue2                              (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddDragonAuraEffect_Res1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemvoeAllDragonAuraTargets_Res1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue3                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue4                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select2_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue5                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_AddDragonAuraEffect_Res2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue6                              (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPFightForYourLifeComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPFightForYourLifeComponent_C*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue7                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_TargetPlayer                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enter                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Target1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue8                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue9                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue10                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue11                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select3_Default                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue12                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue13                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue14                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue15                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue16                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue17                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue18                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue19                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue20                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue21                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue22                             (ZeroConstructor, HasGetValueTypeHash)

void AIO_KotC_DragonAura_C::ExecuteUbergraph_IO_KotC_DragonAura(int32 EntryPoint, bool Temp_bool_Variable, const class FString& Temp_string_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& Temp_string_Variable1, class UObject* K2Node_Select_Default, float CallFunc_EvaluateAttributeInitializer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, bool Temp_bool_Variable1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer1, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, class AActor* K2Node_ComponentBoundEvent_LeavingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, bool CallFunc_RemoveDragonAuraEffect_Res, bool CallFunc_AddDragonAuraEffect_Res, bool CallFunc_RemvoeAllDragonAuraTargets_Res, bool Temp_bool_Variable2, class UObject* K2Node_Select1_Default, float CallFunc_EvaluateAttributeInitializer_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const class FString& CallFunc_Conv_FloatToString_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_AddDragonAuraEffect_Res1, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue1, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance1, bool K2Node_DynamicCast_bSuccess1, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue2, float CallFunc_GetValueOfAttribute_ReturnValue1, bool CallFunc_RemvoeAllDragonAuraTargets_Res1, bool CallFunc_Greater_FloatFloat_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue1, const class FString& CallFunc_Conv_IntToString_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue4, const class FString& K2Node_Select2_Default, class AActor* CallFunc_GetOwner_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue5, bool CallFunc_AddDragonAuraEffect_Res2, const class FString& CallFunc_Concat_StrStr_ReturnValue6, class AActor* CallFunc_GetOwner_ReturnValue4, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class AActor* CallFunc_GetOwner_ReturnValue5, class UBPFightForYourLifeComponent_C* CallFunc_GetComponentByClass_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue7, bool K2Node_SwitchEnum_CmpSuccess, class AActor* K2Node_CustomEvent_TargetPlayer, bool K2Node_CustomEvent_Enter, class AActor* CallFunc_GetOwner_ReturnValue6, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class AActor* K2Node_CustomEvent_DestroyedActor, class AActor* K2Node_CustomEvent_Target1, class AActor* K2Node_CustomEvent_Target, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, const class FString& CallFunc_Concat_StrStr_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue9, const class FString& CallFunc_Concat_StrStr_ReturnValue10, const class FString& CallFunc_Concat_StrStr_ReturnValue11, bool Temp_bool_Variable3, const class FString& K2Node_Select3_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue12, const class FString& CallFunc_GetDisplayName_ReturnValue2, const class FString& CallFunc_Concat_StrStr_ReturnValue13, class AActor* CallFunc_GetOwner_ReturnValue7, const class FString& CallFunc_Concat_StrStr_ReturnValue14, const class FString& CallFunc_GetDisplayName_ReturnValue3, const class FString& CallFunc_Concat_StrStr_ReturnValue15, const class FString& CallFunc_Concat_StrStr_ReturnValue16, const class FString& CallFunc_GetDisplayName_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue17, class AActor* CallFunc_GetOwner_ReturnValue8, const class FString& CallFunc_Concat_StrStr_ReturnValue18, const class FString& CallFunc_GetDisplayName_ReturnValue5, const class FString& CallFunc_Concat_StrStr_ReturnValue19, bool Temp_bool_IsClosed_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue20, const class FString& CallFunc_Concat_StrStr_ReturnValue21, const class FString& CallFunc_Concat_StrStr_ReturnValue22)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IO_KotC_DragonAura_C", "ExecuteUbergraph_IO_KotC_DragonAura");

	Params::AIO_KotC_DragonAura_C_ExecuteUbergraph_IO_KotC_DragonAura_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_string_Variable1 = Temp_string_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EvaluateAttributeInitializer_ReturnValue = CallFunc_EvaluateAttributeInitializer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;
	Parms.K2Node_ComponentBoundEvent_TouchingActor = K2Node_ComponentBoundEvent_TouchingActor;
	Parms.K2Node_ComponentBoundEvent_bIsPlayer1 = K2Node_ComponentBoundEvent_bIsPlayer1;
	Parms.K2Node_ComponentBoundEvent_ComponentTouched = K2Node_ComponentBoundEvent_ComponentTouched;
	Parms.K2Node_ComponentBoundEvent_LeavingActor = K2Node_ComponentBoundEvent_LeavingActor;
	Parms.K2Node_ComponentBoundEvent_bIsPlayer = K2Node_ComponentBoundEvent_bIsPlayer;
	Parms.CallFunc_RemoveDragonAuraEffect_Res = CallFunc_RemoveDragonAuraEffect_Res;
	Parms.CallFunc_AddDragonAuraEffect_Res = CallFunc_AddDragonAuraEffect_Res;
	Parms.CallFunc_RemvoeAllDragonAuraTargets_Res = CallFunc_RemvoeAllDragonAuraTargets_Res;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_EvaluateAttributeInitializer_ReturnValue1 = CallFunc_EvaluateAttributeInitializer_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue1 = CallFunc_Conv_FloatToString_ReturnValue1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue2 = CallFunc_Concat_StrStr_ReturnValue2;
	Parms.CallFunc_GetOwner_ReturnValue1 = CallFunc_GetOwner_ReturnValue1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_AddDragonAuraEffect_Res1 = CallFunc_AddDragonAuraEffect_Res1;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue1 = CallFunc_GetGameInstance_ReturnValue1;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance1 = K2Node_DynamicCast_AsOak_Game_Instance1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue2 = CallFunc_GetOwner_ReturnValue2;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue1 = CallFunc_GetValueOfAttribute_ReturnValue1;
	Parms.CallFunc_RemvoeAllDragonAuraTargets_Res1 = CallFunc_RemvoeAllDragonAuraTargets_Res1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue1 = CallFunc_Greater_FloatFloat_ReturnValue1;
	Parms.CallFunc_FTrunc_ReturnValue1 = CallFunc_FTrunc_ReturnValue1;
	Parms.CallFunc_Conv_IntToString_ReturnValue1 = CallFunc_Conv_IntToString_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue3 = CallFunc_Concat_StrStr_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue4 = CallFunc_Concat_StrStr_ReturnValue4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetOwner_ReturnValue3 = CallFunc_GetOwner_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue5 = CallFunc_Concat_StrStr_ReturnValue5;
	Parms.CallFunc_AddDragonAuraEffect_Res2 = CallFunc_AddDragonAuraEffect_Res2;
	Parms.CallFunc_Concat_StrStr_ReturnValue6 = CallFunc_Concat_StrStr_ReturnValue6;
	Parms.CallFunc_GetOwner_ReturnValue4 = CallFunc_GetOwner_ReturnValue4;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_GetOwner_ReturnValue5 = CallFunc_GetOwner_ReturnValue5;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue7 = CallFunc_Concat_StrStr_ReturnValue7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_TargetPlayer = K2Node_CustomEvent_TargetPlayer;
	Parms.K2Node_CustomEvent_Enter = K2Node_CustomEvent_Enter;
	Parms.CallFunc_GetOwner_ReturnValue6 = CallFunc_GetOwner_ReturnValue6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_CustomEvent_Target1 = K2Node_CustomEvent_Target1;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue1 = CallFunc_GetDisplayName_ReturnValue1;
	Parms.CallFunc_Concat_StrStr_ReturnValue8 = CallFunc_Concat_StrStr_ReturnValue8;
	Parms.CallFunc_Concat_StrStr_ReturnValue9 = CallFunc_Concat_StrStr_ReturnValue9;
	Parms.CallFunc_Concat_StrStr_ReturnValue10 = CallFunc_Concat_StrStr_ReturnValue10;
	Parms.CallFunc_Concat_StrStr_ReturnValue11 = CallFunc_Concat_StrStr_ReturnValue11;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue12 = CallFunc_Concat_StrStr_ReturnValue12;
	Parms.CallFunc_GetDisplayName_ReturnValue2 = CallFunc_GetDisplayName_ReturnValue2;
	Parms.CallFunc_Concat_StrStr_ReturnValue13 = CallFunc_Concat_StrStr_ReturnValue13;
	Parms.CallFunc_GetOwner_ReturnValue7 = CallFunc_GetOwner_ReturnValue7;
	Parms.CallFunc_Concat_StrStr_ReturnValue14 = CallFunc_Concat_StrStr_ReturnValue14;
	Parms.CallFunc_GetDisplayName_ReturnValue3 = CallFunc_GetDisplayName_ReturnValue3;
	Parms.CallFunc_Concat_StrStr_ReturnValue15 = CallFunc_Concat_StrStr_ReturnValue15;
	Parms.CallFunc_Concat_StrStr_ReturnValue16 = CallFunc_Concat_StrStr_ReturnValue16;
	Parms.CallFunc_GetDisplayName_ReturnValue4 = CallFunc_GetDisplayName_ReturnValue4;
	Parms.CallFunc_Concat_StrStr_ReturnValue17 = CallFunc_Concat_StrStr_ReturnValue17;
	Parms.CallFunc_GetOwner_ReturnValue8 = CallFunc_GetOwner_ReturnValue8;
	Parms.CallFunc_Concat_StrStr_ReturnValue18 = CallFunc_Concat_StrStr_ReturnValue18;
	Parms.CallFunc_GetDisplayName_ReturnValue5 = CallFunc_GetDisplayName_ReturnValue5;
	Parms.CallFunc_Concat_StrStr_ReturnValue19 = CallFunc_Concat_StrStr_ReturnValue19;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue20 = CallFunc_Concat_StrStr_ReturnValue20;
	Parms.CallFunc_Concat_StrStr_ReturnValue21 = CallFunc_Concat_StrStr_ReturnValue21;
	Parms.CallFunc_Concat_StrStr_ReturnValue22 = CallFunc_Concat_StrStr_ReturnValue22;

	UObject::ProcessEvent(Func, &Parms);

}

}


