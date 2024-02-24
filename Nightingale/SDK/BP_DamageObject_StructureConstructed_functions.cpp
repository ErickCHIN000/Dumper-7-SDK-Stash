#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C
// (None)

class UClass* UBP_DamageObject_StructureConstructed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageObject_StructureConstructed_C");

	return Clss;
}


// BP_DamageObject_StructureConstructed_C BP_DamageObject_StructureConstructed.Default__BP_DamageObject_StructureConstructed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DamageObject_StructureConstructed_C* UBP_DamageObject_StructureConstructed_C::GetDefaultObj()
{
	static class UBP_DamageObject_StructureConstructed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DamageObject_StructureConstructed_C*>(UBP_DamageObject_StructureConstructed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C.DropResource
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Resource                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_StructureConstructed_C::DropResource(class UObject* Structure, const struct FInventoryEntry& Resource, const struct FTransform& SpawnTransform, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_StructureConstructed_C", "DropResource");

	Params::UBP_DamageObject_StructureConstructed_C_DropResource_Params Parms{};

	Parms.Structure = Structure;
	Parms.Resource = Resource;
	Parms.SpawnTransform = SpawnTransform;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C.ApplyPerks
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     AbilitySystem                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_StructureConstructed_C::ApplyPerks(class AActor* DestructionSource, class UAbilitySystemComponent* AbilitySystem, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_StructureConstructed_C", "ApplyPerks");

	Params::UBP_DamageObject_StructureConstructed_C_ApplyPerks_Params Parms{};

	Parms.DestructionSource = DestructionSource;
	Parms.AbilitySystem = AbilitySystem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C.DropContainerResources
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  DropTransform                                                    (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetResourceDropTransform_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldIsTearingDown_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindOwnerActor_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetInventoryContainerInterface_ContainerInterface       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_StructureConstructed_C::DropContainerResources(class UObject* Structure, const struct FTransform& DropTransform, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetResourceDropTransform_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_GetWorldIsTearingDown_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_FindOwnerActor_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetInventoryContainerInterface_ContainerInterface, bool CallFunc_DoesImplementInterface_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_StructureConstructed_C", "DropContainerResources");

	Params::UBP_DamageObject_StructureConstructed_C_DropContainerResources_Params Parms{};

	Parms.Structure = Structure;
	Parms.DropTransform = DropTransform;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetResourceDropTransform_ReturnValue = CallFunc_GetResourceDropTransform_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_GetWorldIsTearingDown_ReturnValue = CallFunc_GetWorldIsTearingDown_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FindOwnerActor_ReturnValue = CallFunc_FindOwnerActor_ReturnValue;
	Parms.CallFunc_GetInventoryContainerInterface_ContainerInterface = CallFunc_GetInventoryContainerInterface_ContainerInterface;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C.DoStructureDestroy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_StructureConstructed_C::DoStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool* Success, bool CallFunc_IsStructureValid_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_StructureConstructed_C", "DoStructureDestroy");

	Params::UBP_DamageObject_StructureConstructed_C_DoStructureDestroy_Params Parms{};

	Parms.Structure = Structure;
	Parms.DestructionSource = DestructionSource;
	Parms.CallFunc_IsStructureValid_ReturnValue = CallFunc_IsStructureValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C.PreStructureDestroy
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetPlayerState_PlayerState                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DeconstructTag_DeconstructTag                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesStructureHaveTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_StructureConstructed_C::PreStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool CallFunc_IsStructureValid_ReturnValue, class ANWXPlayerState* CallFunc_GetPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTag& CallFunc_DeconstructTag_DeconstructTag, bool CallFunc_DoesStructureHaveTag_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_StructureConstructed_C", "PreStructureDestroy");

	Params::UBP_DamageObject_StructureConstructed_C_PreStructureDestroy_Params Parms{};

	Parms.Structure = Structure;
	Parms.DestructionSource = DestructionSource;
	Parms.CallFunc_IsStructureValid_ReturnValue = CallFunc_IsStructureValid_ReturnValue;
	Parms.CallFunc_GetPlayerState_PlayerState = CallFunc_GetPlayerState_PlayerState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DeconstructTag_DeconstructTag = CallFunc_DeconstructTag_DeconstructTag;
	Parms.CallFunc_DoesStructureHaveTag_ReturnValue = CallFunc_DoesStructureHaveTag_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DamageObject_StructureConstructed.BP_DamageObject_StructureConstructed_C.DropAllResources
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DeconstructionSource                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  DropTransform                                                    (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeconstructionResourceReturnResourceReturn                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LDeconstructionSource                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             ReturnPercentage                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ResourcesToGrant                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Resource                                                         (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     InputtedResources                                                (Edit, BlueprintVisible)
// bool                               DropAll                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeconstructionResourceReturnTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureOriginatorInterface>K2Node_DynamicCast_AsStructure_Originator_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetResourceDropTransform_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureOriginatorTypeCallFunc_GetStructureOriginatorType_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldIsTearingDown_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropNoneResourcesTag_DropNoneTag                        (NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActiveForObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropPartialResourcesTag_DropPartialTag                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActiveForObject_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetDroppableResources_DroppableResources                (ReferenceParm)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_DropAllResourcesTag_DropAllTag                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStateActiveForObject_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_StructureConstructed_C::DropAllResources(class UObject* Structure, class AActor* DeconstructionSource, const struct FTransform& DropTransform, enum class EDeconstructionResourceReturn ResourceReturn, class AActor* LDeconstructionSource, double ReturnPercentage, int32 ResourcesToGrant, const struct FInventoryEntry& Resource, const TArray<struct FInventoryEntry>& InputtedResources, bool DropAll, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double Temp_real_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double Temp_real_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, double Temp_real_Variable_2, enum class EDeconstructionResourceReturn Temp_byte_Variable, TScriptInterface<class IStructureOriginatorInterface> K2Node_DynamicCast_AsStructure_Originator_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetResourceDropTransform_ReturnValue, enum class EStructureOriginatorType CallFunc_GetStructureOriginatorType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_GetWorldIsTearingDown_ReturnValue, const struct FGameplayTag& CallFunc_DropNoneResourcesTag_DropNoneTag, double K2Node_Select_Default, bool CallFunc_IsStateActiveForObject_ReturnValue, const struct FGameplayTag& CallFunc_DropPartialResourcesTag_DropPartialTag, bool CallFunc_IsStateActiveForObject_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetDroppableResources_DroppableResources, int32 CallFunc_Round_ReturnValue, const struct FGameplayTag& CallFunc_DropAllResourcesTag_DropAllTag, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_IsStateActiveForObject_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_StructureConstructed_C", "DropAllResources");

	Params::UBP_DamageObject_StructureConstructed_C_DropAllResources_Params Parms{};

	Parms.Structure = Structure;
	Parms.DeconstructionSource = DeconstructionSource;
	Parms.DropTransform = DropTransform;
	Parms.ResourceReturn = ResourceReturn;
	Parms.LDeconstructionSource = LDeconstructionSource;
	Parms.ReturnPercentage = ReturnPercentage;
	Parms.ResourcesToGrant = ResourcesToGrant;
	Parms.Resource = Resource;
	Parms.InputtedResources = InputtedResources;
	Parms.DropAll = DropAll;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsStructure_Originator_Interface = K2Node_DynamicCast_AsStructure_Originator_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetResourceDropTransform_ReturnValue = CallFunc_GetResourceDropTransform_ReturnValue;
	Parms.CallFunc_GetStructureOriginatorType_ReturnValue = CallFunc_GetStructureOriginatorType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetWorldIsTearingDown_ReturnValue = CallFunc_GetWorldIsTearingDown_ReturnValue;
	Parms.CallFunc_DropNoneResourcesTag_DropNoneTag = CallFunc_DropNoneResourcesTag_DropNoneTag;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsStateActiveForObject_ReturnValue = CallFunc_IsStateActiveForObject_ReturnValue;
	Parms.CallFunc_DropPartialResourcesTag_DropPartialTag = CallFunc_DropPartialResourcesTag_DropPartialTag;
	Parms.CallFunc_IsStateActiveForObject_ReturnValue_1 = CallFunc_IsStateActiveForObject_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetDroppableResources_DroppableResources = CallFunc_GetDroppableResources_DroppableResources;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_DropAllResourcesTag_DropAllTag = CallFunc_DropAllResourcesTag_DropAllTag;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_IsStateActiveForObject_ReturnValue_2 = CallFunc_IsStateActiveForObject_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


