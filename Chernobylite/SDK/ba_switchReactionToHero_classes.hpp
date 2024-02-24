#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass ba_switchReactionToHero.ba_switchReactionToHero_C
class Aba_switchReactionToHero_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class ACGAICharacter*>                Chasers;                                           // 0x230(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class Aba_switchReactionToHero_C* GetDefaultObj();

	void DisableChasingSoldiers();
	void EnableChasingSoldiers();
	void ResetAggro();
	void ExecuteUbergraph_ba_switchReactionToHero(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class ACGAICharacter* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, class ACGAICharacter* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class ACGAICharacter* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue_2, bool CallFunc_ClassIsChildOf_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, TArray<class ACGAICharacter*>& CallFunc_GetCurrentAggroList_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, TArray<class ACGAICharacter*>& CallFunc_GetCurrentAggroList_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
};

}


