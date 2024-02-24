#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass ThroneRoom_Stretchgoal_DoorOpeningSeq.SequenceDirector_C
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USequenceDirector_C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSequenceDirector_0();
	void SequenceEvent_0();
	void ExecuteUbergraph_SequenceDirector(int32 EntryPoint, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsSplitScreen_ReturnValue, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, class AGGPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue);
};

}


