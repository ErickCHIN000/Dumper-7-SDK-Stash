#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xD0 - 0xB0)
// BlueprintGeneratedClass bc_LightingElement_01.bc_LightingElement_01_C
class Ubc_LightingElement_01_C : public UActorComponent
{
public:
	class Aba_LightingSetup_01_C*                SetupCurrent;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentChangeProgress;                             // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9EE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class Ubp_LightingScenario_01_C*             LightingScenario;                                  // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableDirectSetup;                                 // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9FB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        IgnoreChangeBelow;                                 // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Ubc_LightingElement_01_C* GetDefaultObj();

	void OverwriteCheck(class Aba_LightingSetup_01_C* Setup, bool* Result);
	void Backup(bool* Success);
	void Update(float ChangeProgress, bool SkipAnyTimeCheck, bool* Success, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
};

}


