#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x948 - 0x8F8)
// BlueprintGeneratedClass BP_Event_TheButterflyEffect.BP_Event_TheButterflyEffect_C
class ABP_Event_TheButterflyEffect_C : public ABP_Event_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        MusicPitchTimeline_Pitch_40A92BD34487163ACEC696B6206B0EF9; // 0x900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                MusicPitchTimeline__Direction_40A92BD34487163ACEC696B6206B0EF9; // 0x904(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CAE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    MusicPitchTimeline;                                // 0x908(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_ButterflyEffect_Ballerina_C*> BallerinaRef;                                      // 0x910(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        ProgressIndex;                                     // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CB4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Tornado_C*                         Tornado;                                           // 0x928(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PActor_Base_C*                     RoofTop;                                           // 0x930(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_StatusSource_Radio_C*              BalletMusicPlayer;                                 // 0x938(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MusicPitch;                                        // 0x940(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentPitch;                                      // 0x944(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Event_TheButterflyEffect_C* GetDefaultObj();

	void MusicPitchTimeline__FinishedFunc();
	void MusicPitchTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BallerinaSpinning();
	void OnQuestCompletedBlueprint();
	void OnCompletedSequenceFinished();
	void OnInitialProgressReplicated();
	void OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted);
	void IncreaseMusicPitch();
	void OnPersistentEffectToggled_Event_0(bool bActive);
	void BindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler);
	void UnbindPersistentEffectsToggler(class ABP_GoatTower_PersistentEffectsToggler_C* Toggler);
	void ExecuteUbergraph_BP_Event_TheButterflyEffect(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class ABP_ButterflyEffect_Ballerina_C* CallFunc_Array_Get_Item, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EEventCompletedState CallFunc_GetCompletionState_ReturnValue_1, bool K2Node_Event_bSaveExisted, bool K2Node_Event_bWasCompleted, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_CustomEvent_bActive, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_Event_Toggler_1, class ABP_GoatTower_PersistentEffectsToggler_C* K2Node_Event_Toggler, class ABP_ButterflyEffect_Ballerina_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


