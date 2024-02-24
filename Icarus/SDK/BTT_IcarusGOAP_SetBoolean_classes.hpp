#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xD9 - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_SetBoolean.BTT_IcarusGOAP_SetBoolean_C
class UBTT_IcarusGOAP_SetBoolean_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                BooleanKey;                                        // 0xB0(0x28)(Edit, BlueprintVisible)
	bool                                         NewValue;                                          // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_SetBoolean_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_IcarusGOAP_SetBoolean(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor);
};

}


