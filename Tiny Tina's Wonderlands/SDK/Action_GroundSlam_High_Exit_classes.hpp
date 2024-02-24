#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_GroundSlam_High_Exit.Action_GroundSlam_High_Exit_C
class UAction_GroundSlam_High_Exit_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_GroundSlam_High_Exit_C* GetDefaultObj();

	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBeginBringUpWeapon(class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void UnlockInput();
	void ExecuteUbergraph_Action_GroundSlam_High_Exit(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1);
};

}


