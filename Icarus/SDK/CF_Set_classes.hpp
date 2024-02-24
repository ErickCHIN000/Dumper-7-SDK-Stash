#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x308 - 0x300)
// WidgetBlueprintGeneratedClass CF_Set.CF_Set_C
class UCF_Set_C : public UCF_BaseString2_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_Set_C* GetDefaultObj();

	void Execute();
	void ExecuteUbergraph_CF_Set(int32 EntryPoint, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UCheatOverlayBase* CallFunc_GetCheatOverlay_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_SetCheatVariable_ReturnValue);
};

}


