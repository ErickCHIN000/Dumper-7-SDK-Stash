#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xF0 - 0xA8)
// BlueprintGeneratedClass BTT_AIInteract.BTT_AIInteract_C
class UBTT_AIInteract_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_SmartAIComponent_C*                AI_Component;                                      // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_SmartAIComponent_C*                Move_To_Actor_AI_Component;                        // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Time;                                              // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Check_Timer;                                       // 0xC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Current_Anim_Index;                                // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F57[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_AIInteractAnim                     Current_Anims;                                     // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Finish_Timer;                                      // 0xE8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_AIInteract_C* GetDefaultObj();

	void Convert_To_Behaviour(enum class E_StartingAIBehaviours S_Behaviour, enum class E_AIBehaviour* Behaviour, enum class E_StartingAIBehaviours Temp_byte_Variable, enum class E_AIBehaviour Temp_byte_Variable_1, enum class E_AIBehaviour Temp_byte_Variable_2, enum class E_AIBehaviour Temp_byte_Variable_3, enum class E_AIBehaviour Temp_byte_Variable_4, enum class E_AIBehaviour Temp_byte_Variable_5, enum class E_AIBehaviour Temp_byte_Variable_6, enum class E_AIBehaviour Temp_byte_Variable_7, enum class E_AIBehaviour K2Node_Select_Default);
	void Next_Animation();
	void End_AI_Interaction();
	void Check_If_Still_Can_Interact();
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void Reset_AI();
	void Clear_AI_Interact();
	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_AIInteract(int32 EntryPoint, double CallFunc_AI_Interact_Time_Total_Time, TScriptInterface<class IBP_AIInterface_C> K2Node_DynamicCast_AsBP_AIInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AI_Can_Interact__Can_Interact, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class E_AIBehaviour CallFunc_Convert_To_Behaviour_Behaviour, enum class E_AIBehaviour CallFunc_Convert_To_Behaviour_Behaviour_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_OwnerActor, bool CallFunc_IsValid_ReturnValue_2, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


