#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// BlueprintGeneratedClass BlindmanDeathContainer.BlindmanDeathContainer_C
class ABlindmanDeathContainer_C : public AAi_BaseDeathContainer_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABlindmanDeathContainer_C* GetDefaultObj();

	void OnUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_BlindmanDeathContainer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character);
};

}


