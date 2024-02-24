#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x260 - 0x220)
// BlueprintGeneratedClass bp_EveningActionsRelayActor.bp_EveningActionsRelayActor_C
class Abp_EveningActionsRelayActor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            RelayOut;                                          // 0x230(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class Abp_EveningActionsRelayActor_C*        CallerActor;                                       // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMother;                                          // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EveningActivityEnded;                              // 0x250(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Abp_EveningActionsRelayActor_C* GetDefaultObj();

	void Relay(class FName Input);
	void ReportEnd();
	void RequestActivity(class FName Input);
	void ExecuteUbergraph_bp_EveningActionsRelayActor(int32 EntryPoint, TArray<class Abp_EveningActionsRelayActor_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, class Abp_EveningActionsRelayActor_C* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_Input_1, class FName K2Node_CustomEvent_Input);
	void EveningActivityEnded__DelegateSignature();
	void RelayOut__DelegateSignature(class FName Output, class Abp_EveningActionsRelayActor_C* NewParam);
};

}


