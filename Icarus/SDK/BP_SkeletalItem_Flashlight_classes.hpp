#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x32 (0x5F8 - 0x5C6)
// BlueprintGeneratedClass BP_SkeletalItem_Flashlight.BP_SkeletalItem_Flashlight_C
class ABP_SkeletalItem_Flashlight_C : public ABP_SkeletalItem_LightBase_C
{
public:
	uint8                                        Pad_65D0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_IcarusSpotLight_C*                 BP_IcarusSpotLight;                                // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FlashlightMat_Off;                                 // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              FlashlightMat_On;                                  // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            FMODEvent_Switch;                                  // 0x5F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Flashlight_C* GetDefaultObj();

	void PlaySwitchAudio(class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue);
	void LightUpdated(enum class EValid CallFunc_GetTrait_Paths, class UBP_FocusableBehaviour_C* CallFunc_GetTrait_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInterface* K2Node_Select_Default);
	void UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Flashlight(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


