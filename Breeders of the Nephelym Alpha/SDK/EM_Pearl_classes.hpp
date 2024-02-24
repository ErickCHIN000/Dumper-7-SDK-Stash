#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x410 - 0x3D8)
// BlueprintGeneratedClass EM_Pearl.EM_Pearl_C
class AEM_Pearl_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     Capsule;                                           // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Rotate;                                            // 0x3F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Activated;                                         // 0x3F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_10AF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  FailMessage;                                       // 0x3F8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AEM_Pearl_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void OnBlock(bool bFromActivation);
	void Reset();
	void ExecuteUbergraph_EM_Pearl(int32 EntryPoint, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation);
};

}


