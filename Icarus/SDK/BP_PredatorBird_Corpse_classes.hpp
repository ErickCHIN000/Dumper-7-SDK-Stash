#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x778 - 0x770)
// BlueprintGeneratedClass BP_PredatorBird_Corpse.BP_PredatorBird_Corpse_C
class ABP_PredatorBird_Corpse_C : public ABP_GOAP_Corpse_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x770(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PredatorBird_Corpse_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PredatorBird_Corpse(int32 EntryPoint, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


