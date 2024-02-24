#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x230 - 0x220)
// BlueprintGeneratedClass Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C
class UAction_DragonCompanion_FireBreathAttack_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AActor*                                MySelf;                                            // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_DragonCompanion_FireBreathAttack_C* GetDefaultObj();

	void AN_DoAttack();
	void AN_StopAttack();
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void StartAttack();
	void StopAttack();
	void ExecuteUbergraph_Action_DragonCompanion_FireBreathAttack(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ExternalDragonCompanionCreateFireBreath_Res, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_ExternalDragonCompanionStopFireBreath_Res);
};

}


