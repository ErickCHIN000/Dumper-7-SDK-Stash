#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD0 - 0xA0)
// BlueprintGeneratedClass RALS_ComponentManagerCharacter.RALS_ComponentManagerCharacter_C
class URALS_ComponentManagerCharacter_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                        NewComponents;                                     // 0xA8(0x10)(Edit, BlueprintVisible)
	TArray<class UActorComponent*>               ComponentsRef;                                     // 0xB8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ACharacter*                            Character;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URALS_ComponentManagerCharacter_C* GetDefaultObj();

	void DestroyComponent(class UActorComponent*& ComponentToDestroy, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1);
	void AddNewComponent(class UClass* Class, int32 CallFunc_Array_AddUnique_ReturnValue, class UActorComponent* CallFunc_AddComponentByClass_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnBeginPlay(const TArray<class UClass*>& UniqueComponents, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UActorComponent* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UActorComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void Pre_Initialize_Component(class ACharacter* Character);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_RALS_ComponentManagerCharacter(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


