#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x108 - 0xD0)
// BlueprintGeneratedClass bc_LightingElement_01_AtmosphericFog.bc_LightingElement_01_AtmosphericFog_C
class Ubc_LightingElement_01_AtmosphericFog_C : public Ubc_LightingElement_01_C
{
public:
	class UAtmosphericFogComponent*              AtmosphericFog;                                    // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_AtmosphericFog   SetupOld;                                          // 0xD8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_LightingElement_01_AtmosphericFog_C* GetDefaultObj();

	void Backup(bool* Success, const struct FSt_LightingSetup_01_AtmosphericFog& K2Node_MakeStruct_st_LightingSetup_01_AtmosphericFog);
	void Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_Update_Success, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_8, float CallFunc_Lerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_10);
	void OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result);
};

}


