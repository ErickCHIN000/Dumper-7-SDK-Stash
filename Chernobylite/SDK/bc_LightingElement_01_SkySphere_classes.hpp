#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x160 - 0xD0)
// BlueprintGeneratedClass bc_LightingElement_01_SkySphere.bc_LightingElement_01_SkySphere_C
class Ubc_LightingElement_01_SkySphere_C : public Ubc_LightingElement_01_C
{
public:
	class Aba_CustomSkySphere_01_C*              SkySphere;                                         // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSt_LightingSetup_01_SkySphere        SetupOld;                                          // 0xD8(0x84)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class Ubc_LightingElement_01_SkySphere_C* GetDefaultObj();

	void OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result);
	void Backup(bool* Success, const struct FSt_LightingSetup_01_SkySphere& K2Node_MakeStruct_st_LightingSetup_01_SkySphere);
	void Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_Update_Success, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, float CallFunc_Lerp_ReturnValue_6, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, float CallFunc_Lerp_ReturnValue_7, float CallFunc_Lerp_ReturnValue_8, float CallFunc_Lerp_ReturnValue_9, float CallFunc_Lerp_ReturnValue_10, float CallFunc_Lerp_ReturnValue_11);
};

}


