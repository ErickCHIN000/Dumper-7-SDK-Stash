#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x7A8 - 0x774)
// BlueprintGeneratedClass BP_Fortification_Base.BP_Fortification_Base_C
class ABP_Fortification_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_17F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MinAudioShelterValue;                              // 0x780(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17F7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           BaseStaticMesh;                                    // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           DestructionStaticMeshState_1;                      // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         BaseSkeletalMesh;                                  // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMesh*                         DestructionSkeletalMeshState_1;                    // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Fortification_Base_C* GetDefaultObj();

	float GetAudioShelterValue(class AIcarusPlayerCharacter* Player, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetShelter_ReturnValue, float CallFunc_FMax_ReturnValue);
	float GetOcclusionValue();
	void UpdateDamageState(class UActorState* ActorState, float NewHealth);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Fortification_Base(int32 EntryPoint, bool CallFunc_SetStaticMesh_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, class UActorState* K2Node_CustomEvent_ActorState, float K2Node_CustomEvent_NewHealth, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
};

}


