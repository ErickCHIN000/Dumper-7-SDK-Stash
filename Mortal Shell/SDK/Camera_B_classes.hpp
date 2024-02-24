#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x560 (0x780 - 0x220)
// BlueprintGeneratedClass Camera_B.Camera_B_C
class ACamera_B_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FOV_custom;                                        // 0x230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BCF[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPostProcessSettings                  Cam_PP;                                            // 0x240(0x540)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ACamera_B_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Camera_B(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


