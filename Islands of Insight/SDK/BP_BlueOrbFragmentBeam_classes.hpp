#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x528 - 0x520)
// BlueprintGeneratedClass BP_BlueOrbFragmentBeam.BP_BlueOrbFragmentBeam_C
class UBP_BlueOrbFragmentBeam_C : public UBlueOrbFragmentBeam
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_BlueOrbFragmentBeam_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BlueOrbFragmentBeam(int32 EntryPoint, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue_1);
};

}


