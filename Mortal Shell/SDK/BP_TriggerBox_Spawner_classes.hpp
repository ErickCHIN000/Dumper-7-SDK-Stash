#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x268 - 0x228)
// BlueprintGeneratedClass BP_TriggerBox_Spawner.BP_TriggerBox_Spawner_C
class ABP_TriggerBox_Spawner_C : public ATriggerBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextRenderComponent*                  TextRender;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Rune_Container_C*>          BP_RuneContainer;                                  // 0x238(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class AAdvancedEnemySpawner_StormMode_C*> BP_Spawners;                                       // 0x248(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
	TArray<class FString>                        SpawnersLog;                                       // 0x258(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TriggerBox_Spawner_C* GetDefaultObj();

	void UserConstructionScript(const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void AddSpawnerToTrigger(class AAdvancedEnemySpawner_StormMode_C* Spawner);
	void ExecuteUbergraph_BP_TriggerBox_Spawner(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class AAdvancedEnemySpawner_StormMode_C* K2Node_Event_Spawner, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class ABP_Rune_Container_C* CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess, class AAdvancedEnemySpawner_StormMode_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1);
};

}


