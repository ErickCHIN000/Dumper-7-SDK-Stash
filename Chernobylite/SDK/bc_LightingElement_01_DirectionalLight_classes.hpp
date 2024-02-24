#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x198 - 0xD0)
// BlueprintGeneratedClass bc_LightingElement_01_DirectionalLight.bc_LightingElement_01_DirectionalLight_C
class Ubc_LightingElement_01_DirectionalLight_C : public Ubc_LightingElement_01_C
{
public:
	class UDirectionalLightComponent*            DirectionalLight;                                  // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_DirectionalLight SetupOld;                                          // 0xD8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_DirectionalLight DirectSetup;                                       // 0x138(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_LightingElement_01_DirectionalLight_C* GetDefaultObj();

	void OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result);
	void Backup(bool* Success, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FSt_LightingSetup_01_DirectionalLight& K2Node_MakeStruct_st_LightingSetup_01_DirectionalLight);
	void Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, const struct FSt_LightingSetup_01_DirectionalLight& SetupNew, bool CallFunc_Update_Success, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FColor& CallFunc_Conv_LinearColorToColor_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, float CallFunc_Lerp_ReturnValue_5, float CallFunc_Lerp_ReturnValue_6, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_Lerp_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_8);
};

}


