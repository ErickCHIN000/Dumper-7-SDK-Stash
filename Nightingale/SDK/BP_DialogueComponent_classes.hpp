#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x108 - 0xA0)
// BlueprintGeneratedClass BP_DialogueComponent.BP_DialogueComponent_C
class UBP_DialogueComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDialogue*                             Dialogue;                                          // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Creature_NPC_C*>            ConversationParticipants;                          // 0xB0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify)
	class UDialogue*                             AmbientDialogue;                                   // 0xC0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ConversationActive;                                // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6550[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AmbientTimer;                                      // 0xD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        NodeIndex;                                         // 0xD8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6565[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AmbientRandomTimeMin;                              // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmbientRandomTimeMax;                              // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AmbientMinRange;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnAmbientConversationFinished;                     // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_DialogueComponent_C* GetDefaultObj();

	class UDialogue* GetDialogue();
	void VerifyParticipants(class UDialogue* Dialog, TArray<class ABP_Creature_NPC_C*>& Participants, bool* Result, int32 NumGoodParticipants, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue_2, class ABP_Creature_NPC_C* CallFunc_Array_Get_Item, class UWBP_AmbientDialogue_C* CallFunc_GetNPCDialogueWidget_Widget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnRep_ConversationParticipants();
	bool IsPlayerInAmbientRange(class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool IsValidDialogueNodeIndex(int32 Index, bool CallFunc_IsValid_ReturnValue, class UDialogueNodeBase* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void GetNPCDialogueWidget(class ABP_Creature_NPC_C* NPC, class UWBP_AmbientDialogue_C** Widget, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWBP_AmbientDialogue_C* K2Node_DynamicCast_AsWBP_Ambient_Dialogue, bool K2Node_DynamicCast_bSuccess);
	void GetDialogueWidget(class UWBP_AmbientDialogue_C** Widget, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, class UWBP_AmbientDialogue_C* CallFunc_GetNPCDialogueWidget_Widget);
	class UDialogue* GetAmbientDialogue();
	bool IsAmbientConversation(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void InitializeAmbientDialogue(class UDialogue* DialogueAsset, TArray<class ABP_Creature_NPC_C*>& Participants);
	void TriggerAmbientDialogue(class UWBP_AmbientDialogue_C* Target);
	void PlayDialogueNode();
	void TriggerAmbientConversation();
	void TriggerOneLiner(class UWBP_AmbientDialogue_C* Target);
	void ExecuteUbergraph_BP_DialogueComponent(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWBP_AmbientDialogue_C* K2Node_CustomEvent_Target_1, bool CallFunc_IsAmbientConversation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWBP_AmbientDialogue_C* K2Node_CustomEvent_Target, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable, class ABP_Creature_NPC_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_AmbientDialogue_C* CallFunc_GetNPCDialogueWidget_Widget, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_VerifyParticipants_Result, bool CallFunc_IsValidDialogueNodeIndex_ReturnValue, class UDialogueNodeBase* CallFunc_Array_Get_Item_1, class UDialogueNodeSpeaker* K2Node_DynamicCast_AsDialogue_Node_Speaker, bool K2Node_DynamicCast_bSuccess, class ABP_Creature_NPC_C* CallFunc_Array_Get_Item_2, class UWBP_AmbientDialogue_C* CallFunc_GetNPCDialogueWidget_Widget_1);
	void OnAmbientConversationFinished__DelegateSignature();
};

}


