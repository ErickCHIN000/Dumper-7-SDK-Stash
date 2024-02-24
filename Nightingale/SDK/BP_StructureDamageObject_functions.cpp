#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureDamageObject.BP_StructureDamageObject_C
// (None)

class UClass* UBP_StructureDamageObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureDamageObject_C");

	return Clss;
}


// BP_StructureDamageObject_C BP_StructureDamageObject.Default__BP_StructureDamageObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureDamageObject_C* UBP_StructureDamageObject_C::GetDefaultObj()
{
	static class UBP_StructureDamageObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureDamageObject_C*>(UBP_StructureDamageObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StructureDamageObject.BP_StructureDamageObject_C.DoStructureDestroy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureDamageObject_C::DoStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureDamageObject_C", "DoStructureDestroy");

	Params::UBP_StructureDamageObject_C_DoStructureDestroy_Params Parms{};

	Parms.Structure = Structure;
	Parms.DestructionSource = DestructionSource;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_StructureDamageObject.BP_StructureDamageObject_C.PreStructureDestroy
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureComponentOwner_C>K2Node_DynamicCast_AsBPI_Structure_Component_Owner               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetEventsObject_EventObject                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_StructureDamageObject_C::PreStructureDestroy(class UObject* Structure, class AActor* DestructionSource, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, class UStructureEventsObject* CallFunc_GetEventsObject_EventObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureDamageObject_C", "PreStructureDestroy");

	Params::UBP_StructureDamageObject_C_PreStructureDestroy_Params Parms{};

	Parms.Structure = Structure;
	Parms.DestructionSource = DestructionSource;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Component_Owner = K2Node_DynamicCast_AsBPI_Structure_Component_Owner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEventsObject_EventObject = CallFunc_GetEventsObject_EventObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureDamageObject.BP_StructureDamageObject_C.SetDeconstructState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EDeconstructionResourceReturnResourceReturn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropNoneResourcesTag_DropNoneTag                        (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropPartialResourcesTag_DropPartialTag                  (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropAllResourcesTag_DropAllTag                          (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropNoneResourcesTag_DropNoneTag_1                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropPartialResourcesTag_DropPartialTag_1                (NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeconstructionResourceReturnTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DeconstructTag_DeconstructTag                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropAllResourcesTag_DropAllTag_1                        (NoDestructor, HasGetValueTypeHash)

void UBP_StructureDamageObject_C::SetDeconstructState(class UObject* Structure, enum class EDeconstructionResourceReturn ResourceReturn, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& CallFunc_DropNoneResourcesTag_DropNoneTag, const struct FGameplayTag& CallFunc_DropPartialResourcesTag_DropPartialTag, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag, const struct FGameplayTag& CallFunc_DropNoneResourcesTag_DropNoneTag_1, const struct FGameplayTag& CallFunc_DropPartialResourcesTag_DropPartialTag_1, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4, bool K2Node_DynamicCast_bSuccess_4, enum class EDeconstructionResourceReturn Temp_byte_Variable, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& K2Node_Select_Default, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FGameplayTag& CallFunc_DeconstructTag_DeconstructTag, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureDamageObject_C", "SetDeconstructState");

	Params::UBP_StructureDamageObject_C_SetDeconstructState_Params Parms{};

	Parms.Structure = Structure;
	Parms.ResourceReturn = ResourceReturn;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DropNoneResourcesTag_DropNoneTag = CallFunc_DropNoneResourcesTag_DropNoneTag;
	Parms.CallFunc_DropPartialResourcesTag_DropPartialTag = CallFunc_DropPartialResourcesTag_DropPartialTag;
	Parms.CallFunc_DropAllResourcesTag_DropAllTag = CallFunc_DropAllResourcesTag_DropAllTag;
	Parms.CallFunc_DropNoneResourcesTag_DropNoneTag_1 = CallFunc_DropNoneResourcesTag_DropNoneTag_1;
	Parms.CallFunc_DropPartialResourcesTag_DropPartialTag_1 = CallFunc_DropPartialResourcesTag_DropPartialTag_1;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4 = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_DeconstructTag_DeconstructTag = CallFunc_DeconstructTag_DeconstructTag;
	Parms.CallFunc_DropAllResourcesTag_DropAllTag_1 = CallFunc_DropAllResourcesTag_DropAllTag_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StructureDamageObject.BP_StructureDamageObject_C.DestroyStructure
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValidForUse_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoStructureDestroy_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C>K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureDamageObject_C::DestroyStructure(class UObject* Structure, class AActor* DestructionSource, bool* bSuccess, bool CallFunc_IsStructureValidForUse_ReturnValue, bool CallFunc_DoStructureDestroy_Success, TScriptInterface<class IBPI_StructureGameplayAbilitySystem_C> K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureDamageObject_C", "DestroyStructure");

	Params::UBP_StructureDamageObject_C_DestroyStructure_Params Parms{};

	Parms.Structure = Structure;
	Parms.DestructionSource = DestructionSource;
	Parms.CallFunc_IsStructureValidForUse_ReturnValue = CallFunc_IsStructureValidForUse_ReturnValue;
	Parms.CallFunc_DoStructureDestroy_Success = CallFunc_DoStructureDestroy_Success;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System = K2Node_DynamicCast_AsBPI_Structure_Gameplay_Ability_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function BP_StructureDamageObject.BP_StructureDamageObject_C.IsAtMinHealth
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureHealthInterface>K2Node_DynamicCast_AsStructure_Health_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureHealthInterface>K2Node_DynamicCast_AsStructure_Health_Interface_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentHealth_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMinHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_StructureDamageObject_C::IsAtMinHealth(class UObject* Structure, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureHealthInterface> K2Node_DynamicCast_AsStructure_Health_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCurrentHealth_ReturnValue, float CallFunc_GetMinHealth_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureDamageObject_C", "IsAtMinHealth");

	Params::UBP_StructureDamageObject_C_IsAtMinHealth_Params Parms{};

	Parms.Structure = Structure;
	Parms.K2Node_DynamicCast_AsStructure_Health_Interface = K2Node_DynamicCast_AsStructure_Health_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Health_Interface_1 = K2Node_DynamicCast_AsStructure_Health_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentHealth_ReturnValue = CallFunc_GetCurrentHealth_ReturnValue;
	Parms.CallFunc_GetMinHealth_ReturnValue = CallFunc_GetMinHealth_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StructureDamageObject.BP_StructureDamageObject_C.OnStructureDamageReceived
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       EffectTags                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FHitResult                  HitResult                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTagValueContainer          TagValueContainer                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              PieceId                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetPieceInfoFromStructureObject_OutOwner                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPieceInfoFromStructureObject_OutPieceId              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructureHealthChangedContextK2Node_MakeStruct_StructureHealthChangedContext                  (NoDestructor)
// TScriptInterface<class IBPI_StructureComponentOwner_C>K2Node_DynamicCast_AsBPI_Structure_Component_Owner               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsObjectHailDamageSource_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StructureComponentOwner_C>K2Node_DynamicCast_AsBPI_Structure_Component_Owner_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureDestroyableInterface>K2Node_DynamicCast_AsStructure_Destroyable_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ExecuteDestroyStructure_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// struct FStructureHealthChangedContextK2Node_MakeStruct_StructureHealthChangedContext_1                (NoDestructor)
// bool                               CallFunc_IsAtMinHealth_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_HealthDelta_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Telemetry_StructureDamagedEvent_Damage_ImplicitCast     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_HealthDelta_ImplicitCast_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_StructureDamageObject_C::OnStructureDamageReceived(class UObject* Structure, double Damage, class AActor* Target, class AActor* Source, const struct FGameplayTagContainer& EffectTags, const struct FHitResult& HitResult, const struct FTagValueContainer& TagValueContainer, int32 PieceId, class UObject* CallFunc_GetPieceInfoFromStructureObject_OutOwner, int32 CallFunc_GetPieceInfoFromStructureObject_OutPieceId, const struct FStructureHealthChangedContext& K2Node_MakeStruct_StructureHealthChangedContext, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsObjectHailDamageSource_ReturnValue, TScriptInterface<class IBPI_StructureComponentOwner_C> K2Node_DynamicCast_AsBPI_Structure_Component_Owner_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IStructureDestroyableInterface> K2Node_DynamicCast_AsStructure_Destroyable_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_ExecuteDestroyStructure_Success, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FStructureHealthChangedContext& K2Node_MakeStruct_StructureHealthChangedContext_1, bool CallFunc_IsAtMinHealth_ReturnValue, float K2Node_MakeStruct_HealthDelta_ImplicitCast, float CallFunc_Telemetry_StructureDamagedEvent_Damage_ImplicitCast, float K2Node_MakeStruct_HealthDelta_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StructureDamageObject_C", "OnStructureDamageReceived");

	Params::UBP_StructureDamageObject_C_OnStructureDamageReceived_Params Parms{};

	Parms.Structure = Structure;
	Parms.Damage = Damage;
	Parms.Target = Target;
	Parms.Source = Source;
	Parms.EffectTags = EffectTags;
	Parms.HitResult = HitResult;
	Parms.TagValueContainer = TagValueContainer;
	Parms.PieceId = PieceId;
	Parms.CallFunc_GetPieceInfoFromStructureObject_OutOwner = CallFunc_GetPieceInfoFromStructureObject_OutOwner;
	Parms.CallFunc_GetPieceInfoFromStructureObject_OutPieceId = CallFunc_GetPieceInfoFromStructureObject_OutPieceId;
	Parms.K2Node_MakeStruct_StructureHealthChangedContext = K2Node_MakeStruct_StructureHealthChangedContext;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Component_Owner = K2Node_DynamicCast_AsBPI_Structure_Component_Owner;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsObjectHailDamageSource_ReturnValue = CallFunc_IsObjectHailDamageSource_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Structure_Component_Owner_1 = K2Node_DynamicCast_AsBPI_Structure_Component_Owner_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsStructure_Destroyable_Interface = K2Node_DynamicCast_AsStructure_Destroyable_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_ExecuteDestroyStructure_Success = CallFunc_ExecuteDestroyStructure_Success;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
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
	Parms.K2Node_MakeStruct_StructureHealthChangedContext_1 = K2Node_MakeStruct_StructureHealthChangedContext_1;
	Parms.CallFunc_IsAtMinHealth_ReturnValue = CallFunc_IsAtMinHealth_ReturnValue;
	Parms.K2Node_MakeStruct_HealthDelta_ImplicitCast = K2Node_MakeStruct_HealthDelta_ImplicitCast;
	Parms.CallFunc_Telemetry_StructureDamagedEvent_Damage_ImplicitCast = CallFunc_Telemetry_StructureDamagedEvent_Damage_ImplicitCast;
	Parms.K2Node_MakeStruct_HealthDelta_ImplicitCast_1 = K2Node_MakeStruct_HealthDelta_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


