#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x2E1 - 0x2A0)
// BlueprintGeneratedClass SEQ_MasterHScene-NagaHCFuck.SEQ_MasterHScene-NagaHCFuck_C
class ASEQ_MasterHSceneMinusNagaHCFuck_C : public ALevelSequenceActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequence*                        PlayedSequence;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           W_InGameRef;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_HScene_C*                           W_HSceneRef;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Speed;                                             // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1308[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UW_HSceneMinusFaceSittingAnubite_C*    NewVar_2;                                          // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_HSceneMinusFaceSittingConcubine_C*  NewVar_0;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UW_HSceneMinusNagaHCFuck_C*            NewVar_1;                                          // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstSet_;                                       // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class ASEQ_MasterHSceneMinusNagaHCFuck_C* GetDefaultObj();

	void ToggleAngle();
	void PlaySEQ();
	void KillSEQ();
	void ProgressSEQ();
	void CustomEvent_0();
	void ExecuteUbergraph_SEQ_MasterHSceneMinusNagaHCFuck(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UW_HSceneMinusNagaHCFuck_C* CallFunc_Create_ReturnValue, TArray<class UWB_InGame_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool Temp_bool_Has_Been_Initd_Variable, class UWB_InGame_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool Temp_bool_IsClosed_Variable, const struct FMovieSceneSequencePlaybackSettings& K2Node_MakeStruct_MovieSceneSequencePlaybackSettings, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue);
};

}


