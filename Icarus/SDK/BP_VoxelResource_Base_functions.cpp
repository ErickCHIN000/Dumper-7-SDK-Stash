#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VoxelResource_Base.BP_VoxelResource_Base_C
// (Actor)

class UClass* ABP_VoxelResource_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VoxelResource_Base_C");

	return Clss;
}


// BP_VoxelResource_Base_C BP_VoxelResource_Base.Default__BP_VoxelResource_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VoxelResource_Base_C* ABP_VoxelResource_Base_C::GetDefaultObj()
{
	static class ABP_VoxelResource_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VoxelResource_Base_C*>(ABP_VoxelResource_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.PlayFullyMinedFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoxelSetupData             CallFunc_GetVoxelSetupDataStruct_VoxelSetupData                  (None)
// enum class EValid                  CallFunc_GetVoxelSetupDataStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VoxelResource_Base_C::PlayFullyMinedFX(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVoxelSetupData& CallFunc_GetVoxelSetupDataStruct_VoxelSetupData, enum class EValid CallFunc_GetVoxelSetupDataStruct_Paths, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "PlayFullyMinedFX");

	Params::ABP_VoxelResource_Base_C_PlayFullyMinedFX_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetVoxelSetupDataStruct_VoxelSetupData = CallFunc_GetVoxelSetupDataStruct_VoxelSetupData;
	Parms.CallFunc_GetVoxelSetupDataStruct_Paths = CallFunc_GetVoxelSetupDataStruct_Paths;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.GetResourceType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemTemplateRowHandle      ItemRow                                                          (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FVoxelSetupData             CallFunc_GetVoxelSetupDataStruct_VoxelSetupData                  (None)
// enum class EValid                  CallFunc_GetVoxelSetupDataStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VoxelResource_Base_C::GetResourceType(struct FItemTemplateRowHandle* ItemRow, const struct FVoxelSetupData& CallFunc_GetVoxelSetupDataStruct_VoxelSetupData, enum class EValid CallFunc_GetVoxelSetupDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "GetResourceType");

	Params::ABP_VoxelResource_Base_C_GetResourceType_Params Parms{};

	Parms.CallFunc_GetVoxelSetupDataStruct_VoxelSetupData = CallFunc_GetVoxelSetupDataStruct_VoxelSetupData;
	Parms.CallFunc_GetVoxelSetupDataStruct_Paths = CallFunc_GetVoxelSetupDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRow != nullptr)
		*ItemRow = std::move(Parms.ItemRow);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.SetResourceMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRowHandle                  NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        K2Node_DynamicCast_AsStatic_Mesh_Component                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VoxelResource_Base_C::SetResourceMaterial(class UMaterialInterface* Material, const struct FRowHandle& NewLocalVar_0, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue_1, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "SetResourceMaterial");

	Params::ABP_VoxelResource_Base_C_SetResourceMaterial_Params Parms{};

	Parms.Material = Material;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Component = K2Node_DynamicCast_AsStatic_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VoxelResource_Base_C::UserConstructionScript(int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "UserConstructionScript");

	Params::ABP_VoxelResource_Base_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UFLODActorComponent*         Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_VoxelResource_Base_C::BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature(class UFLODActorComponent* Component, class AActor* Actor, struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature");

	Params::ABP_VoxelResource_Base_C_BndEvt__FLODActorComponent_K2Node_ComponentBoundEvent_1_OnActorRevealing__DelegateSignature_Params Parms{};

	Parms.Component = Component;
	Parms.Actor = Actor;
	Parms.Transform = Transform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ConsumeHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIcarusDamagePacket         DamagePacket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ABP_VoxelResource_Base_C::ConsumeHit(const struct FIcarusDamagePacket& DamagePacket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "ConsumeHit");

	Params::ABP_VoxelResource_Base_C_ConsumeHit_Params Parms{};

	Parms.DamagePacket = DamagePacket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ResourcesMined
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              ResourceMinedCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     LastHitPlayerController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VoxelResource_Base_C::ResourcesMined(float ResourceMinedCount, class AIcarusPlayerController* LastHitPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "ResourcesMined");

	Params::ABP_VoxelResource_Base_C_ResourcesMined_Params Parms{};

	Parms.ResourceMinedCount = ResourceMinedCount;
	Parms.LastHitPlayerController = LastHitPlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ReInitVoxel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_VoxelResource_Base_C::ReInitVoxel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "ReInitVoxel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.OnVoxelCompleted
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_VoxelResource_Base_C::OnVoxelCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "OnVoxelCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.UpdateExperienceComponent
// (BlueprintAuthorityOnly, Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FItemTemplateRowHandle      ForResourceType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void ABP_VoxelResource_Base_C::UpdateExperienceComponent(struct FItemTemplateRowHandle& ForResourceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "UpdateExperienceComponent");

	Params::ABP_VoxelResource_Base_C_UpdateExperienceComponent_Params Parms{};

	Parms.ForResourceType = ForResourceType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VoxelResource_Base.BP_VoxelResource_Base_C.ExecuteUbergraph_BP_VoxelResource_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusDamagePacket         K2Node_CustomEvent_DamagePacket                                  (ContainsInstancedReference)
// float                              K2Node_Event_ResourceMinedCount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_Event_LastHitPlayerController                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVoxelSetupData             CallFunc_GetVoxelSetupDataStruct_VoxelSetupData                  (None)
// enum class EValid                  CallFunc_GetVoxelSetupDataStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFLODActorComponent*         K2Node_ComponentBoundEvent_Component                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_Actor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_ComponentBoundEvent_Transform                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_DynamicCast_AsPrimitive_Component                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMiningSubsystem*            CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrantExperienceToActorWithMultiplier_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTemplateRowHandle      K2Node_Event_ForResourceType                                     (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemTemplateRowHandleFItemTemplateRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_VoxelResource_Base_C::ExecuteUbergraph_BP_VoxelResource_Base(int32 EntryPoint, const struct FIcarusDamagePacket& K2Node_CustomEvent_DamagePacket, float K2Node_Event_ResourceMinedCount, class AIcarusPlayerController* K2Node_Event_LastHitPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVoxelSetupData& CallFunc_GetVoxelSetupDataStruct_VoxelSetupData, enum class EValid CallFunc_GetVoxelSetupDataStruct_Paths, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UFLODActorComponent* K2Node_ComponentBoundEvent_Component, class AActor* K2Node_ComponentBoundEvent_Actor, const struct FTransform& K2Node_ComponentBoundEvent_Transform, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class USceneComponent* CallFunc_Array_Get_Item, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, class UMiningSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, bool CallFunc_GrantExperienceToActorWithMultiplier_ReturnValue, const struct FItemTemplateRowHandle& K2Node_Event_ForResourceType, bool CallFunc_EqualEqual_FItemTemplateRowHandleFItemTemplateRowHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_VoxelResource_Base_C", "ExecuteUbergraph_BP_VoxelResource_Base");

	Params::ABP_VoxelResource_Base_C_ExecuteUbergraph_BP_VoxelResource_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_DamagePacket = K2Node_CustomEvent_DamagePacket;
	Parms.K2Node_Event_ResourceMinedCount = K2Node_Event_ResourceMinedCount;
	Parms.K2Node_Event_LastHitPlayerController = K2Node_Event_LastHitPlayerController;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetVoxelSetupDataStruct_VoxelSetupData = CallFunc_GetVoxelSetupDataStruct_VoxelSetupData;
	Parms.CallFunc_GetVoxelSetupDataStruct_Paths = CallFunc_GetVoxelSetupDataStruct_Paths;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_Component = K2Node_ComponentBoundEvent_Component;
	Parms.K2Node_ComponentBoundEvent_Actor = K2Node_ComponentBoundEvent_Actor;
	Parms.K2Node_ComponentBoundEvent_Transform = K2Node_ComponentBoundEvent_Transform;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsPrimitive_Component = K2Node_DynamicCast_AsPrimitive_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GrantExperienceToActorWithMultiplier_ReturnValue = CallFunc_GrantExperienceToActorWithMultiplier_ReturnValue;
	Parms.K2Node_Event_ForResourceType = K2Node_Event_ForResourceType;
	Parms.CallFunc_EqualEqual_FItemTemplateRowHandleFItemTemplateRowHandle_ReturnValue = CallFunc_EqualEqual_FItemTemplateRowHandleFItemTemplateRowHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


