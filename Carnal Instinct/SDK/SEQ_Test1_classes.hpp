#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass SEQ_Test1.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void HideHUD();
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UWB_InGame_C* CallFunc_Array_Get_Item);
};

}


