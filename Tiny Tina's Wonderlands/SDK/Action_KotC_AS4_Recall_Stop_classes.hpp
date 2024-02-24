#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// BlueprintGeneratedClass Action_KotC_AS4_Recall_Stop.Action_KotC_AS4_Recall_Stop_C
class UAction_KotC_AS4_Recall_Stop_C : public UAction_KotC_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_KotC_AS4_Recall_Stop_C* GetDefaultObj();

	void AN_HideHammer();
	void OnServerBegin(class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void Audio_HammerCatch();
	void ExecuteUbergraph_Action_KotC_AS4_Recall_Stop(int32 EntryPoint, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_GetHammerProjectileReference_Hammer, TScriptInterface<class IIProj_KotC_AS4_Hammer_C> K2Node_DynamicCast_AsI_Proj_Kot_C_AS4_Hammer, bool K2Node_DynamicCast_bSuccess, bool CallFunc_KnightOfTheClawSetHammerState_Res, class AActor* K2Node_Event_Actor1, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class UGbxAbility* CallFunc_GetClassFeat_Res, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_SetHammerTransform3rd_Res, bool CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, bool CallFunc_SetHammerTransform1st_Res, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess4);
};

}


