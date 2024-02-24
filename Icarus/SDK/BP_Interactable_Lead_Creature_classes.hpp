#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x100 - 0xF0)
// BlueprintGeneratedClass BP_Interactable_Lead_Creature.BP_Interactable_Lead_Creature_C
class UBP_Interactable_Lead_Creature_C : public UBP_Interactable_Enter_Seat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                InstigatingPlayer;                                 // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Lead_Creature_C* GetDefaultObj();

	class FText GetInteractionText(class FText DefaultText, class FText CallFunc_MakeLiteralText_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, class FText CallFunc_GetInteractionText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetTameDataForOwningNPC(TScriptInterface<class ISpawnableAI> Target, struct FTamesRowHandle* RowHandle, bool* Success, const struct FAISetupRowHandle& CallFunc_GetAISetupRowHandle_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsRowHandleValid_ReturnValue, const struct FTamesEnum& CallFunc_IntToStruct_ReturnValue, const struct FTamesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusTamingData& CallFunc_GetTamesStruct_Tames, enum class EValid CallFunc_GetTamesStruct_Paths, int32 Temp_int_Variable_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_EqualEqual_FAISetupRowHandleFAISetupRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class UObject* Temp_wildcard_Variable, bool CallFunc_CanInteract_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class UObject* Temp_wildcard_Variable_1, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetMountParent_ParentActor, bool CallFunc_GetMountParent_Success, class AActor* CallFunc_GetOwner_ReturnValue_1, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character_1, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetMountParent_ParentActor_1, bool CallFunc_GetMountParent_Success_1, bool CallFunc_IsValid_ReturnValue_2);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Lead_Creature(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsServer_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AAIController* CallFunc_GetAIController_ReturnValue, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TScriptInterface<class ISpawnableAI> CallFunc_GetTameDataForOwningNPC_Target_CastInput, const struct FTamesRowHandle& CallFunc_GetTameDataForOwningNPC_RowHandle, bool CallFunc_GetTameDataForOwningNPC_Success, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_InitialiseTamableCharacter_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsCharacterBeingTamed_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CompleteCurrentAction_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue_4, class UIcarusTamingComponent* CallFunc_GetComponentByClass_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetMountParent_ParentActor, bool CallFunc_GetMountParent_Success, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class AAISpawner* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
};

}


