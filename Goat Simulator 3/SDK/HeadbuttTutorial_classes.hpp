#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x2DC - 0x2C0)
// BlueprintGeneratedClass HeadbuttTutorial.HeadbuttTutorial_C
class AHeadbuttTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HasHeadbutted;                                     // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HeadbuttCount;                                     // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HeadbuttsNeededToComplete;                         // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHeadbuttTutorial_C* GetDefaultObj();

	TArray<class FText> GetStepOverrideDescriptionArray(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array_1);
	TArray<bool> GetStepCompletionArray(bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<bool>& K2Node_MakeArray_Array);
	void GoatHeadbutted(class AGGGoat* GoatHeadbutting, bool bHitSomething, TArray<class AActor*>& HeadbuttedActors, bool Is_charge_headbutt);
	void CheckIfAllBasicMechanicsAreCompleted();
	void OnTutorialActivated(class AGGPlayerController* PC, class AGGGoat* Goat);
	void ExecuteUbergraph_HeadbuttTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatHeadbutting, bool K2Node_CustomEvent_bHitSomething, TArray<class AActor*>& K2Node_CustomEvent_HeadbuttedActors, bool K2Node_CustomEvent_Is_charge_headbutt, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class AGGPlayerController* K2Node_Event_PC, class AGGGoat* K2Node_Event_Goat, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


