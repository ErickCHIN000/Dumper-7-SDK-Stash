#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2E0 - 0x2A0)
// BlueprintGeneratedClass BP_AmbientDialogue.BP_AmbientDialogue_C
class ABP_AmbientDialogue_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      AmbientWidget;                                     // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       Character;                                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UBP_DialogueComponent_C*               Dialogue_Component;                                // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       AmbientDialogueRange;                              // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Dialogue_Owner;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AmbientDialogue_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Destroy_Ambient_Actor();
	void Check_Character_In_Range();
	void ExecuteUbergraph_BP_AmbientDialogue(int32 EntryPoint, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UWBP_AmbientDialogue_C* K2Node_DynamicCast_AsWBP_Ambient_Dialogue, bool K2Node_DynamicCast_bSuccess, class UDialogue* CallFunc_GetAmbientDialogue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_AttachToActor_ReturnValue, bool CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


