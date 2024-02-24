#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3B8 - 0x3AC)
// BlueprintGeneratedClass BP_Rain_StormMode_Cathedral.BP_Rain_StormMode_Cathedral_C
class ABP_Rain_StormMode_Cathedral_C : public ABP_Rain_StormMode_C
{
public:
	uint8                                        Pad_BE5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Rain_StormMode_Cathedral_C* GetDefaultObj();

	void ApplyRainMat(bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Rain_StormMode_Cathedral(int32 EntryPoint);
};

}


