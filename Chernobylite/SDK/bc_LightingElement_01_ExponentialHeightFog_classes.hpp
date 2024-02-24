#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x1D8 - 0xD0)
// BlueprintGeneratedClass bc_LightingElement_01_ExponentialHeightFog.bc_LightingElement_01_ExponentialHeightFog_C
class Ubc_LightingElement_01_ExponentialHeightFog_C : public Ubc_LightingElement_01_C
{
public:
	class UExponentialHeightFogComponent*        ExponentialHeightFog;                              // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_ExponentialHeightFog SetupOld;                                          // 0xD8(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_ExponentialHeightFog DirectSetup;                                       // 0x158(0x80)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_LightingElement_01_ExponentialHeightFog_C* GetDefaultObj();

	void Backup(bool* Success, const struct FSt_LightingSetup_01_ExponentialHeightFog& K2Node_MakeStruct_st_LightingSetup_01_ExponentialHeightFog);
	void Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, const struct FSt_LightingSetup_01_ExponentialHeightFog& SetupNew, bool CallFunc_Update_Success, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_8, float CallFunc_Lerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_10, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_11);
	void OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result);
};

}


