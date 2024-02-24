#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x3E9 - 0x3D8)
// BlueprintGeneratedClass EM_NPCMover.EM_NPCMover_C
class AEM_NPCMover_C : public ASexyEventMarker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ASexyManualCharacter*                  NPC;                                               // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Activated;                                         // 0x3E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AEM_NPCMover_C* GetDefaultObj();

	void OnTrigger(bool bFromActivation);
	void Reset();
	void ExecuteUbergraph_EM_NPCMover(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bFromActivation, bool CallFunc_BooleanOR_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
};

}


