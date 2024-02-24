#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DamageObject_CompositePiece.BP_DamageObject_CompositePiece_C
// (None)

class UClass* UBP_DamageObject_CompositePiece_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DamageObject_CompositePiece_C");

	return Clss;
}


// BP_DamageObject_CompositePiece_C BP_DamageObject_CompositePiece.Default__BP_DamageObject_CompositePiece_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DamageObject_CompositePiece_C* UBP_DamageObject_CompositePiece_C::GetDefaultObj()
{
	static class UBP_DamageObject_CompositePiece_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DamageObject_CompositePiece_C*>(UBP_DamageObject_CompositePiece_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DamageObject_CompositePiece.BP_DamageObject_CompositePiece_C.Apply Perks
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      DesctructionSource                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     Ability_System                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_CompositePiece_C::Apply_Perks(class AActor* DesctructionSource, class UAbilitySystemComponent* Ability_System, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_CompositePiece_C", "Apply Perks");

	Params::UBP_DamageObject_CompositePiece_C_Apply_Perks_Params Parms{};

	Parms.DesctructionSource = DesctructionSource;
	Parms.Ability_System = Ability_System;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DamageObject_CompositePiece.BP_DamageObject_CompositePiece_C.DropResource
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Resource                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositeComponent*OwningStructureCompositeComp                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCompositePieceResourceDropContextK2Node_MakeStruct_CompositePieceResourceDropContext              (None)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositeComponent*CallFunc_GetCompositeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValidForUse_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_CompositePiece_C::DropResource(class UObject* Structure, const struct FInventoryEntry& Resource, const struct FTransform& SpawnTransform, class UStructureCompositeComponent* OwningStructureCompositeComp, const struct FCompositePieceResourceDropContext& K2Node_MakeStruct_CompositePieceResourceDropContext, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class UStructureCompositeComponent* CallFunc_GetCompositeComponent_ReturnValue, bool CallFunc_IsStructureValidForUse_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_CompositePiece_C", "DropResource");

	Params::UBP_DamageObject_CompositePiece_C_DropResource_Params Parms{};

	Parms.Structure = Structure;
	Parms.Resource = Resource;
	Parms.SpawnTransform = SpawnTransform;
	Parms.OwningStructureCompositeComp = OwningStructureCompositeComp;
	Parms.K2Node_MakeStruct_CompositePieceResourceDropContext = K2Node_MakeStruct_CompositePieceResourceDropContext;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_GetCompositeComponent_ReturnValue = CallFunc_GetCompositeComponent_ReturnValue;
	Parms.CallFunc_IsStructureValidForUse_ReturnValue = CallFunc_IsStructureValidForUse_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DamageObject_CompositePiece.BP_DamageObject_CompositePiece_C.DoStructureDestroy
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DestructionSource                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoStructureDestroy_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsStructureValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Structure_Composite_C*   K2Node_DynamicCast_AsBP_Structure_Composite                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_CompositePiece_C::DoStructureDestroy(class UObject* Structure, class AActor* DestructionSource, bool* Success, bool CallFunc_DoStructureDestroy_Success, bool CallFunc_IsStructureValid_ReturnValue, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_CompositePiece_C", "DoStructureDestroy");

	Params::UBP_DamageObject_CompositePiece_C_DoStructureDestroy_Params Parms{};

	Parms.Structure = Structure;
	Parms.DestructionSource = DestructionSource;
	Parms.CallFunc_DoStructureDestroy_Success = CallFunc_DoStructureDestroy_Success;
	Parms.CallFunc_IsStructureValid_ReturnValue = CallFunc_IsStructureValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.K2Node_DynamicCast_AsBP_Structure_Composite = K2Node_DynamicCast_AsBP_Structure_Composite;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BP_DamageObject_CompositePiece.BP_DamageObject_CompositePiece_C.GetDroppableResources
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     DroppableResources                                               (Parm, OutParm)
// class UObject*                     LStructure                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetDroppableResources_DroppableResources                (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_MovePieceResourcesToOwningStructure_OutUnusedResources  (ReferenceParm)
// bool                               CallFunc_MovePieceResourcesToOwningStructure_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DamageObject_CompositePiece_C::GetDroppableResources(class UObject* Structure, TArray<struct FInventoryEntry>* DroppableResources, class UObject* LStructure, TArray<struct FInventoryEntry>& CallFunc_GetDroppableResources_DroppableResources, TArray<struct FInventoryEntry>& CallFunc_MovePieceResourcesToOwningStructure_OutUnusedResources, bool CallFunc_MovePieceResourcesToOwningStructure_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DamageObject_CompositePiece_C", "GetDroppableResources");

	Params::UBP_DamageObject_CompositePiece_C_GetDroppableResources_Params Parms{};

	Parms.Structure = Structure;
	Parms.LStructure = LStructure;
	Parms.CallFunc_GetDroppableResources_DroppableResources = CallFunc_GetDroppableResources_DroppableResources;
	Parms.CallFunc_MovePieceResourcesToOwningStructure_OutUnusedResources = CallFunc_MovePieceResourcesToOwningStructure_OutUnusedResources;
	Parms.CallFunc_MovePieceResourcesToOwningStructure_ReturnValue = CallFunc_MovePieceResourcesToOwningStructure_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DroppableResources != nullptr)
		*DroppableResources = std::move(Parms.DroppableResources);

}

}


