#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x4B0 - 0x488)
// BlueprintGeneratedClass MenuMap_Skit_3.MenuMap_Skit_C
class AMenuMap_Skit_C : public AOakLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x488(0x8)(Transient, DuplicateTransient)
	int32                                        TotalPlayed;                                       // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxPlays;                                          // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AGbxLevelSequenceActor*>        Sequences;                                         // 0x498(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AMenuMapClaptrapSkitControl*           MenuMapClaptrapSkitControl_1_ExecuteUbergraph_MenuMap_Skit_3_RefProperty; // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMenuMap_Skit_C* GetDefaultObj();

	void BndEvt__MenuMapClaptrapSkitControl_1_K2Node_ActorBoundEvent_0_OnPlaySkit__DelegateSignature();
	void ReceiveBeginPlay();
	void BndEvt__SEQ_MM_TinyTina_5_K2Node_ActorBoundEvent_3_OnMovieSceneSequencePlayerEvent__DelegateSignature();
	void BndEvt__SEQ_MM_Dice_Drop_3_K2Node_ActorBoundEvent_2_OnMovieSceneSequencePlayerEvent__DelegateSignature();
	void BndEvt__SEQ_MM_Goblin__K2Node_ActorBoundEvent_4_OnMovieSceneSequencePlayerEvent__DelegateSignature();
	void ExecuteUbergraph_MenuMap_Skit_3(int32 EntryPoint, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AGbxLevelSequenceActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
};

}


