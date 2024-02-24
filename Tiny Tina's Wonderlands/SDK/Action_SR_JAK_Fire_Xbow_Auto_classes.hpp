#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass Action_SR_JAK_Fire_Xbow_Auto.Action_SR_JAK_Fire_Xbow_Auto_C
class UAction_SR_JAK_Fire_Xbow_Auto_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_SR_JAK_Fire_Xbow_Auto_C* GetDefaultObj();

	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_SR_JAK_Fire_Xbow_Auto(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, bool K2Node_SwitchEnum_CmpSuccess);
};

}


