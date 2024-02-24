#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A8 - 0x280)
// BlueprintGeneratedClass Action_Barbarian_Whirlwind.Action_Barbarian_Whirlwind_C
class UAction_Barbarian_Whirlwind_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UGbxAction*                            CEActionRef;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 DamageHandle;                                      // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAction_Barbarian_Whirlwind_C* GetDefaultObj();

	void SetActionSkillCameraMode(class FName ModeName, bool Enabled, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue);
	void OnServerBegin(class AActor* Actor);
	void WindUpCompleted();
	void OnBegin(class AActor* Actor);
	void AN_WhirlwindEnd();
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void AN_HideWeapon();
	void OnBeginBringUpWeapon(class AActor* Actor);
	void AN_StartActionSkillTimer();
	void ExecuteUbergraph_Action_Barbarian_Whirlwind(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor3, class AActor* CallFunc_K2_GetActor_ReturnValue1, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* K2Node_Event_Actor2, class AActor* CallFunc_K2_GetActor_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_K2_GetActor_ReturnValue3, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess3, const struct FHitResult& Temp_struct_Variable, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue4, class U_ActionSkill_Parent_C* K2Node_DynamicCast_As_Action_Skill_Parent, bool K2Node_DynamicCast_bSuccess4, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player4, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_UnpauseActionSkillDuration_Res, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, class UGbxAction* CallFunc_K2Play_ReturnValue);
};

}


