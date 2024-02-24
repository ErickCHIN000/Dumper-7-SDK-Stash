#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x238 - 0x220)
// BlueprintGeneratedClass Action_StandIn_Whirlwind.Action_StandIn_Whirlwind_C
class UAction_StandIn_Whirlwind_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(Transient, DuplicateTransient)
	class AAuxActor_IceAxe_Whirlwind_C*          AuxActor;                                          // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                StandIn;                                           // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_StandIn_Whirlwind_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void StartVFX();
	void EndVFX();
	void RemoveAuxActor();
	void AssignAuxActor();
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_StandIn_Whirlwind(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IBPI_PlayerStandin_C> K2Node_DynamicCast_AsBPI_Player_Standin, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor1, bool CallFunc_IsValid_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, class UGbxAction* CallFunc_K2Play_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AAuxActor_IceAxe_Whirlwind_C* K2Node_DynamicCast_AsAux_Actor_Ice_Axe_Whirlwind, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_Less_IntInt_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, bool CallFunc_IsValid_ReturnValue1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


