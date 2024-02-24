#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x5C8 - 0x5B0)
// BlueprintGeneratedClass BP_SkeletalItem_Scanner_Cave.BP_SkeletalItem_Scanner_Cave_C
class ABP_SkeletalItem_Scanner_Cave_C : public ABP_SkeletalItem_Scanner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   FMODAudio;                                         // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LightMaterial;                                     // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Scanner_Cave_C* GetDefaultObj();

	void UpdateLightMaterial(float Intensity, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PlayAudioBeep(class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Scanner_Cave(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
};

}


