#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_GroundSlam_High_Enter.Action_GroundSlam_High_Enter_C
class UAction_GroundSlam_High_Enter_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_GroundSlam_High_Enter_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_GroundSlam_High_Enter(int32 EntryPoint, class AActor* K2Node_Event_Actor, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess);
};

}


