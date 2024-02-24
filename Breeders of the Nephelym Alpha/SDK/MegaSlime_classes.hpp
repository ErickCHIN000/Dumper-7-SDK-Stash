#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xE78 - 0xE70)
// BlueprintGeneratedClass MegaSlime.MegaSlime_C
class AMegaSlime_C : public ASexyManualCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE70(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AMegaSlime_C* GetDefaultObj();

	void Reset();
	void OnSetWorldState();
	void ExecuteUbergraph_MegaSlime(int32 EntryPoint, const struct FConditions& K2Node_MakeStruct_Conditions, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_CheckGameFlags_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FConditions& K2Node_MakeStruct_Conditions_1, bool CallFunc_CheckGameFlags_ReturnValue_1);
};

}


