#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x140 - 0xD0)
// BlueprintGeneratedClass bc_LightingElement_01_SkyLight.bc_LightingElement_01_SkyLight_C
class Ubc_LightingElement_01_SkyLight_C : public Ubc_LightingElement_01_C
{
public:
	struct FSt_LightingSetup_01_SkyLight         SetupOld;                                          // 0xD0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkyLightComponent*                    SkyLight;                                          // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RecaptureTimeCheck;                                // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_SkyLight         DirectSetup;                                       // 0x10C(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastChangeProgress;                                // 0x13C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_LightingElement_01_SkyLight_C* GetDefaultObj();

	void Backup(bool* Success, float CallFunc_GetTimeSeconds_ReturnValue, const struct FSt_LightingSetup_01_SkyLight& K2Node_MakeStruct_st_LightingSetup_01_SkyLight);
	void Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, const struct FSt_LightingSetup_01_SkyLight& SetupNew, bool CallFunc_Update_Success, float CallFunc_GetTimeSeconds_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_2, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_3, float CallFunc_Lerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2);
	void OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result);
};

}


