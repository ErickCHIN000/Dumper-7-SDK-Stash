#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0xA4 - 0xA0)
// BlueprintGeneratedClass BP_DebugModeStateComponent.BP_DebugModeStateComponent_C
class UBP_DebugModeStateComponent_C : public UActorComponent
{
public:
	int32                                        ModeToggles;                                       // 0xA0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_DebugModeStateComponent_C* GetDefaultObj();

	void IsModeActive(enum class E_DebugModes Mode, bool* IsModeActive, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_GetNthBitValue_ReturnValue);
	void ToggleMode(enum class E_DebugModes Bit, const class FString& ModeString, bool CallFunc_IsModeActive_IsModeActive, int32 CallFunc_Conv_ByteToInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Not_Int_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_Or_IntInt_ReturnValue);
};

}


