#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x450 - 0x400)
// BlueprintGeneratedClass Action_Spell_Channel_Laserhand_Loop.Action_Spell_Channel_Laserhand_Loop_C
class UAction_Spell_Channel_Laserhand_Loop_C : public UAction_SpellThrow_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(Transient, DuplicateTransient)
	class UParticleSystemComponent*              SpellFX_1st;                                       // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              SpellFX_3rd;                                       // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_LaserhandChargeStart;                        // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           Audio_LaserhandChargeIncrease;                     // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChargePlaying;                                   // 0x428(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWwiseAudioComponent*                  CasterAudioComponent;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwisePlaybackInstance                ChargingInst;                                      // 0x438(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAction_Spell_Channel_Laserhand_Loop_C* GetDefaultObj();

	void AreWeChargingOrAreWeIncreasing(bool* IsCharging, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FWwisePlaybackInstance>& CallFunc_GetPlayingInstances_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWwiseEvent* CallFunc_GetPlayingEvent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_Spell_Channel_Laserhand_Loop(int32 EntryPoint, class AActor* K2Node_Event_Actor1, class UParticleSystem* CallFunc_GetCollectionFX_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class UParticleSystemComponent* CallFunc_PlayFX_1stFXComponent, class UParticleSystemComponent* CallFunc_PlayFX_3rdFXComponent, class FName CallFunc_PlayFX_Socket, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_K2_GetActor_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_AreWeChargingOrAreWeIncreasing_IsCharging, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1);
};

}


