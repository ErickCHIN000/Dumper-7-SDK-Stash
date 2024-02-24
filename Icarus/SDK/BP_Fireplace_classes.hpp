#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xA20 - 0x9D0)
// BlueprintGeneratedClass BP_Fireplace.BP_Fireplace_C
class ABP_Fireplace_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusSpotLight_C*                 BP_IcarusSpotLight;                                // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Fireplace_FX;                                   // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Niagara;                                     // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_InLeft;                                 // 0x9F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_MainBounce;                             // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight_InRight;                                // 0xA00(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene_Lights;                                      // 0xA08(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_DEP_Fireplace_Interior_SHA;                     // 0xA10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODAudioComponent*                   FMOD_Fire_Audio;                                   // 0xA18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fireplace_C* GetDefaultObj();

	void UpdateAttachedSmokeParticles(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class ADeployable*>& CallFunc_GetAttachedDeployableChildren_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_Fireplace_Chimney_Cap_Half_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap, bool K2Node_DynamicCast_bSuccess_1, class ABP_Fireplace_Chimney_Ext_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Ext, bool K2Node_DynamicCast_bSuccess_2, class ABP_DeployableBase_C* CallFunc_GetChildCap_ChildCap, class ABP_Fireplace_Chimney_Cap_Half_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_Half_1, bool K2Node_DynamicCast_bSuccess_3, class ABP_Fireplace_Chimney_Cap_C* K2Node_DynamicCast_AsBP_Fireplace_Chimney_Cap_1, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Add_IntInt_ReturnValue);
	void GeneratorStateUpdate(bool Active, class UMaterialInterface* Temp_object_Variable, enum class EValid CallFunc_GetTrait_Paths, class UThermalComponent* CallFunc_GetTrait_ReturnValue, class UMaterialInterface* Temp_object_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, class UMaterialInterface* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	void AuraEffect(bool Active);
	void AttachedDeployableActorsUpdated();
	void ExecuteUbergraph_BP_Fireplace(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue, bool K2Node_CustomEvent_Active);
};

}


