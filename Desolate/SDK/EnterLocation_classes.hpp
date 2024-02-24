#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x148 - 0x130)
// BlueprintGeneratedClass EnterLocation.EnterLocation_C
class UEnterLocation_C : public USHQuestTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                LocationNameKey;                                   // 0x138(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnterLocation_C* GetDefaultObj();

	void CheckAlreadyInLocation(class AActor* PawnActor, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, class ASHLevelLocation* K2Node_DynamicCast_AsSHLevel_Location, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	int32 GetProgressMax();
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnEnterLocation_Event_0(class ASHPlayerCharacter* Sender, class FText LocationName, const class FString& NameKey);
	void ExecuteUbergraph_EnterLocation(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHPlayerCharacter* K2Node_Event_Player, class ASHPlayerCharacter* K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_LocationName, const class FString& K2Node_CustomEvent_NameKey, bool CallFunc_EqualEqual_StrStr_ReturnValue);
};

}


