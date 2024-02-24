#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_PS_JAK_Reload_01.Action_PS_JAK_Reload_01_C
class UAction_PS_JAK_Reload_01_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_PS_JAK_Reload_01_C* GetDefaultObj();

	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnAnimEnd(class AActor* Actor);
	void ExecuteUbergraph_Action_PS_JAK_Reload_01(int32 EntryPoint, class AWeapon* CallFunc_K2_GetWeapon_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor);
};

}


