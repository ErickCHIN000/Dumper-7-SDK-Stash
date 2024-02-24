#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// BlueprintGeneratedClass Action_KotC_AS4_Recall_Start.Action_KotC_AS4_Recall_Start_C
class UAction_KotC_AS4_Recall_Start_C : public UAction_KotC_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_KotC_AS4_Recall_Start_C* GetDefaultObj();

	void OnServerBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_KotC_AS4_Recall_Start(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetHammerTransform3rd_Res, class UGbxAbility* CallFunc_GetClassFeat_Res, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, TScriptInterface<class IIFeat_KnightOfTheClaw_C> K2Node_DynamicCast_AsIFeat_Knight_Of_the_Claw, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_SetHammerTransform1st_Res, bool CallFunc_HammerOfTheDragonGodsSetRecallFXState_Res, class AActor* K2Node_Event_Actor, class AActor* CallFunc_GetHammerProjectileReference_Hammer, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIProj_KotC_AS4_Hammer_C> K2Node_DynamicCast_AsI_Proj_Kot_C_AS4_Hammer, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_KnightOfTheClawSetHammerState_Res);
};

}


