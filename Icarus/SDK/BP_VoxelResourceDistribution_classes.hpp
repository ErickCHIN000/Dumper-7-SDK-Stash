#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC8 - 0xC0)
// BlueprintGeneratedClass BP_VoxelResourceDistribution.BP_VoxelResourceDistribution_C
class UBP_VoxelResourceDistribution_C : public UVoxelResourceDistribution
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_VoxelResourceDistribution_C* GetDefaultObj();

	void OnSeedInitialised(int32 Seed);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VoxelResourceDistribution(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_Seed);
};

}


