#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x448 - 0x3D8)
// BlueprintGeneratedClass EM_Switch.EM_Switch_C
class AEM_Switch_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         Box;                                               // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Lever;                                             // 0x3E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  brick3;                                            // 0x3F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  brick2;                                            // 0x3F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  brick1;                                            // 0x400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  brick0;                                            // 0x408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Activated;                                         // 0x410(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B14[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Message;                                           // 0x418(0x18)(Edit, BlueprintVisible)
	class FText                                  BlockMessage;                                      // 0x430(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class AEM_Switch_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void OnBlock(bool bFromActivation);
	void Reset();
	void ExecuteUbergraph_EM_Switch(int32 EntryPoint, enum class EMoveComponentAction Temp_byte_Variable, bool K2Node_Event_bFromActivation, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_CheckGameFlags_ReturnValue, bool K2Node_Event_bFromActivation_1, enum class EMoveComponentAction Temp_byte_Variable_1);
};

}


