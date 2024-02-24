#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0xDC - 0xA8)
// BlueprintGeneratedClass BTT_SetFloat.BTT_SetFloat_C
class UBTT_SetFloat_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                FloatKey;                                          // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        NewValue;                                          // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_SetFloat_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_SetFloat(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


