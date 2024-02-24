#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x238 - 0x228)
// BlueprintGeneratedClass Overworld.Overworld_C
class AOverworld_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ALevelSequenceActor*                   MainMenuSequence_4_ExecuteUbergraph_Overworld_RefProperty; // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AOverworld_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_Overworld(int32 EntryPoint, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue);
};

}


