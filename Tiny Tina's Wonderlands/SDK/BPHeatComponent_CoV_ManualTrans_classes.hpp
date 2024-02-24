#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// BlueprintGeneratedClass BPHeatComponent_CoV_ManualTrans.BPHeatComponent_CoV_ManualTrans_C
class UBPHeatComponent_CoV_ManualTrans_C : public UBPHeatComponent_CoV_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBPHeatComponent_CoV_ManualTrans_C* GetDefaultObj();

	void OnStartOverheat();
	void ExecuteUbergraph_BPHeatComponent_CoV_ManualTrans(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue);
};

}


