#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC68 - 0xC60)
// BlueprintGeneratedClass BP_Building_Beam.BP_Building_Beam_C
class ABP_Building_Beam_C : public ABP_Building_Frame_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC60(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Building_Beam_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Building_Beam(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue);
};

}


