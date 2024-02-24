#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x100 - 0xF0)
// BlueprintGeneratedClass BP_Interactable_Cancel_Taming.BP_Interactable_Cancel_Taming_C
class UBP_Interactable_Cancel_Taming_C : public UBP_Interactable_Enter_Seat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  ParentCharacterKey;                                // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Cancel_Taming_C* GetDefaultObj();

	void GetTameDataForOwningNPC(TScriptInterface<class ISpawnableAI> Target, struct FTamesRowHandle* RowHandle, bool* Success, const struct FAISetupRowHandle& CallFunc_GetAISetupRowHandle_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FTamesEnum& CallFunc_IntToStruct_ReturnValue, const struct FTamesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusTamingData& CallFunc_GetTamesStruct_Tames, enum class EValid CallFunc_GetTamesStruct_Paths, int32 Temp_int_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_EqualEqual_FAISetupRowHandleFAISetupRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class UObject* Temp_wildcard_Variable, bool CallFunc_CanInteract_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UObject* Temp_wildcard_Variable_1, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetMountParent_ParentActor, bool CallFunc_GetMountParent_Success, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character_1, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetMountParent_ParentActor_1, bool CallFunc_GetMountParent_Success_1, bool CallFunc_IsValid_ReturnValue_2);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Cancel_Taming(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsServer_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_CompleteCurrentAction_ReturnValue, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess_2, class AAISpawner* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsCharacterBeingTamed_ReturnValue);
};

}


