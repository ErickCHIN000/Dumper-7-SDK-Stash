#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x1D8 - 0x1D0)
// BlueprintGeneratedClass CE_Carrouser_TeamSwap.CE_Carrouser_TeamSwap_C
class UCE_Carrouser_TeamSwap_C : public UCE_PlayerShared_Skills_Confuse_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1D0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCE_Carrouser_TeamSwap_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_CE_Carrouser_TeamSwap(int32 EntryPoint, class AActor* K2Node_Event_Actor, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue1, float CallFunc_K2_GetTimeRemaining_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1, class FName CallFunc_Conv_StringToName_ReturnValue);
};

}


