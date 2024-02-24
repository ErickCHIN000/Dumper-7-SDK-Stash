#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x69 (0xF1 - 0x88)
// BlueprintGeneratedClass BPT_GoToLocation.BPT_GoToLocation_C
class UBPT_GoToLocation_C : public UNarrativeTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                               GoalLocation;                                      // 0x90(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceTolerance;                                 // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  FriendlyLocationName;                              // 0xB0(0x18)(Edit, BlueprintVisible)
	TSubclassOf<class AActor>                    GoalActorClass;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash)
	class FName                                  GoalActorTag;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         Invert_;                                           // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A4B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                GoalActor;                                         // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_NarrativeDefaultUI_C*              NarrativeUI;                                       // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         Add_Waypoint_;                                     // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPT_GoToLocation_C* GetDefaultObj();

	void GetTaskLocationName(class FText* Name);
	void GetTaskLocation(struct FVector* Location, const struct FVector& CallFunc_GetGoalLocation_GoalLocation);
	class FText GetTaskDescription(const class FString& CallFunc_SelectString_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetGoalLocation(struct FVector* GoalLocation, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void TickTask();
	void K2_BeginTask();
	void Configure_Goal_Actor();
	void K2_OnTaskCompleted();
	void K2_EndTask();
	void ExecuteUbergraph_BPT_GoToLocation(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, TArray<class APlayerController*>& CallFunc_GetGroupMembers_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetGoalLocation_GoalLocation, TArray<class AActor*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, double CallFunc_Vector_Distance_ReturnValue, class AActor* CallFunc_Array_Get_Item_2, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TArray<class UBP_NarrativeDefaultUI_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UBP_NarrativeDefaultUI_C* CallFunc_Array_Get_Item_3, bool CallFunc_IsLocalController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


