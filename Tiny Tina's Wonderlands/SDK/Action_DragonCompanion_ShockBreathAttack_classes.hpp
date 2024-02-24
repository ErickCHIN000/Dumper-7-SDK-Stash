#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x238 - 0x230)
// BlueprintGeneratedClass Action_DragonCompanion_ShockBreathAttack.Action_DragonCompanion_ShockBreathAttack_C
class UAction_DragonCompanion_ShockBreathAttack_C : public UAction_DragonCompanion_FireBreathAttack_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_DragonCompanion_ShockBreathAttack_C* GetDefaultObj();

	void StartAttack();
	void StopAttack();
	void ExecuteUbergraph_Action_DragonCompanion_ShockBreathAttack(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_ExternalDragonCompanionCreateShockBreath_Res, bool CallFunc_ExternalDragonCompanionStopShockBreath_Res);
};

}


