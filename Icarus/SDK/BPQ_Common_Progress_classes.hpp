#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x3A4 - 0x380)
// BlueprintGeneratedClass BPQ_Common_Progress.BPQ_Common_Progress_C
class ABPQ_Common_Progress_C : public AQuest
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x388(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         NearbyPlayers;                                     // 0x390(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3900[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfPlayers;                                   // 0x394(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Event;                                             // 0x398(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        MaxPlayerDistance;                                 // 0x3A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABPQ_Common_Progress_C* GetDefaultObj();

	float GetMaxTime(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, int32 CallFunc_GetVariation_ReturnValue, float K2Node_Select_Default);
	void PlayersLeftArea();
	void GetDescription(class FText& InDescription, class FText* OutDescription, bool* bOutComplete, bool CallFunc_GetBooleanVariable_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_GetFloatVariable_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	bool Check(bool CallFunc_GetBooleanVariable_ReturnValue);
	void RunOperations(float DeltaSeconds);
	void Setup(bool bFirstTime);
	void CheckPlayers();
	void ExecuteUbergraph_BPQ_Common_Progress(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_bFirstTime, float CallFunc_GetFloatVariable_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class AIcarusPlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetBooleanVariable_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_GetMaxTime_ReturnValue);
};

}


