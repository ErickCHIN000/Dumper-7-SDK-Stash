#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_NPCFreelance_ResourceCacheDeposit.AIA_Creature_NPCFreelance_ResourceCacheDeposit_C
// (None)

class UClass* UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_NPCFreelance_ResourceCacheDeposit_C");

	return Clss;
}


// AIA_Creature_NPCFreelance_ResourceCacheDeposit_C AIA_Creature_NPCFreelance_ResourceCacheDeposit.Default__AIA_Creature_NPCFreelance_ResourceCacheDeposit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C* UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C::GetDefaultObj()
{
	static class UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C*>(UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_NPCFreelance_ResourceCacheDeposit.AIA_Creature_NPCFreelance_ResourceCacheDeposit_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAILoadoutComponentBase*     LLoadout                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TargetInventoryEntryCooldown_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyResource_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAILoadoutComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckOwnerRequirements_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C::CheckOwnerRequirements(class UAILoadoutComponentBase* LLoadout, bool CallFunc_TargetInventoryEntryCooldown_ReturnValue, bool CallFunc_HasAnyResource_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAILoadoutComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CheckOwnerRequirements_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCFreelance_ResourceCacheDeposit_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C_CheckOwnerRequirements_Params Parms{};

	Parms.LLoadout = LLoadout;
	Parms.CallFunc_TargetInventoryEntryCooldown_ReturnValue = CallFunc_TargetInventoryEntryCooldown_ReturnValue;
	Parms.CallFunc_HasAnyResource_ReturnValue = CallFunc_HasAnyResource_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_CheckOwnerRequirements_ReturnValue = CallFunc_CheckOwnerRequirements_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPCFreelance_ResourceCacheDeposit.AIA_Creature_NPCFreelance_ResourceCacheDeposit_C.CheckTargetRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*TEMPInventory                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     TEMPItems                                                        (Edit, BlueprintVisible)
// class UAILoadoutComponentBase*     TEMPLoadout                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UInWorldItemContainerComponent*>TEMPContainerList                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// TScriptInterface<class IItemContainer>LInventory                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*LAIInventory                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LTarget                                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckTargetRequirements_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetAllItems_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class UInWorldItemContainerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_CanAddAnyItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCompanionSearchParameters_SearchLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCompanionSearchParameters_SearchRadius               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_B_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C::CheckTargetRequirements(class AActor* Target, class UInWorldItemContainerComponent* TEMPInventory, const TArray<struct FInventoryEntry>& TEMPItems, class UAILoadoutComponentBase* TEMPLoadout, const TArray<class UInWorldItemContainerComponent*>& TEMPContainerList, TScriptInterface<class IItemContainer> LInventory, class UInWorldItemContainerComponent* LAIInventory, class AActor* LTarget, bool CallFunc_CheckTargetRequirements_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class UInWorldItemContainerComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, bool CallFunc_CanAddAnyItem_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetCompanionSearchParameters_SearchLocation, float CallFunc_GetCompanionSearchParameters_SearchRadius, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, float CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCFreelance_ResourceCacheDeposit_C", "CheckTargetRequirements");

	Params::UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C_CheckTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.TEMPInventory = TEMPInventory;
	Parms.TEMPItems = TEMPItems;
	Parms.TEMPLoadout = TEMPLoadout;
	Parms.TEMPContainerList = TEMPContainerList;
	Parms.LInventory = LInventory;
	Parms.LAIInventory = LAIInventory;
	Parms.LTarget = LTarget;
	Parms.CallFunc_CheckTargetRequirements_ReturnValue = CallFunc_CheckTargetRequirements_ReturnValue;
	Parms.CallFunc_GetAllItems_self_CastInput = CallFunc_GetAllItems_self_CastInput;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.CallFunc_CanAddAnyItem_ReturnValue = CallFunc_CanAddAnyItem_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetCompanionSearchParameters_SearchLocation = CallFunc_GetCompanionSearchParameters_SearchLocation;
	Parms.CallFunc_GetCompanionSearchParameters_SearchRadius = CallFunc_GetCompanionSearchParameters_SearchRadius;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast = CallFunc_GetCompanionSearchParameters_DesiredSearchRadius_ImplicitCast;
	Parms.CallFunc_LessEqual_DoubleDouble_B_ImplicitCast = CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPCFreelance_ResourceCacheDeposit.AIA_Creature_NPCFreelance_ResourceCacheDeposit_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwnerPawn_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetNormalizedDistanceScore_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C::GetNormalizedScore(class AActor* Target, class APawn* CallFunc_GetOwnerPawn_ReturnValue, double CallFunc_GetNormalizedDistanceScore_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCFreelance_ResourceCacheDeposit_C", "GetNormalizedScore");

	Params::UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_GetOwnerPawn_ReturnValue = CallFunc_GetOwnerPawn_ReturnValue;
	Parms.CallFunc_GetNormalizedDistanceScore_ReturnValue = CallFunc_GetNormalizedDistanceScore_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_NPCFreelance_ResourceCacheDeposit.AIA_Creature_NPCFreelance_ResourceCacheDeposit_C.CheckStaticTargetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetInventoryContainerInterface_ContainerInterface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlayerOwnershipInterface>K2Node_DynamicCast_AsPlayer_Ownership_Interface                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPermissionActive_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

bool UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C::CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, TScriptInterface<class IPlayerOwnershipInterface> K2Node_DynamicCast_AsPlayer_Ownership_Interface, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsPermissionActive_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_NPCFreelance_ResourceCacheDeposit_C", "CheckStaticTargetRequirements");

	Params::UAIA_Creature_NPCFreelance_ResourceCacheDeposit_C_CheckStaticTargetRequirements_Params Parms{};

	Parms.Target = Target;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryContainerInterface_ContainerInterface = CallFunc_GetInventoryContainerInterface_ContainerInterface;
	Parms.K2Node_DynamicCast_AsPlayer_Ownership_Interface = K2Node_DynamicCast_AsPlayer_Ownership_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsPermissionActive_ReturnValue = CallFunc_IsPermissionActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


