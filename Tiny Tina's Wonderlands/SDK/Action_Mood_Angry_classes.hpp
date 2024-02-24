#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x3C0 - 0x3B8)
// BlueprintGeneratedClass Action_Mood_Angry.Action_Mood_Angry_C
class UAction_Mood_Angry_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Mood_Angry_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_Mood_Angry(int32 EntryPoint, class AActor* K2Node_Event_Actor);
};

}


