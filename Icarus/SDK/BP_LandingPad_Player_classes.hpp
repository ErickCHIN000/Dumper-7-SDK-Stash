#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x798 - 0x774)
// BlueprintGeneratedClass BP_LandingPad_Player.BP_LandingPad_Player_C
class ABP_LandingPad_Player_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_46F3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UIProjectionLocation_C*            BP_UIProjectionLocation;                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULandingPadComponent*                  LandingPad;                                        // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       LandingLocator;                                    // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LandingPad_Player_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LandingPad_Player(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue);
};

}


